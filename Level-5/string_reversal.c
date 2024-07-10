#include <stdio.h>
#include <string.h>

int main()
{
    char word[100];
    printf("Enter your word : ");
    fgets(word, 100, stdin);
    
    int len = strlen(word);
    for (int i = 0; i < (len / 2) ; i++)
    {
        char temp = word[i];
        word[i] = word[len-1 -i];
        word[len-1 -i] = temp;
    }
    
    printf("%s", word);
}