/* 
 * File:   C_Lab_13
 * Author: Ugur Ozkan
 *
 * Created on 10 Temmuz 2019 Carsamba
 *
 * Konu : Struct konusu islenmistir.
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* Zaman datasi için tmr adinda struct olusturuldu */
struct tmr{
	int second;
	int minute;
	int hour;
	
	int day;
	int mounth; 
	int year;
};
/* tmr struct datasinin içine ilk degerler yazildi */
struct tmr first = {59,59,23,31,12,2019};
	
int main(int argc, char *argv[]) {
	
	/* tmr_info göstericisi struct gösterimine eklendi */	
	struct tmr *tmr_info;
	
	/* tmr_info gösterici adresi first olarak tanimlandi */
	tmr_info = &first;
	
	/* zaman ve tarih ekrana basildi */
	printf(" Saat ==> %d:%d:%d \n\r",tmr_info->hour,tmr_info->minute,tmr_info->second);
	
	printf(" Tarih ==> %d:%d:%d \n\r",tmr_info->day,tmr_info->mounth,tmr_info->year);
	return 0;
}
