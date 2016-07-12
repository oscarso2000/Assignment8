#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main() {
	srand(time(NULL));
	int i,n,x; //input,   comparison number
	printf("Please input a positive integer for the number of variables: ");
	scanf("%d",&i); //scanning for user input
	int *arr=(int*)malloc(i*sizeof(int)); //creating array size of user input
	printf("Your numbers: \n");
	for(n=0;n<i;n++){ //randomly generated i amount of numbers
		arr[n]=rand()%9999+1;
		printf("%d \n", arr[n]);
	}
	// i is the size of array
	int store=0; //temporarily stores an array number
	for (n=0;n<i;n++){
		for (x=n+1;x<i;x++){
			if (arr[n]>arr[x]){
				store=arr[n];
				arr[n]=arr[x];
				arr[x]=store;
			} // ascending order ^^
		}
	}
	printf("This is the ascending order: \n");
	for (n=0;n<i;n++){
		printf("%d \n", arr[n]);
	}
	printf("This is the descending order: \n");
	for(n=i-1;n>=0;n--){
	printf("%d \n", arr[n]);
	}//print ascending order backwards, for descending
}
