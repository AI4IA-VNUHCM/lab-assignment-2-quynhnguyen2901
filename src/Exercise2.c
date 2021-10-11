/*
2. Write a function to calculate the factorial with given integer n,
which satisfies the following:
	if n is odd, factorial = 1 * 3 * 5 * … * n
	if n is even, factorial = 2 * 4 * 6 * … * n
Ex:
______________________________________
| Input: 11                          |
| Output: 10395                      |
|____________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void odd(int n);
void even(int n);

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	int n = atoi(argv[1]);
	int result;
	//Your codes here
	printf("input n: ");
	scanf("%d", &n);
	int sum1, sum2=1;
	if(n==0){
		result=0;
	}
	else if(n%2!=0){
		odd(n);
		result=sum1;
	}
	else{
		even(n);
		result=sum2;
	}
	
	printf("%d", result);
	return 0;
}
void odd(int n){
	int sum1=1;
	for(int i=1;i<n; i++){
			if(i%2!=0){
				sum1=sum1*i;
			}
		}

}
void even(int n){
	int sum2=1;
	for(int i=2; i<n; i++){
			if(i%2==0){
				sum2=sum2*i;
			}
		}

}