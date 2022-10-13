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
	//quik sort para las generaciones
	void quikSortGen(pokemon* lista[], int start, int end);
	//metodo para ir dividiendo el arreglo
	int divideGen(pokemon* lista[], int start, int end);
	//método shell para las generaciones
	void shellSortGen(pokemon lista[], int n);
	//método shell para el número
	void shellSortNum(pokemon lista[], int n);
};

