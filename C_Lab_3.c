/* 
 * File:   C_Lab_3
 * Author: Ugur Ozkan
 *
 * Created on 27 Agustos 2019 Persembe,
 *
 * Konu : do while kullanimi ve for kullanilacaktir
 *
 */
 
 #include <stdio.h>
 #include <stdlib.h> 
 
 #define TRUE	1

 #define FALSE	0 
 
 void main()
 {
 	
 	int deger_int_1 , deger_int_2;
 	
	/* do while önce kod do içindeki fonsiyonlari yerine getirir sonra while ile ilgili kosulu kontrol eder eger kosul saglaniyorsa dönguden cikar */
 	do{
 		
 		printf("Bir sayi giriniz : \n\r");
 		scanf("%d",&deger_int_1);
 		
 		printf("Ikinci sayi giriniz : \n\r");
 		scanf("%d",&deger_int_2);
	 }
	 while(deger_int_1 < deger_int_2);
	 
	 printf("Deger 1 kucuktur Deger 2'den \n\r");
	 
	 return 0;
 	
 }
