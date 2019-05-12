#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <float.h>
#include <limits.h>
#include <string.h>

/*	isalpha: bir deger karakter ise true degil ise false verir	*/
int myisalpha(char ch){
	
	if( ( (ch >= 'a') && (ch <= 'z') ) || ( (ch >= 'A') && (ch <= 'Z') ) )
		return ch;
	else
		return 0;	
}

/*	toupper: fonksiyonu bir karakter küçük ise büyük halini verir	*/
int mytoupper(int ch){
	if( (ch >= 'a') && (ch <= 'z') )
		return ch - 'a' + 'A' ;
	return ch;
}

/*	tolower: fonksiyonu büyük karakterin küçügünü verrir	*/
int mytolower(int ch){
	if( (ch >= 'A') && (ch <= 'Z') )
		return ch - 'A' + 'a';
	return ch;
}

main() {
	
	char	Value_ch;
    int		Value_int = 113;
    float	Value_float = 13.19;
	char 	Metin_ch [9] = "UGUROZKAN";
	
	
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
    int integer_array[10];
    printf("number of array elements %d\n",sizeof(integer_array)/sizeof(int));	

	printf("///////////////////////////////////////////\n"); 
	
	/*	 scanf("%d %f",&a,&b);	*/
    Value_ch = getchar(); 
    
    if(myisalpha(Value_ch))
    	printf("Alfabetik karakter!\n");
    else
	  	printf("Alfabetik karakter degildir!\n");
	  	
	printf("Karakterin buyuk hali	%c\n",mytoupper(Value_ch));
	printf("Karakterin kucuk hali	%c\n",mytolower(Value_ch));
	
	printf("///////////////////////////////////////////\n");
	printf("Value_int = %d	ve	Value_float = %.5f\n",Value_int,Value_float);
	printf("Karakterin int ==> desimal	%d\n",Value_int);
	printf("Karakterin int ==> hex		%x\n",Value_int);
	printf("Karakterin int ==> hex		%X\n",Value_int);
	printf("Karakterin int ==> octal	%o\n",Value_int);
	printf("Karakterin int ==> usigned	%u\n",Value_int);
	printf("Karakterin float		%.4f\n",Value_float);
	printf("karakterin string		%s\n",Metin_ch);
	printf("Karakterin char==>		%c\n",Value_ch);

	return 0;
}
