#include <stdio.h>
#include <math.h>
#define PI 3.14

int operations()
{
    int choice;
    printf("OPERATIONS\n\n");
    printf("1 - Area of the circle\n2 - Perimeter of te circle\n");
    printf("3 - Area of the equiliteral triangle\n4 - Perimeter of the equiliteral triangle\n");
    printf("5 - Area of the square\n6 - Perimeter of the square\n");
    scanf("%d", &choice);

    return choice;
}

double circleArea(int number)
{
    double area;
    area = PI * number * number;
    return area;
}

double circlePerimeter(int number)
{
    double perimeter;
    perimeter = 2 * PI * number;
    return perimeter;
}

double triangleArea(int number)
{
    double area;
    area = (number * ((number * sqrt(3)) / 2)) / 2.0;
    return area;
}

double trianglePerimeter(int number)
{
    int perimeter;
    perimeter = number * 3;
    return perimeter;
}

int squareArea(int number)
{
    int area;
    area = number * number;
    return area;
}

int squarePerimeter(int number)
{
    int perimeter;
    perimeter = number * 4;
    return perimeter;
}

int main()
{
    int operation, choice;

    printf("Which operation do you want to perform?(Enter only the operation number.)\n");
    choice = operations();

    double perimeter, area;
    switch (choice)
    {
    case 1:
    {
        int radius;
        printf("Enter of the radius of the circle = ");
        scanf("%d", &radius);

        area = circleArea(radius);
        printf("Area of the circle = %lf", area);
        break;
    }
    case 2:
    {
        int radius;
        printf("Enter of the radius of the circle = ");
        scanf("%d", &radius);

        perimeter = circlePerimeter(radius);
        printf("Perimeter of the circle = %lf", perimeter);
        break;
    }
    case 3:
    {
        int side;
        printf("Enter of the side of the equiliteral triangle.");
        scanf("%d", &side);

        area = triangleArea(side);
        printf("Area of the equiliteral triangle = %lf", area);
        break;
    }
    case 4:
    {
        int side;
        printf("Enter of the side of the equiliteral triangle");
        scanf("%d", &side);

        perimeter = trianglePerimeter(side);
        printf("Perimeter of the equiliteral triangle = %d", perimeter);
        break;
    }
    case 5:
    {
        int side;
        printf("Enter of the side of the square");
        scanf("%d", &side);

        area = squareArea(side);
        printf("Area of the square = %d", area);
        break;
    }
    default:
    {
        int side;
        printf("Enter of the side of the square");
        scanf("%d", &side);

        perimeter = squarePerimeter(side);
        printf("Perimeter of the square = %d", perimeter);
    }
    }
}