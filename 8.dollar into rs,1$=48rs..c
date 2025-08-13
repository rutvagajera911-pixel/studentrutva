#include <stdio.h>

int main() {
    float dollars, rupees;

    printf("Enter amount in dollars: ");
    scanf("%f", &dollars);

    rupees = dollars * 48;

    printf("Equivalent in rupees: ₹%.2f\n", rupees);

    return 0;
}
