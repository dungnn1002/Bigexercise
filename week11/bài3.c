#include<stdio.h>


int main(){
	float a,b,c;
	float *ptr;
	scanf("%f%f%f", &a, &b, &c);
	ptr = &a;
	printf("%.2f ", *(ptr)+100);
	ptr = &b;
	printf("%.2f ", *(ptr)+100);
	ptr = &c;
	printf("%.2f ", *(ptr)+100);
}
