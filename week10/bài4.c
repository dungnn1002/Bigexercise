#include<stdio.h>
#include<string.h>
main()
{
	char mang1[100],mang2[100];
	int kq;
	printf("nhap mang 1:");
	gets(mang1);
	printf("nhap mang 2:");
	gets(mang2);
	kq=strcmp(mang1,mang2);
	if(kq==0)		printf("1");
	else 	printf("2");
	getch();
}