#include <stdio.h>
#include <string.h>

char toUpper(char letter)
{
    if ('a' <= letter && letter <= 'z'){
        letter -= 32;
    }

    return letter;
}

int main(){
    char word[100];
    printf("Enter the word : ");
    scanf("%s", word);

    for (int i = 0, len = strlen(word); i < len; i++){
        printf("%c", toUpper(word[i])); // toupper funciton of ctype can also be used 
    }
    
}