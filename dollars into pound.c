#include <stdio.h>

int main() {
    float dollars, pounds;

    printf("Enter amount in Dollars: ");
    scanf("%f", &dollars);

    pounds = (dollars * 48) / 70;

    printf("Equivalent in Pounds: %.2f\n", pounds);

    return 0;

