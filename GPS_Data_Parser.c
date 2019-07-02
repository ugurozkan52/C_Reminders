/* 
 * File:   GPS_Data_Parser
 * Author: Ugur Ozkan
 *
 * Created on 02 Temmuz 2019 Sali,
 *
 * Konu : Gps_Data_Parser
 *
 */
 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define RESET	0
#define SET		1


/* __data_parse() fonksiyonu verilen gps datasini ayirir */

char __data_parse(char * Data);
 
int main(int argc, char *argv[]) {

	/* GPS verisi için GPS[] dizisi olusturuldu  */
	char GPS[] = "$GPRMC,235316.000,A,4003.9040,N,10512.5792,W,0.09,144.75,141112,,*19";
	
	printf("%s\n\r",GPS);
	__data_parse(GPS);
	return 0;
}

/* __data_parse() fonksiyonu verilen gps datasini ayirir */
char __data_parse(char * Data){
	
	/* Data_Buffer degiskeni ilk datanin baslangicini belirtir */
	char Data_Buffer = '$';
	
	/* Data_Request degiskeni data formatini ayirmak için kullanilir  */
	char Data_Request[6] = "GPRMC,";
	
	/* Data_Parse degiskeni datanin hangi kritere göre parçalanacagini gösterir */
	char Data_Parse = ',';
	
	/* Data_Count datanin içinde bulunan belli karakteri saymaya yarar */
	char Data_Count = 0;
	
	/* Data_Status degiskeni data dogru formatta gelirse flag görevi görur */
	char Data_Status ;
	
	/* GPS verisinin ilk datasi zamandir */
	char Time[6];
	/* GPS verisinin ikinci datasi BOYLAM'dir */
	char Longitude[10];
	/* GPS verisinin üçüncü datasi ENLEM'dir */
	char Latitude[10];
	/* GPS'in kaç uyduya baglandigini gösterir */
	char Number_of_Satellite[2];
	/* GPS verisinde RAKIM degerini gösterir */
	char Altitude[5];
	
	/* GPS verisinin ilk datasi kntrol edilir */
	if(Data_Buffer == Data[0]){
		
		printf("# Ilk Data %c \n\r",Data[0]);
		
		int a = 0; 
		for(a=0; a<6; a++){
			
			if(Data_Request[a] == Data[a+1])
			{
				Data_Status = SET;
				printf("Data Status SET edildi. \n\r");	
			}
			else{
				Data_Status = RESET;
				printf("Data Status RESET edildi. \n\r");
			}
		}
		
		/* Data dogrulugu için virgülün sayisina bakilir */
		int b=0;
		for(b=0; b<80; b++){
			
			if(Data[b] == ',') Data_Count++;
			
		}
		printf("Data count sayisi %d \n\r",Data_Count);
		printf("\n\r");
	}
	
	/* Virgül sayisi ve data verisi dogru ise veriler istrenilen diziye yazilir */
	if((Data_Status == SET)||(Data_Count == 11)){
		
		printf("*********************************\n\r");
		printf("Data Bolunuyor!!!\n\r");
		
		/* Zaman degeri yazilir */
		int Count_1 = 0;
		for(Count_1=0; Count_1<6; Count_1++){
			
			Time[Count_1] = Data[Count_1+7];	
		}
		/* Boylam degeri yazilri */
		int Count_2 = 0;
		for(Count_2=0; Count_2<9; Count_2++){
			
			Longitude[Count_2] = Data[Count_2+19];	
		}
		/* Enlem degeri yazdirilir */
		int Count_3 = 0;
		for(Count_3=0; Count_3<10; Count_3++){
			
			Latitude[Count_3] = Data[Count_3+32];	
		}
		Data_Count = 0;
	}
	/* Zaman, Boylam ve Enlem degerleri ekrana yazdirilir */
	printf("*********************************\n\r");
	printf("Time = %s\n\r",Time);
	printf("*********************************\n\r");
	printf("Longitude = %s\n\r",Longitude);
	printf("*********************************\n\r");
	printf("Latitude = %s\n\r",Latitude);
	printf("*********************************\n\r");
}


	 

	

