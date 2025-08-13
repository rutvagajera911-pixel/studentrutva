#include <stdio.h>

int main() {
    float principal, rate, time, interest;


    printf("Enter Principal (P): ");
    scanf("%f", &principal);

    printf("Enter Rate of Interest (R): ");
    scanf("%f", &rate);

    printf("Enter Time (N in years): ");
    scanf("%f", &time);


    interest = (principal * rate * time) / 100;


    printf("Simple Interest (I) = %.2f\n", interest);

    return 0;
}
