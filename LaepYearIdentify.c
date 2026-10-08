#include <stdio.h>
int main() {
	int year;
	
	printf("Enter a year: ");
	scanf("%d", &year);
	
	//check leap year condition
	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)){
		printf("%d is a Leap year.\n",year);
	}else{
		printf("%d is NOT a  Leap year.\n",year);
	}
	
}
