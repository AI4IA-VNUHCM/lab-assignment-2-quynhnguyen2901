/*
4.	Receive an array of n integers, n is even. 
Sort the first half in increasing order and second half decreasing order
Ex:
 ____________________________________
| Input:  8 7 9 2 1 5 2 0            |
| Output: 2 7 8 9 5 2 1 0            |
|____________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void input(int test_array[],int n);
void output(int test_array[], int n);
void arrange_up(int test_array[], int n);
void arrange_down(int test_array[], int n);

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	argc--;
	int n = argc;
	int test_array[100],i;
	for(i=0; i<n;i++){
		test_array[i] = atoi(argv[i+1]);
	}
	//Your codes here

	do{
		printf(" input n: ");
		scanf("%d", &n);
	}while(n%2!=0);

	input(test_array, n);
	output(test_array, n);
    arrange_up(test_array, n);
	arrange_down(test_array, n);
	printf(" the array after arrange is:\n ");
	output(test_array, n);
	return 0;
}
void input(int test_array[],int n){
	printf("input array \n");
	for (int i=0; i<n; i++){
		scanf("nhap vao phan tu thu %d : %d", i, &test_array[i]);
	}
}

void output(int test_array[], int n){
	printf("output array \n");
	for (int i = 0;i < n;i++)
	{
		printf(" pt thu %d ", i, " la ", test_array[i]);
	}

}

void arrange_up(int test_array[], int n){
	for (int i = 0;i < n/2;i++)
	{
		for (int j = i + 1;j < n/2;j++)
		{
			if (test_array[j] < test_array[i])
			{
				int tam = test_array[i];
				test_array[i]=test_array[j];
				test_array[j] = tam;
			  
			}
		}
	}
}
void arrange_down(int test_array[], int n){
	for (int i = (n/2)+1;i < n-1;i++)
	{
		for (int j = i + 1;j < n-1;j++)
		{
			if (test_array[j] > test_array[i])
			{
				int tam = test_array[i];
				test_array[i]=test_array[j];
				test_array[j] = tam;
			}
		}
	}
}
