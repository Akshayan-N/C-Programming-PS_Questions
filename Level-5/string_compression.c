#include <stdio.h>
#include <string.h>

int main(){
    char word[100];
    printf("Enter the word : ");
    scanf("%s", word);

    char letter = word[0];
    int count = 1;
    for (int i = 1, len = strlen(word); i <= len; i++)
    {
        if (letter != word[i] || i == len){
            printf("%c", letter);
            if (count > 1){
                printf("%i", count);    
            }

            if (i == len){
                break;
            }

            letter = word[i];
            count = 1;
        }
        else {
            count++;
        }
    }
}