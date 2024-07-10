#include <stdio.h>
#include <stdlib.h>

int calc(int a, int b, char operation){
    switch (operation)
    {
    case '+':
        return a + b;
        break;
    case '-':
        return a - b;
        break;
    case 'x':
        return a * b;
        break;
    case '/':
        return a / b;
        break;
    default:
        printf("Invaild Operation");
        exit(0);
    }
}
int main(){
    char operaton;
    int a, b;

    printf("Enter the operation ('+', '-', 'x', '/') : ");
    scanf("%c", &operaton);

    printf("Enter a : ");
    scanf("%i", &a);

    printf("Enter b : ");
    scanf("%i", &b);

    printf("%i %c %i is %i", a, operaton, b, calc(a, b, operaton));
}