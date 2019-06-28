/* 
 * File:   C_Lab_4.c
 * Author: Ugur Ozkan
 *
 * Created on 27 Agustos 2019 Persembe
 *
 * Konu : Fonksiyonlarýn kullanimi
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <float.h>
#include <limits.h>
#include <string.h>

#define TRUE	1

#define FALSE 	0

/*	isalpha: bir deger karakter ise true degil ise false verir	*/
int __isalpha(char ch){
	
	if( ( (ch >= 'a') && (ch <= 'z') ) || ( (ch >= 'A') && (ch <= 'Z') ) )
		return TRUE;
	else
		return FALSE;	
}

/*	toupper: fonksiyonu bir karakter küçük ise büyük halini verir	*/
int __toupper(int ch){
	if( (ch >= 'a') && (ch <= 'z') )
		return ch - 'a' + 'A' ;
	return ch;
}

/*	tolower: fonksiyonu büyük karakterin küçügünü verrir	*/
int __tolower(int ch){
	if( (ch >= 'A') && (ch <= 'Z') )
		return ch - 'A' + 'a';
	return ch;
}

void main() 
{
	int deger_ch;
	scanf("%c",&deger_ch);
	
	if( ((deger_ch >= 'a') && (deger_ch <= 'z') ) || ((deger_ch >= 'A') && (deger_ch <= 'Z')) )
	{
		printf("Deger karakter mi? : %d \n\r ",__isalpha(deger_ch));
		printf("Karakterin buyuk hali : %c \n\r ",__toupper(deger_ch));
		printf("Karakterin kucuk hali : %c \n\r",__tolower(deger_ch));
	}
	else
		printf("Lutfen karakter giriniz \n\r");
	
}

