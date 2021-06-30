#include<stdio.h>
int main ()
{
    int a[100];
    int sum = 0;
    for ( int i = 0; i < 4; i++)
    {
        scanf("%d", &a[i]);
        int min = a[0];
        if( a[i] % 2 == 1)
        { sum += a[i];
            printf ("%d", sum);
        }
        if( (a[i]) < min)
        {
            min = a[i];
            printf("%d", min);
        }
    }
    
}
