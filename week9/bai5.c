#include<stdio.h>
void printnchar(char ch, int n);
void main()
{
    printf("triangle of edge 4 and 5 is : \n");
    printnchar('*', 1);
    printnchar('*', 3);
    printnchar('*',4);
    printnchar('*', 5);
    
}
void printnchar(char ch, int n)
{
    for (int i = 1; i<= n; i++)
    {
        printf("%c", ch);
    }
    printf("\n");
}