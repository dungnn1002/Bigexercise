#include <stdio.h>

void nhap(int a[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
}

main()
{
    int n, m;
    scanf("%d%d", &n, &m);
    int a[100];
    nhap(a, n);
    int b[100];
    nhap(b, m);
    int p;
    scanf("%d", &p);
    int i;
    for (i = 0; i < n; i++)
    {
        if (i == p)
        {
            int j;
            for (j = 0; j < m; j++)
            {
                printf("%d ", b[j]);
            }
        }
        printf("%d ", a[i]);
    }
    return 0;
}
