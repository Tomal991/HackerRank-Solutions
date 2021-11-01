
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    long int arr[5],max=0,min,sum=0;
    for(int i=0; i<5; i++)
    {
        scanf("%ld",&arr[i]);
        sum+=arr[i];
    }
    min =arr[0];
    for(int i=0; i<5; i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
        if(arr[i]<min)
            min=arr[i];
    }
    printf("%ld %ld",sum-max,sum-min);
}
