#include <stdio.h>


int main ()
{
    int n,a[100];
    scanf("%d", &n);
    int sum =0;
    for (int i= 1;i <= n;i++)
    {
        scanf("%d", &a[i]);
        
    }
    for (int i=1;i<=n;i++)
    {
        if ( a[i] > a[i-1] && a[i] > a[i+1] )
        {
            sum += a[i];
        }
    }
    printf("%d", sum);
    return 0;
}