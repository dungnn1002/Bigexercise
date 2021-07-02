//tính n! với vòng lặp
#include<stdio.h>
int main()
{
    int n;
    int fac = 1;
    scanf("%d", &n);
    for ( int i = 1; i <= n; i++)
    {
        fac = fac*i ;
       
    }
    printf("%d", fac);
    return 0 ;

}