#include <stdio.h>
int main() {
    char v;
    scanf("%c",&v);
    if ((v>='a'&& v<='z')||(v>='A')){if(v=='a'||v=='e'||v=='i'||v=='o'||v=='u'v=='A'||v=='E'||v=='I'||v=='O'||v=='U')
        printf("Vowel");
        else 
        printf("Consonant");
        }
    
    else if (v>="0" && v<="9")
    printf("Digit");
    else
    printf("Special character");
    return 0;
} 