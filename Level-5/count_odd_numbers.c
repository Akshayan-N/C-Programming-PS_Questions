#include <stdio.h>

int count_odd(int array[],int size)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {   
        if (array[i] % 2 == 1)
        {
            count++;
        }
    }
    return count;
}
int main()
{
    int size;
    printf("Enter the number of elements : ");
    scanf("%i", &size);

    int array[size];
    for (int i = 0; i < size; i++)
    {
        
        scanf("%i", &array[i]);
    }

    printf("The number of odd number is %i", count_odd(array, size));
}