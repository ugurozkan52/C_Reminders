/* 
 * File:   C_Lab_5
 * Author: Ugur Ozkan
 *
 * Created on 27 Agustos 2019 Persembe,
 *
 * Konu : Switch case yapisi kullanilacaktir
 *
 */

#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {

	int deger_int;
	
	printf("Bir sayi giriniz : \n\r");
	
	scanf("%d",&deger_int);
	
	/* switch case yapisi kullanildi */
	
	switch (deger_int)
	{
	
		case 1:
			printf("Deger 1");
			break;
		case 2:
			printf("Deger 2");
			break;
		case 3:
			printf("Deger 3");
			break;
		case 4:
			printf("Deger 4");
			break;
		case 5:
			printf("Deger 5");
			break;
		case 6:
			printf("Deger 6");
			break;
		case 7:
			printf("Deger 7");
			break;
		case 8:
			printf("Deger 8");
			break;
		case 9:
			printf("Deger 9");
			break;
		case 0:
			printf("Deger 0");
			break;
	}	
	
	printf("\n\r");
	
	/* for(;;) döngüsü kulanildi */
	
	for(deger_int ; deger_int >= 0 ; deger_int--)
	{
		printf("Deger sayac = %d \n\r",deger_int);
	}
	return 0;
}
