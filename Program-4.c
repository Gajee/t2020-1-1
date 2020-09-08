#include <stdio.h>
void main()
{
    int x,i=0,count,j=0;
    printf("Enter the number of elements: ");
    scanf("%d",&x);
    int arr[x];
    printf("Enter the elements: ");
    while(i<x)
    {
        scanf("%d",&count);
        arr[i]=count;
        i++;
    }
    printf("{");
    i=0;
    for(i=1;i<=9;i++)
    {
        count=0;
        for(j=0;j<x;j++)
        {
            if(arr[j]%i==0)
                count++;
        }
        printf("%d:%d",i,count);
        if(i!=9)
            printf(", ");
    }
    printf("}");
}
