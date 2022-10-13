#pragma once
#include "orden.h"
#include <string>
//implementación del método swap
void orden::swap(pokemon* poke1, pokemon* poke2)
{
	//se crea un objeto temporal para almacenar el cambio
	pokemon cambio = *poke1;
	*poke1 = *poke2;
	*poke2 = cambio;
};
//implementación del método de selection sort para las generaciones
void orden::selectionSortGen(pokemon lista[], int n)
{
	int i, j, indice;
	//ciclo para ir pasando uno a uno el arreglo
	for (i = 0; i < n; i++)
	{
		//se encuentra el mínimo
		indice = i;
		for (j = i + 1; j < n; j++)
		{
			if (lista[j].gen < lista[indice].gen)
			{
				indice = j;
			}
		}
		swap(&lista[indice], &lista[i]);
	}
};
//implementación del método de selection sort para los numeros
void orden::selectionSortNum(pokemon lista[], int n)
{
	int i, j, indice;
	//ciclo para ir pasando uno a uno el arreglo
	for (i = 0; i < n; i++)
	{
		//se encuentra el mínimo
		indice = i;
		for (j = i + 1; j < n; j++)
		{
			if (lista[j].numero < lista[indice].numero)
			{
				indice = j;
			}
		}
		swap(&lista[indice], &lista[i]);
	}
};
//método shellSort para las generaciones
void orden::shellSortGen(pokemon lista[], int n)
{
	int i, j, k, intervalo;
	intervalo = n / 2;
	pokemon temp;
	while (intervalo > 0)
	{
		for (i = intervalo; i <= n; i++)
		{
			j = i - intervalo;
			while (j >= 0)
			{
				k = j + intervalo;
				if (lista[j].gen <= lista[k].gen)
				{
					j = -1;
				}
				else
				{
					temp = lista[j];
					lista[j] = lista[k];
					lista[k] = temp;
					j -= intervalo;
				}
			}
		}
		intervalo = intervalo / 2;
	}
};
//método shell sort para el número nacional
void orden::shellSortNum(pokemon lista[], int n)
{
	int i, j, k, intervalo;
	intervalo = n / 2;
	pokemon temp;
	while (intervalo > 0)
	{
		for (i = intervalo; i <= n; i++)
		{
			j = i - intervalo;
			while (j >= 0)
			{
				k = j + intervalo;
				if (lista[j].numero <= lista[k].numero)
				{
					j = -1;
				}
				else
				{
					temp = lista[j];
					lista[j] = lista[k];
					lista[k] = temp;
					j -= intervalo;
				}
			}
		}
		intervalo = intervalo / 2;
	}
};
//metodo para dividir
