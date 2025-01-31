#include <stdio.h>
int main() {
    char vi;
    scanf("%c",&vi);
    if ((vi>='a'&& vi<='z')||(vi>='A'&& vi<='Z')){
        if(vi=='a'||vi=='e'||vi=='i'||vi=='o'||vi=='u'||vi=='A'||vi=='E'||vi=='I'||vi=='O'||v=='U')
        printf("Vowel");
        else 
        printf("Consonant");
        }
    else if (vi>='0' && vi<='9')
    printf("Digit");
    else
    printf("Special Character");
    return 0;
} 