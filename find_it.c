#include <stdio.h>
int main()
{
    int n,i,count=0;
    scanf("%d",&n);
    int A[n];
    int value;
    for(i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
     scanf("%d",&value);
    for(i=0;i<n;i++)
    {
        if(A[i] == value)
        {
            count++;
        }
    }
    printf("%d",count);
   return 0;
}
