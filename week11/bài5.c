#include <stdio.h>
void swap1( int *p,int *q ,int *r)
{
    int tmp = *p;
    *p = *q;
    *q = *r;
    *r =tmp ;
    return;
}
void swap2( int p, int q,int r)
{
    int tmp = p;
    p =q ;
    q=r;
    r=tmp;
    return;
}
int main ()
{
    int x,y,z;
    do {scanf("%d%d%d", &x, &y, &z );}
    while ( x == y && y==z & z==x);
    int *p = NULL; 
    int *q=NULL;
    int r = NULL;
    p = &x;q=&y;r=&z;
    printf(" x=%d,y=%d,z=%d, p=%p,q=%p,r=%p \n",x,y,z,p,q,r);
    printf("swap value x,y,z: \n");
    swap1(&x,&y,&z);
    return 0;
}
