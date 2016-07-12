#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main() {
	FILE *file = fopen("file.txt", "r");
	char c[20];
	int i,count=0;
	float arr[5],sd=0,avg=0,sum=0;
	//Initial Numbers:
	printf("Your Numbers are: \n");
	for (i=0;i<5;i++){
		fgets(c,100,file);
		arr[i]=atof(c);
		printf("%f \n",arr[i]);
		//sum
		sum=sum+arr[i];
		count++; //n
	}
	avg=sum/count;
	printf("The average is: %.3f \n", avg);
	for (i=0;i<5;i++){
		sd=sd+(arr[i]-avg)*(arr[i]-avg); //standard deviation
	}
	sd=sqrt(sd/(count-1));
	printf("The standard deviation is: %.3f \n" , sd); //%.3 decimal places
	fclose(file);
}
