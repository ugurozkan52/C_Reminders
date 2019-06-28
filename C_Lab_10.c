/* 
 * File:   C_Lab_10
 * Author: Ugur Ozkan
 *
 * Created on 2 Agustos 2019 Persembe,
 *
 * Konu : Pointerlar 2
 *
 */
 
 #include <stdio.h>
 #include <stdlib.h> 
 
 #define TRUE	1

 #define FALSE	0 

int __max_array(int *dizi_adi, int dizi_uzunlugu); 						// Dizinin maximum elemanini bulur

int __strlen(char *Dizi_Ch);											// Dizinin uzunluðunu bulur

char *__strchr(char *Dizi, int ch);										// Dizinin içinde karakter arar

int main(int argc, char *argv[]) {
	int max_eleman;
	
	int Dizi[10] = {100,105,102,148,48,984,512,444,777,753 };			// int türünde dizi tanimlandi
	
	char Dizi_Ch[] ={'a','b','c','d','e','f','g','h','i','l'};			// char türünde dizi tanimlandi
	
	char *Aranan_Eleman;
	
	printf("Maksimum dizi elamanidir : %d \n\r",__max_array(Dizi,10));	// Max eleman ekrana yazdirildi.
	
	printf("Dizi uzunlugu : %d \n\r",__strlen(Dizi_Ch));				// Dizi uzunlugu ekrana yazdirildi.
	
	Aranan_Eleman = __strchr(Dizi , 'x');								// Aranan eleman atandi
	
	printf("Dizi içinde elamani var : %s \n\r",Aranan_Eleman);			// Aranan eleman ekrana yazdirildi.
	 
	return 0;
}

/* Bir dizinin maksimum elemanini bulan fonksiyon */

int __max_array(int *dizi_adi, int dizi_uzunlugu)
{
	int max_dizi_elamani;
	int Counter;
	
	max_dizi_elamani = dizi_adi[0];
	
	for(Counter = 0; Counter < dizi_uzunlugu; Counter++){
	
		if(max_dizi_elamani < dizi_adi[Counter])
		{
			max_dizi_elamani = dizi_adi[Counter];
		}
	}
	return max_dizi_elamani;
}


/* Bir karakter dizisinin uzunluðunu bulan fonksiyon */

int __strlen(char *Dizi_Ch)
{
	int Dizi_Uzunlugu;
	
	while(*Dizi_Ch != '\0')
	{
		Dizi_Ch ++;
		Dizi_Uzunlugu ++;
	}
	return Dizi_Uzunlugu;
}

/* Bir dizi içeriginde karakter aramasi yapar */

char *__strchr(char *Dizi, int ch)
{
	
	while(*Dizi != '\0')
	{
		if(*Dizi == ch)
			return Dizi;	
		++Dizi;
	}
	if(ch == '\0')
	{
		return Dizi;
	}
	return 0;
}
