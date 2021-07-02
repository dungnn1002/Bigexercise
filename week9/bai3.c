#include<stdio.h>
#include<math.h>
int tonglapphuong(int n )
{
    int sum = 0;
    for ( int i = 0; i<n;i++)
    {
        sum += i*i*i;
    }
    return sum;
}
int phantucon(int n)
{
    for ( int i =1;i<=n;i++)
    {
        if ( n %i == 0)
        {
            printf("%d ", i);
        }
    }
    return 0;
}
int main (void)
{
    int n;
    scanf("%d", &n);
    printf("tong lap phương so từ 1 đen %d là : %d\n", n, tonglapphuong(n));
    printf("phan tu con cua %d la:" , n);
    phantucon(n);
    return 0;
}