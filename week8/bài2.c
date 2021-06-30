//thay thế các ký tự như: tab, \ t, \ b bằng ký tự \\ trong chuỗi 
#include<stdio.h>
int main()
{
    char c;
    while( c = getchar()) 
    {
        if (c == '\t' || c == '\b')
        {
            printf("\\\\");
        }
        else 
        putchar(c);
    }
}