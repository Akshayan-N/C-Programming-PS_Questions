#include <stdio.h>
// #include <string.h>

int findStringLength(char sentence[])
{
    // return strlen(sentence)
    int i = 0;
    while (sentence[i] != '\0'){
        i++;
    }
    return i - 1;
}
int main()
{
    char sentence[100];
    printf("Enter the sentence : ");
    fgets(sentence, 100, stdin);

    printf("The length is %i", findStringLength(sentence));
}