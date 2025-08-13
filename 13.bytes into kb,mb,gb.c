#include <stdio.h>

int main() {
    double bytes;

    printf("Enter size in bytes: ");
    scanf("%lf", &bytes);

    printf("Kilobytes: %.2lf KB\n", bytes / 1024);
    printf("Megabytes: %.2lf MB\n", bytes / (1024 * 1024));
    printf("Gigabytes: %.2lf GB\n", bytes / (1024 * 1024 * 1024));

    return 0;
}
