// Ensamblador en línea. Procesador: x86 (32 bits)
#include <stdio.h>
#include <iostream>

using namespace std;

int burbuja(int* lista);
int main( void )
{
	int lista []={0,1};
	burbuja(lista);
	cout << lista[0] << " " << lista[1];
	char fuck;
	cin >> fuck;
}

int burbuja(int* lista)
{
	int i = 0;
	int j = 0;
	//int n = sizeof(lista);
	int n = 20; //Tamaño del array

	__asm
	{
		mov esi, list; Cargar la lista
bucle1:
		cmp i, n
		jl fin1; Hasta i = n - 1
	bucle2:
			mov ecx, n   ; j = n
			mov eax, i 
			cmp eax ecx
			jg fin2

			mov ebx, [esi]
			mov edx, 


		// devuelve el resultado de eax
	}
	return 0;
}