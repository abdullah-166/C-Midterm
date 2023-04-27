#include <stdio.h>
#include <string.h>

int main() {
    char s[1001];
    int freq[26] = {0};
    int i, length;
    scanf("%s", s);
    length = strlen(s);
    for(i=0; i<length; i++) {
        if(s[i]>='a' && s[i]<='z') {
            freq[s[i]-'a']++;
        }
    }
    for(i=0; i<26; i++) {
        printf("%c : %d\n", 'a'+i, freq[i]);
    }

    return 0;
}
