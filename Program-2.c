#include <stdio.h>

int main()
{
    int i, n;
    
    /* Input n value from */
    printf("Print odd numbers: ");
    scanf("%d", &n);

    printf("odd numbers equal to n value: \n", n);

    /* Start loop from 1, multiplied 2 to n and increment it by 1 */
    for(i=1; i<=n*2; i++)
    {
        /* If 'i' is odd then print it */
        if(i%2!=0)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}
