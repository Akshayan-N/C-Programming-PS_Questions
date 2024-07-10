// 2. To find the fine amount in library ,
// 2 types of  book is given for each type certain amount of fine also there , 
// you should get days and type of the book and calculate the fine by multiplying.     

#include <stdio.h>

void main(void)
{
    int days, book_type;

    printf("Enter the number of days :");
    scanf("%i", &days);

    printf("Enter the type of book ( 1 or 2) : ");
    scanf("%i", &book_type);

    int fine;
    if (book_type == 1)
    {
        fine = 3;
    }
    else if (book_type == 2)
    {
        fine = 5;
    }
    else
    {
        printf("Invaild Input for book type");
        return ;
    }

    printf("Total Fine : %i", days * fine);
}