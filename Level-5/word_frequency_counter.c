// Depending 
//This is let to be implemented , so Skip this one
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char sentence[100];
    printf("Enter the sentence : ");
    fgets(sentence, 100, stdin);

    char wordlist[10][10] = {0};
    int wordcount[10] = {0};

    int current_words_count = 0;

    char word[10] = "";
    int wordlen = 0;

    for(int i = 0, len = strlen(sentence); i <= len; i++){
        char letter = sentence[i];
        if (isalpha(letter)){
            word[wordlen++] = tolower(letter);
        } else {
            word[wordlen] = '\0';
            if (strlen(word) != 0){
                int found = 0;
                for (int j = 0; j < current_words_count; j++){
                    if (strcmp(wordlist[j], word) == 0){
                        wordcount[j]++;
                        found++;
                        break;
                    } 
                }
                if (!found) {
                    strcpy(wordlist[current_words_count], word);
                    wordcount[current_words_count++]++;
                }
                wordlen = 0;
            }        
        }
    }

    printf("{");
    for (int j = 0; j < current_words_count; j++){
        printf("'%s': %i", wordlist[j], wordcount[j]);
        if (j != current_words_count - 1){
            printf(", ");
        }
    }
    printf(" }");
}