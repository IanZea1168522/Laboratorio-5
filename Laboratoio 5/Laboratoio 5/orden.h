#pragma once
#include "pokemon.h"
class orden
{
public:
	//métodos
	//cambio en las posiciones del arreglo
	void swap(pokemon *poke1, pokemon *poke2);
	//selection sort entre las generaciones
	void selectionSortGen(pokemon lista[], int n);
	//selection sort entre el número
	void selectionSortNum(pokemon lista[], int n);
};

