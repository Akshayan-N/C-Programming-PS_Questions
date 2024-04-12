// 2.count the number of vowels in the string

#include <stdio.h>
#include <ctype.h>

#define MAX_LENGTH 25

int main(void)
{
    char string[MAX_LENGTH];
    printf("Enter the string : ");
    fgets(string, MAX_LENGTH, stdin);

    int count = 0;
    for(int i = 0; string[i] != '\0'; i++)
    {
        char letter = tolower(string[i]);
        if (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u')
        {
            count++;
        }
    }
    printf("Vowel count : %i", count);

}