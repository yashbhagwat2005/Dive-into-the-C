#include <stdio.h>

int main() {
    // decalring units(input from the user for power consumed) as a integer
    int units;
    //  declaring total_charge as a float
    float total_charge;
    // input from the user for units
    printf("Enter the number of units consumed: ");
    scanf("%d", &units);
    if (units <= 200) {
        total_charge = units * 0.50;
    } else if (units <= 400) {
        total_charge = 100 + (units - 200) * 0.65;
    } else if (units <= 600) {
        total_charge = 230 + (units - 400) * 0.80;
    } else {
        total_charge = 425 + (units - 600) * 1.25;
    }
    printf("Total electricity charge: Rs %.2f\n", total_charge);
    return 0;
}


// =)
