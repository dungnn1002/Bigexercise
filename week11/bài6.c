#include <stdio.h>
void tangluong( int *tienluong, int nam)
{
    if(nam>3)
    {
        for(int i=0;i<nam-1;i++)
        {
            //tien lương tăng 10%
            *tienluong += *tienluong*0.1;
        }
    }
}
int main ()
{
    int nam, tienluong;
    printf("tien luong hien tai: %d");
    scanf("%d", &tienluong);
    printf("so nam lam viec: ");
    scanf("%d", &nam);
    tangluong(&tienluong,nam);
    printf("luong sau tang : %d", tienluong);
    return 0;
}