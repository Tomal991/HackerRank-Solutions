#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//#define SIZE 3

int main()
{
    int n,i,arr[100];
    float plus=0,minus=0,zero=0;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);

        if(arr[i]>0)
        {
            plus++;
        }
        if(arr[i]<0)
        {
            minus++;
        }
        if(arr[i]==0)
        {
            zero++;
        }
    }

    float pos=plus/n;
    printf("%f\n",pos);

    float neg=minus/n;
    printf("%f\n",neg);


    float zer=zero/n;
    printf("%f\n",zer);

}
