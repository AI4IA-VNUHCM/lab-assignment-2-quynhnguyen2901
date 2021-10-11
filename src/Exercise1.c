/*
1. Write a Taxi meter program to calculate the taxi fare for a given mileage.
	a. The 1st 2km is 15,000 VND
	b. The next 250m will cost 2000 VND
	c. If the travel distance is larger than 30km then each extra km will cost only 5000VND
Receive the travel distance in Km and print the amount of money to be paid
______________________________________
| Input: 32.5                        |
| Output: 251500                     |
|____________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	float distance = atof(argv[1]);
	int result;
	//Your codes here
	printf("enter your distance: ");
	scanf("%f", &distance);
	float paya, payb, payc;
	paya=(15000*distance)/2;
	payb=15000+((distance-2)*2000)/0.25;
	payc= 15000+(28*2000)/0.25+(distance-30)*5000;
	if (distance<=2 && distance>0){
		result=paya;
		printf("you have to pay %f\n ", result);
	}
	else if(distance>2 && distance<=30){
		result=payb;
		printf("you have to pay %f\n", result);
	}
	else{
		result=payc;
		printf("you have to pay %f\n", result);
	}
	printf("%d", result);
	return 0;
}
