#include <stdio.h>

int main() {
    int a, b, c;
    printf("Enter three integers: ");
    scanf("%d %d %d", &a, &b, &c);


    int largest = a;
    if (b > largest) largest = b;
    if (c > largest) largest = c;


    int smallest = a;
    if (b < smallest) smallest = b;
    if (c < smallest) smallest = c;

    printf("Largest: %d\n", largest);
    printf("Smallest: %d\n", smallest);

    return 0;
}
