#pragma once
#include "Eventos.h"

ref class Lista
{
private:
	void ActualizarTamano(){
		int Contador = 0;
		Eventos^ Auxiliar = Cabeza;
		while (Auxiliar != nullptr)
		{
			Contador++;
			Auxiliar = Auxiliar->Siguiente;
		}
		Tamano = Contador;
	}
public:
	int Tamano;
	Eventos^ Cabeza = nullptr;

	//Procedimientos Basicos de lista
	void Push(Eventos^ Nuevo){
		Eventos^ Auxiliar = Cabeza;
		if(Cabeza != nullptr){
			while (Convert::ToInt16(Nuevo->Hora) > Convert::ToInt16(Auxiliar->Hora)) {
				if (Auxiliar->Siguiente != nullptr) {
					Auxiliar = Auxiliar->Siguiente;
				}
				else {
					break;
				}
			}
			if (Auxiliar->Siguiente != nullptr) {
				Auxiliar->Siguiente = Nuevo;
				Nuevo->Anterior = Auxiliar;
			}
			else {
				Eventos^ Auxiliar2 = Auxiliar->Siguiente;
				Auxiliar->Siguiente = Nuevo;
				Nuevo->Anterior = Auxiliar;
				Nuevo->Siguiente = Auxiliar2;
				Auxiliar2->Anterior = Nuevo;
			}

			ActualizarTamano();
		}
		else {
			Cabeza = Nuevo;
			
		}

	}
	void POP() {}

	//Procedimientos de Ordenamiento
	void OrdenarPorHora(){}
	void OrdenAlfabetico(){}

	//Funciones de retorno
	//Eventos^ EventoMostrar(){}
};

