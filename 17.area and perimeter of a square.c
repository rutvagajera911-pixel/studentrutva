#include <stdio.h>

int main() {
    float length, area, perimeter;


    printf("Enter the length of the side of the square (L): ");
    scanf("%f", &length);


    area = length * length;
    perimeter = 4 * length;


    printf("Area of the square = %.2f\n", area);
    printf("Perimeter of the square = %.2f\n", perimeter);

    return 0;
}
