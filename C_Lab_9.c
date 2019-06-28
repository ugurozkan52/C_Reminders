/* 
 * File:   C_Lab_9.c
 * Author: Ugur Ozkan
 *
 * Created on 27 Agustos 2019 Persembe
 *
 * Konu : Pointer kullanimi ve pointer fonksiyonlri
 *
 */
 
 /*
 * 	Pointer tanimlama
 * 	char *s;				// Pointer tanimlandi
 *	s= (char *) 0x4fc0;		// S isimli göstericinin içine adres yerlestiriliyor
 * 	*s = 'a';				// S adresinin (0x4fc0) içerigin a karakteri yaziliyor 
 *	++s;					// S adresi 1 artiriliyor
 *	*s = 'b'				// Artirilina adrese b karakteri yaziliyor
 *
 *
 *
 */
 
#include <stdio.h>
#include <stdlib.h>

void __swap(int *x, int *y);		// Pointer fonk prototipi

int main(int argc, char *argv[]) {

	int a=10, b=20;
	
	__swap(&a,&b);					// pointer oldugu icin adres verilmeli Swap fonk. calistrildi.
	
	printf("Swap  A : %d\n\r",a);
	printf("Swap  B : %d\n\r",b);
	
	return 0;
}

void __swap(int *x, int *y)			// Pointer fonksiyon tanimlandi.
{									// Fonksiyon icerigi pointer oldugundan adres verilecek
	int Buff;
	
	Buff = *x ;
	*x = *y ;
	*y = Buff;
}
