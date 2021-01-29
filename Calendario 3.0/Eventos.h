#pragma once

using namespace System;

ref class Eventos
{
public:
	Eventos^ Siguiente;
	Eventos^ Anterior;
	String^ Fecha;
	String^ Hora;
	String^ Nombre;
	String^ Recordatorio;
};

