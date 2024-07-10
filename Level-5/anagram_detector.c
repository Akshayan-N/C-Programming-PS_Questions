#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char word1[100];
    char word2[100];

    printf("Enter the first word 1 : ");
    fgets(word1, 100, stdin);
    printf("Enter the first word 2 : ");
    fgets(word2, 100, stdin);

    int hashmap[26];
    for (int i = 0; i < 26; i++)
    {
        hashmap[i] = 0;
    }
    for (int i = 0; i < strlen(word1); i++)
    {
        char letter = word1[i];
        if  isalpha(letter){
            int index = tolower(letter) - 'a';
            hashmap[index]++;
        }    
    }
    for (int i = 0; i < strlen(word2);i++)
    {
        char letter = word2[i];
        if  isalpha(letter){
            int index = tolower(letter) - 'a';
            hashmap[index]--;
        } 
    }
    for (int i = 0; i < 26; i++){
        if (hashmap[i] != 0) {
            printf("False");
            return 1;
        }
    }
    printf("True");
    return 0;
}