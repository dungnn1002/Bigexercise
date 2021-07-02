#include<stdio.h>
void sapxep1(int a[], int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i] < a[j])
            {
                int tmp =  a[i];
                a[i]=a[j];
                a[j]= tmp;
            }
        }
    }
}
void sapxep2(int a[], int n)
{
    for(int i=0;i<n;i++)
    {
       if( a[i] % 2 != 0){
        for(int j=i+1;j<n;j++)
        {
            if(a[i] < a[j])
            {
                int tmp =  a[i];
                a[i]=a[j];
                a[j]= tmp;
            }}
        }
    }
}
int main() {
	int n=10;
	int a[1000];

	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	sapxep1(a, n);
	for (int i = 0; i < n; i++) {
		printf("%d \n", a[i]);
	}
    sapxep2(a,n);
    for(int i=0;i<n;i++)
    {
        printf("%d ", a[i]);
    }
	return 0;
}