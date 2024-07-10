#include <stdio.h>
#include <math.h>

void remove_duplicates(int array[], int size){
    int hashmap[100];  // 100 represents Two digit number (0 - 99)
    for (int i = 0; i < 100; i++){
        hashmap[i] = 0;
    }

    for (int i = 0; i < size; i++){
        
        if (hashmap[array[i]] == 0){
            hashmap[array[i]]++;
            printf("%i ", array[i]);
        }
    }
    }
int main()
{
    int size;
    printf("Enter the size of array : ");
    scanf("%i", &size);
    int duplicates[size];

    
    for (int i = 0; i < size; i++){
        printf("Enter Element %i: ", i+1);
        scanf("%i", &duplicates[i]);
    }
    remove_duplicates(duplicates, size);
}