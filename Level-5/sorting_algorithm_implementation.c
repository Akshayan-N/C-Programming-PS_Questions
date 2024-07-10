#include <stdio.h>

int main(){
    int array[5];
    printf("Enter the array like [5, 2, 9, 1, 5] : ");
    scanf("[%i, %i, %i, %i, %i]", &array[0], &array[1], &array[2], &array[3], &array[4]);

    for (int i = 0; i < 5; i++)
    {
        int min_index = i;
        for (int j = i + 1; j < 5; j++)
        {
            if (array[min_index] > array[j]){
                min_index = j;
            }
        }
        int temp = array[i];
        array[i] = array[min_index];
        array[min_index] = temp;
    }

    printf("[");
    for (int i = 0; i < 5; i++){ 
        printf("%i", array[i]);
        if (i != 5-1){
            printf(", ");
        }
    }
    printf("]");
}