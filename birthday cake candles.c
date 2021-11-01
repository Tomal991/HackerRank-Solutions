#include <stdio.h>

int main()
{
    int i,n,max = 0,count=0;
    scanf("%d", & n);
    int a[n];
    for (i = 1; i <= n; i++)
    {
        scanf("%d", & a[i]);
        if (a[i]>max)
            max = a[i];
    }
    for (i = 1; i <= n; i++)
    {

        if (max==a[i])
            count++;
    }
    printf("%d", count);
    return 0;
}


