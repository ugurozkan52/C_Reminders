/* 
 * File:   C_Lab_6
 * Author: Ugur Ozkan
 *
 * Created on 27 Agustos 2019 Persembe,
 *
 * Konu : Dizi operatörleri ile  kullanilacaktir
 *
 */

#include <stdio.h>
#include <stdlib.h>

#define TRUE 			1
#define FALSE			0


/*
    int array1[ARRAY_LENGGTH];
    array1[0] = 10;
    array1[0] = 20;
    array1[0] = 30;
    //...
    int array2[5] = {0,1,2,3,4};
    
    dizi elemanlari yazdirma
*/


int main(int argc, char *argv[]) {
	
	int dizi[10]={10,20,30,40,50,60,70,80,90,100};
	
	int Dizi_Lenght = 10, Counter = 0;
	
	for(Counter; Counter < 10; Counter++)
	{
		
		printf("Dizinin %d. elemani %d \n\r",(Counter + 1),dizi[Counter]);
		
		if(Counter == 10) Counter = 0;
			
	}
	
	return 0;
}


