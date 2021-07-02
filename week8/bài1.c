//thay thế 1 chuỗi kí tự trống bằng 1 kí tự 
#include<stdio.h>
#define Binh '-'
int main(void)
{
    char c, space;
    space = Binh;
    while (( c=getchar()) != EOF)
    {
        if ( c == ' ')
        {
            if( space  != ' ')
            putchar(c);

        }
        else 
           putchar (c);
          space  = c;
    }
    return 0;
}
