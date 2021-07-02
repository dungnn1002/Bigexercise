#include<stdio.h>

void rotate( int *a, int *b, int *c)
{
    int tmp = *a;
    *a = *b;
    *b = *c;
    *c = tmp;
}
int main ()
{
    int a,b,c;
    scanf("%d%d%d", &a, &b, &c);
    rotate(&a,&b,&c);
    printf("%d %d %d", a,b,c);
}