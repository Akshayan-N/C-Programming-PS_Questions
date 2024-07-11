#include <stdio.h>
#include <ctype.h>

int main(){
    char word[50];
    printf("Enter the word : ");
    scanf("%s", &word);

    char unique[52] = {0};
    char count = 0;

    for (int i = 0; word[i] != '\0'; i++){
        char letter = word[i];
        int found = 0;
        for (int j = 0; j < count; j++){
            if (letter == unique[j]){
                unique[j] = 0;
                found = 1;
                break;
            }
        }
        if (!found) {
            unique[count++] = letter;
        }
    }

    for (int j = 0; j < count; j++){
        if (unique[j]){
            printf("First non-repeating character is %c", unique[j]);
            return 0;
        }
    }
    printf("First non-repeating character is Null");
}