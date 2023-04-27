#include<stdio.h>
#include<math.h>
int main()
{
    int m1,d,m2;
    scanf("%d %d %d",&m1,&d,&m2);
    float count=1;
    count=((m1*m2)/d);
    float result = ceil(count);
    printf("%0.0f",result);
    return 0;
}