#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int A[n];
    int i,ceven=0,codd=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
     for(i=0;i<n;i++)
    {
       if(A[i] %2 == 0)
       {
          ceven++;
       }
       else
       {
        codd++;
       }
    }
    printf("%d %d",ceven,codd);
    return 0;
}