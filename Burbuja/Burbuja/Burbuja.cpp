// Ensamblador en línea. Procesador: x86 (32 bits)
#include <stdio.h>
#include <iostream>

using namespace std;

int burbuja(int* lista);

void mostrarLista(int* lista)
{
	for (int i = 0; i < 3; i++)
	{
		cout << lista[i] << " ";
	}
	cout << endl;
}

int main( void )
{
	int lista []={2,1,3};
	cout << burbuja(lista) << endl;
	mostrarLista(lista);
	char fuck;
	cin >> fuck;
}

int burbuja(int* lista)
{

	__asm
	{
		mov esi, lista; Cargar la lista
		mov ebx, 0; Variable i = 0
		mov ecx, 3; size
		
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
				jl swaperfucker
endif:
			dec eax; j--
			jmp bucle2
fin2:
		inc ebx
		jmp bucle1
fin1:

jmp fin
swaperfucker:
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