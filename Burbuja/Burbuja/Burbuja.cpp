// Ensamblador en línea. Procesador: x86 (32 bits)
#include <stdio.h>
#include <iostream>

using namespace std;

void burbuja(int* lista);

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
	mostrarLista(lista);
	char fuck;
	cin >> fuck;
}

void burbuja(int* lista)
{

	__asm
	{
		mov edx, lista; Cargar la lista
		mov ebx, 0; Variable i = 0
		mov ecx, 3; size
		
		mov eax, [edx + 4]

bucle1:
		cmp ebx, ecx; bucle1
		jge fin1; Hasta i = n - 1 (incluido)
			mov ebp, ecx; variable j = n - 1
			dec ebp
bucle2:
			cmp ebp, ebx; bucle 2
			jle fin2; Hasta j = i + 1 (incluido)
				mov esi, [edx + (ebp - 1)*4]; operando 1
				mov edi, [edx + ebp*4]; operando 2
				cmp esi, edi; si (vector[j-1]<vector[j])
				jl swap
endif:
			dec ebp; j--
			jmp bucle2
fin2:
		inc ebx
		jmp bucle1
fin1:

jmp fin
swap:
		mov eax, [edx + (ebp - 1)*4] ;intercambiar(vector[j-1],vector[j])
		xchg eax, [edx + ebp*4]
		mov [edx + (ebp - 1)*4], eax
		jmp endif
fin:
	}
}