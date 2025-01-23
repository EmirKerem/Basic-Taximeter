#include <stdio.h>

int main() {
    float openingFee = 10.0;
    float perKmFee = 2.5;

    float distance;

    printf("Enter the distance traveled (km): ");
    scanf("%f", &distance);

    float totalFee = openingFee + (distance * perKmFee);

    float minimumFee = 20.0;
    if (totalFee < minimumFee) {
        totalFee = minimumFee;
    }

    printf("Total fee: %.2f USD\n", totalFee);

    return 0;
}