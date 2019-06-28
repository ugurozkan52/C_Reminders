/* 
 * File:   C_Lab_2
 * Author: Ugur Ozkan
 *
 * Created on 27 Agustos 2019 Persembe,
 *
 * Konu : if ve else ayni zamanda karsilastirma operatörü kullanimi
 *
 */
 
 #include <stdio.h>
 #include <stdlib.h> 
 
 #define TRUE	1

 #define FALSE	0 
 
 void main()
 {
 	
 	int deger_int_1, deger_int_2;
 	
 	/* scanf("%tip türü",&tip_adi) fonksiyonu ile klavyeden deger alinir */
 	/* getchar(tip_adi) ilede klavyeden deger alinabilir */
 	/* puts(tip_adi) fonksiyonu ilede ekarana veri basilanilir */
 	
 	printf("Bir sayi giriniz : \n\r");
 	scanf("%d",&deger_int_1);
 	printf("ikinci sayi giriniz : \n\r");
 	scanf("%d",&deger_int_2);
 	
 	printf("Deger 1 : %d \n\r",deger_int_1);
 	printf("Deger 2 : %d \n\r",deger_int_2);
 	
 	if((deger_int_1 <10) &&  (deger_int_2 <10))
	{
		printf("Degerler 10'dan kucuktur.\n\r");
	}
	else if ((deger_int_1 > 10) &&  (deger_int_2 > 10))
	{
		printf("Degerler 10'dan buyuktur.\n\r");
	}
	else if (deger_int_1 != deger_int_2)
	{
		printf("Degerler esit degildir.\n\r");
	}
	else if (deger_int_1 == deger_int_2)
	{
		printf("Degerler esittir.\n\r");
	}
		
		
	return 0;
	
 }
