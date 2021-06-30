//tính tiền lương

#include<stdio.h>
#include<math.h>
double tienluong(int ot, t)
{
    if ( t >40)
    {
        ot = t-40;
    }
    return ot*22500 + t*15000;
}
int main()
{
    double s=0;
    int t=0;
    int ot =0;
    scanf("%d", &t);
    s= tienluong(ot,t);
    printf("tien luong = %g", s);
    return 0;
}