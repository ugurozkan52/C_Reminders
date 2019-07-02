/* 
 * File:   C_Lab_12
 * Author: Ugur Ozkan
 *
 * Created on 01 Temmuz 2019 Pazartesi
 *
 * Konu : C_Lab_12
 *
 */
 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define RESET	0
#define SET		1


/* Parser fonksiyon prototipi eklendi */
char __data_parse(char * Data);					
 
int main(int argc, char *argv[]) {

	/* Data verisi dizi olarak tanimalandi */ 
	char Data[] = "#UGUR,OZKAN,ULUDAG#";			
	
	printf("%s\n\r",Data);
	__data_parse(Data);
	return 0;
}

/* Parser fonsiyonu */
char __data_parse(char * Data){						
	
	/* Parse edilecek datanin ilk belirleyici elemani */
	char Data_Buffer = '#';							
	/* Datayi parse edecek karakter */
	char Data_Parse = ',';							
	char Data_Count = 0;
	char Data_Status ;
	
	/* Parse edilecek datalarin yazilacagi diziler tanimlandi */
	char Ad[4];									
	char SoyAd[5];
	char Okul[6];
	
	/* Datanin ilk elemani istenilen deger mi? kontrol */
	if(Data_Buffer == Data[0]){						
		
		printf("# Ilk Data \n\r");	
		/* Data_Status bayragi set edildi */
		Data_Status = SET;							 
		printf("Data Status SET edildi. \n\r");
		
		int i = 0;
		/* Data tamamen tarandi ve ayraclar sayisi alindi */
		for(i=0; i<19; i++){						
			
			if(Data[i] == Data_Parse)
				Data_Count++;		
		}
		
	printf("Data count sayisi %d \n\r",Data_Count);
		
	}
	
	/* Data parcalanarak istenilen dizide yerine yazildi */
	
	if((Data_Status == SET)||(Data_Count == 2)){	//
		
		printf("Data Bolunuyor!!!\n\r");
		
		int Count_1 = 0;
		for(Count_1=0; Count_1<4; Count_1++){
			
			Ad[Count_1] = Data[Count_1+1];	
		}
		int Count_2 = 0;
		for(Count_2=0; Count_2<5; Count_2++){
			
			SoyAd[Count_2] = Data[Count_2+6];	
		}
		int Count_3 = 0;
		for(Count_3=0; Count_3<6; Count_3++){
			
			Okul[Count_3] = Data[Count_3+12];	
		}
	}
	/* Parcalanan data ekrana bastirildi */
	printf("Data 1 Bolum = %s\n\r",Ad);
	printf("Data 2 Bolum = %s\n\r",SoyAd);
	printf("Data 3 Bolum = %s\n\r",Okul);
}

	 

	

