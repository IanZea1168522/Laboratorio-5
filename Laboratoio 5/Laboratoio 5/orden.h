#pragma once
#include "pokemon.h"
class orden
{
public:
	//m�todos
	//cambio en las posiciones del arreglo
	void swap(pokemon *poke1, pokemon *poke2);
	//selection sort entre las generaciones
	void selectionSortGen(pokemon lista[], int n);
	//selection sort entre el n�mero
	void selectionSortNum(pokemon lista[], int n);
	//quik sort para las generaciones
	void quikSortGen(pokemon* lista[], int start, int end);
	//metodo para ir dividiendo el arreglo
	int divideGen(pokemon* lista[], int start, int end);
	//m�todo shell para las generaciones
	void shellSortGen(pokemon lista[], int n);
	//m�todo shell para el n�mero
	void shellSortNum(pokemon lista[], int n);
};

