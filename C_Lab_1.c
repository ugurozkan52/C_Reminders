/* 
 * File:   C_Lab_1.c
 * Author: Ugur Ozkan
 *
 * Created on 27 Agustos 2019 Persembe
 *
 * Konu : Sizeof(tür) operatörü ve tip karakterleri kullanimi
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <float.h>
#include <limits.h>
#include <string.h>

main() {
	
	char	deger_ch;
    int		deger_int = 113;
    float	deger_float = 23.19;
	char 	metin_ch [9] = "UGUROZKAN";
	int 	int_dizi[10];
	
	/* sizeof(tür) operatör türü yazýlan deðiþkenin hafizadaki kapladýðý yeri gösterir */
	
	printf("char            %d\n", sizeof(char));
    printf("unsigned char   %d\n", sizeof(unsigned char));
    printf("signed char     %d\n", sizeof(signed char));
    printf("int             %d\n", sizeof(int));
    printf("unsigned int    %d\n", sizeof(unsigned int));
    printf("short           %d\n", sizeof(short));
    printf("short int       %d\n", sizeof(short int));
    printf("unsigned short  %d\n", sizeof(unsigned short));
    printf("long            %d\n", sizeof(long));
    printf("long int        %d\n", sizeof(long int));
    printf("long long int   %d\n", sizeof(long long int));
    printf("signed long int %d\n", sizeof(signed long int));
    printf("u long long int %d\n", sizeof(unsigned long long int));
    printf("unsigned long   %d\n", sizeof(unsigned long));
    printf("float           %d\n", sizeof(float));
    printf("max float       %E\n", FLT_MAX);
    printf("min float       %E\n", FLT_MIN);
    printf("double          %d\n", sizeof(double));
    printf("long double     %d\n", sizeof(long double));
    printf("int[10]         %d\n", sizeof(int[10]));
    printf("number of array elements %d\n",sizeof(int_dizi)/sizeof(int));	
    
    printf("\n");
    printf("///////////////////////////////////////////\n");
    printf("\n");
	
	/* Tip karakterleri kullanilan degiskenin türünü belirtir. % isareti ile baslatilir */
	
	printf("Value_int = %d\nValue_float = %.5f\n",deger_int,deger_float);
	printf("Karakterin int ==> desimal	%d\n",deger_int);
	printf("Karakterin int ==> hex		%x\n",deger_int);
	printf("Karakterin int ==> hex		%X\n",deger_int);
	printf("Karakterin int ==> octal	%o\n",deger_int);
	printf("Karakterin int ==> usigned	%u\n",deger_int);
	printf("Karakterin float		%.4f\n",deger_float);
	printf("karakterin string		%s\n",metin_ch);
	printf("Karakterin char==>		%c\n",deger_ch);

	return 0;
}
    
