/* 
 * File:   C_Lab_11
 * Author: Ugur Ozkan
 *
 * Created on 02 Temmuz 2019 Sali,
 *
 * Konu : Enum kullanimi gösterilecektir
 *
 */

#include <stdio.h>
#include <stdlib.h>

/* Enum degisken tanimlasi ile sadece sabitler tanimlanir */

int main(int argc, char *argv[]) {
	
	enum Gunler{
		
		Pazartesi,    	/*1*/
		Sali,			/*2*/
		Carsamba,		/*3*/
		Persembe,		/*4*/
		Cuma,			/*5*/
		Cumartesi,		/*6*/
		Pazar			/*7*/
		
	};
	
	enum Ay{
		
		Ocak,			/*1*/
		Subat,			/*2*/
		Mart,			/*3*/
		Nisan,			/*4*/
		Mayis,			/*5*/
		Haziran,		/*6*/
		Temmuz,			/*7*/
		Agustos,		/*8*/
		Eylul,			/*9*/
		Ekim,			/*10*/
		Kasim,			/*11*/
		Aralik,			/*12*/
		
	};
	
	int Count_1=0;
	for(Count_1=0; Count_1<=Aralik; Count_1++)
		printf(" Yilin Aylari %d.Ay ---- %d \n\r", (Count_1+1), (Count_1+1));
	
	int Count_2=0;	
	for(Count_2=0; Count_2<=Aralik; Count_2++)
		printf(" Haftanin Gunleri %d.Gun ---- %d \n\r", (Count_2+1), (Count_2+1));
		
	return 0;
}
