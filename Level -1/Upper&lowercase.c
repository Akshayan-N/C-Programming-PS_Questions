// 1.lowercase and uppercase characters into two separate strings.

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int MAX_LENGTH = 20;
    char string[MAX_LENGTH];
    printf("Enter the string : ");
    fgets(string, MAX_LENGTH, stdin);

    char string_upper[MAX_LENGTH];
    int index_upper = 0;
    char string_lower[MAX_LENGTH];
    int index_lower = 0;

    for (int i = 0, len = strlen(string); i < len; i++)
    {
        char letter = string[i];
        if (isupper(letter))
        {
            string_upper[index_upper] = letter;
            index_upper++;
        }
        else if (islower(letter))
        {
            
            string_lower[index_lower] = letter;
            index_lower++;
        }
        
    }
    string_upper[index_upper] = string_lower[index_lower] = '\0';

    printf("lower case string is %s\n", string_lower);
    printf("Upper case string is %s\n", string_upper);
}