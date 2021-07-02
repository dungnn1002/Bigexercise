#include <stdio.h>
#include<math.h>

int chuyendoiC(float c)
{
    int f;
     c =5/9*(f-32);
    return c;
}
int main ()
{
    int f;
    printf("nhap nhiet do F: ");
    scanf("%d", &f);
    
    printf("Nhiet do C la: %f", chuyendoiC);
    return 0;
}