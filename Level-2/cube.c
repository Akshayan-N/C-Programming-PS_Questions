// 3.next three cube of given no , n = 1
//  output :
//  1 8 27 

#include <stdio.h>
#include <math.h>

int main(void)
{
    int num;
    printf("Enter the number : ");
    scanf("%i", &num);

    
    for (int i = 1; i <= 3; i++)
    {
        printf("%i ", (int) pow(num + i, 3));
    }
}