#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"
int main() {

	int moun[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	int day = 0, mon = 0, year = 0;
	int day_counter = 0;
	printf("please enter the date !\nformat:DD,MM,YYYY\n");
	scanf("%d,%d,%d", &day, &mon, &year);

	printf("%d", day_of_year(day, mon, year));
}

int day_of_year(int day, int mon, int year) {
	int moun[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	int day_counter = 0;
	for (int counter = 0; counter < mon - 1; counter++) {
		day_counter += moun[counter];
	}
	day_counter += day;

	if (year % 4 == 0) {
		if (year % 100 != 0 || year % 400 == 0) {
			++day_counter;
		}
	}
	return day_counter;
}