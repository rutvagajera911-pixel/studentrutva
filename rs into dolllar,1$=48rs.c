#include <stdio.h>

int main() {
    float rupees, dollars;


    printf("Enter amount in Rupees: ");
    scanf("%f", &rupees);


    dollars = rupees / 48;


    printf("Equivalent amount in Dollars: %.2f\n", dollars);

    return 0;
}
