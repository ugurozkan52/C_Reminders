/* 
 * File:   C_Lab_7
 * Author: Ugur Ozkan
 *
 * Created on 27 Agustos 2019 Persembe,
 *
 * Konu : Bitsel operat�rlerin kullanimi
 *
 */

#include <stdio.h>
#include <stdlib.h>

#define TRUE	1

#define FALSE	0 

int main(int argc, char *argv[]) {

	int Binary_1 = 0x0042, Binary_2 = 0x0065; 					// 0x01000010 ve 0x01100101

	/* Binary 1'e t�mleme operat�r� (~) */
	
	int Binary = 0x0032;										// 0x00110010 t�mlenmemis hali
	
	Binary =  ~Binary;											// 0x11001101 1'e t�mlenmis hali
	
	printf("Binary 0x0032 1'e tumleme hali : %X \n\r",Binary);
	
	/* Binary 2'ye t�mleme islemi 1'e t�mleme islemine +1 eklenir*/
	
	Binary = Binary + 1; 										// 0x11001110 2 t�mlenmis hali 
	
	printf("Binary 0x0032 sayisinin 2'ye tumleyeni %X \n\r",Binary);
	
	
	/* Binary �zel veya operat�r� (^) iki operandi karsilastirir esitse 0 degilse 1 verir */
	
	if((Binary ^ 0xFFFFFFCE) == 0)
		printf("Sayi esitdir. \r\n");
	else
		printf("Sayi esit degildir.\n\r");
	
	
	/* Ve (&) Veya (|) bitsel operat�rleri Ve (�arpim) Veya (Toplama) */
	
	Binary_1 = (Binary_1 & Binary_2);
	
	printf("Binary1 ve Binary2 (&) islemi = %d \n\r",Binary_1);
	
	Binary_1 = (Binary_1 | Binary_2);
	
	printf("Binary1 veya Binary2 (&) islemi = %d \n\r",Binary_1);
	
	
	/* Bit �teleme operat�rleri sola �telem(<<) saga �teleme(>>) */
	/* Bir biti saga 1 bit �telemek 2 ile b�lmektir. */
	/* Bir biti sala 1 bit �telemek 2 ile carpmaktir. */
	
	Binary_1 = 0x0042, Binary_2 = 0x0065;							//  66 ve 53
	
	printf("Decimal Binary1 %d	ve	Binary2 %d	\n\r",Binary_1,Binary_2);
	
	Binary_1 >>= 1;
	Binary_2 >>= 2;
	
	printf("Decimal Binary1 %d	ve	Binary2 %d	\n\r",Binary_1,Binary_2);
	printf("HEX Binary1 %x	ve	Binary2 %x	\n\r",Binary_1,Binary_2);

	
	
	return 0;
}
