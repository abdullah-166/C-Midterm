#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char S[100];
    int uppercase_count = 0, lowercase_count = 0;
    scanf("%s", S);

    for(int i = 0; i < strlen(S); i++)
    {
        if(isupper(S[i]))
        {
            uppercase_count++;
        }
        else if(islower(S[i]))
        {
            lowercase_count++;
        }
    }
   printf("%d %d", uppercase_count,lowercase_count);
   return 0;
}
