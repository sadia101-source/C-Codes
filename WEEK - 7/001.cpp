#include <stdio.h>

// function to check if a year is a leap year
int isLeapYear(int year)
{
	if (year % 400 == 0) {
	    return 1;
	} else if (year % 100 == 0){
		return 0;
	} else if (year % 4 == 0) {
		return 1;
	} else {
		return 0;
	}
}

int main()
{
	//test cases array
	int testYears[] = {1600, 1700, 1800, 1900, 2000, 2020, 2023, 2024};
	int n = sizeof(testYears)/sizeof(testYears[0]);
	
	//loop for checking if they are leap year or not.
	for (int i=0; i<n; i++) {
		int year = testYears[i];
		
		if (isLeapYear(year)) {
			printf("%d is a leap year. \n", year);
		} else {
			printf("%d is not a leap year. \n", year);
		}
	}
	return 0;
}

