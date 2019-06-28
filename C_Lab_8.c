/* 
 * File:   C_Lab_8.c
 * Author: Ugur Ozkan
 *
 * Created on 27 Agustos 2019 Persembe
 *
 * Konu : Array Kullanimi
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <float.h>
#include <limits.h>
#include <string.h>



int main(int argc, char *argv[]) {
	
	int Count = 0;
	char Dizi[]="Hava çok güzel olacak!!!";
	
	/* Elimizde var olan ama uzunluðunu bilmedigimiz dizi uzunlugunu bulmaya yarar */
	
	//while(Dizi[Count]!='\0')
	
	for(Count; Dizi[Count] != '\0'; ++Count);
	
	printf("Dizi uzunlugu : %d\n\r",Count) ;
		
	return 0;
}
