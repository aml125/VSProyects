// Ensamblador en línea. Procesador: x86 (32 bits)
#include <stdio.h>
#include <iostream>

using namespace std;

void burbuja(int* lista, int tam);

void mostrarLista(int* lista, int tam)
{
	for (int i = 0; i < tam; i++)
	{
		cout << lista[i] << " ";
	}
	cout << endl;
}

int main( void )
{
	int lista []={2, 1, 3, 40, 34, 1, 9, 12 ,45 ,1234, 34, 43, 34, 94, 12, 24, 23, 45, 56, 67, 78};
	int tam = 20;
	burbuja(lista, tam);
	mostrarLista(lista, tam);
	char espera;
	cin >> espera;
}

void burbuja(int* lista, int tam)
{
	__asm
	{
		mov esi, lista; Cargar la lista
		mov ebx, 0; Variable i = 0
		mov ecx, tam; size of list
		
		mov eax, [esi + 4]

bucle1:
		cmp ebx, ecx; bucle1
		jge fin1; Hasta i = n - 1 (incluido)
			mov eax, ecx; variable j = n - 1
			dec eax
bucle2:
			cmp eax, ebx; bucle 2
			jle fin2; Hasta j = i + 1 (incluido)
				dec eax
				mov edx, [esi + eax*4]; operando 1
				inc eax
				mov edi, [esi + eax*4]; operando 2
				cmp edx, edi; si (vector[j-1]<vector[j])
				jl cambiar
endif:
			dec eax; j--
			jmp bucle2
fin2:
		inc ebx
		jmp bucle1
fin1:

jmp fin
cambiar:
		dec eax
		mov edx, [esi + eax*4] ;intercambiar(vector[j-1],vector[j])
		inc eax
		xchg edx, [esi + eax*4]
		dec eax
		mov [esi + eax*4], edx
		inc eax
		jmp endif
fin:
	}
}