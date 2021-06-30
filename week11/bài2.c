#include<stdio.h>


int main(){
	int a[7]= {13, -355, 235, 47, 67, 943, 122};
	int *ptr;
	ptr = a;
	for (int i = 0; i < 7; i++) {
		printf("%p ", ptr+i);
	}
	

}