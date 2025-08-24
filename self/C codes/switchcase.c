#include<stdio.h>

int main()
{
    int(cars);
    printf("Enter your choice: \n1\n2\n3\n=");
    scanf("%d", &cars);
    
    switch (cars)
    {
        case 1:
        printf("One car ");
        break;

        case 2:
        printf("Two cars ");
        break;

        case 3:
        printf("Three cars ");
        break;

        default:
        printf("No cars");
    }
}