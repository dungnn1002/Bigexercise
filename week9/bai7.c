#include <stdio.h>
#include<math.h>

int main ()
{
    int n, a[100];
    scanf("%d",&n);
    
    for(int i = 0;i<n;i++)
    {
        scanf("%d", &a[i]);
        if(a[i] % 2 ==0)
        {
            printf("toan so chan");
        }
        else {printf("khong phai tat ca chan");}
        
    }
    
    return 0;
    
}