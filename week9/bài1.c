//tính năng lượng
#include<stdio.h>
#include<math.h>
int energy(int k)
{
    int m,v;
    k = m*v*v/2;
    return k;
}
int main ()
{
    int m,v,k;
    
    scanf("%d%d", &m, &v);
    printf("%d",energy(k));
    
    return 0;
}
