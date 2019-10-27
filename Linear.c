#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[10] = {1,2,3,4,5,6,7,8,9,10}, sk, i;
    printf("Enter Number To Search : ");
    scanf("%d",&sk);
    for(i=0;i<10;i++)
        {
            if(arr[i]==sk)
            {
                printf("%d Found the Index %d\n",sk,i+1);
                break;
                }
        }
}
