#include <stdio.h>
 
void daomang(int a[],int n)   
{
 for(int i=0;i<n/2;i++)
 {
    int t=a[i];
   a[i]=a[n-1-i];
   a[n-1-i]=t; 
 }
}
int main ()
{
    int n, a[100];
    scanf("%d", &n);
    for (int i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
    daomang(a,n);
    printf("%d ", daomang);
    return 0;
}