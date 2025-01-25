#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char ch;
    char vow[]="aeiouAEIOU";
    scanf("%c",&ch);
    if (isdigit(ch)){
        printf("Digit");
    }else if(strchr(vow,ch)){
        printf("Vowel");
    }else if(isalpha(ch)){
        printf("Consonant");
    }else{
        printf("Special Character");
    }
    return 0;
}