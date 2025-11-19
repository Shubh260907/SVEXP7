#include <stdio.h>

int main() {


    const int ADULT_AGE_THRESHOLD = 18;
    const double TICKET_PRICE = 450.00;
    // ---------------------------------------------

    int age;

    printf("--- Welcome to Sunrise Amusement Park ---\n");
    printf("Please enter your age: ");


    scanf("%d", &age);

    printf("\n--- Ticket Details ---\n");


    if (age <= 0) {
        printf("Error: Please enter a valid, positive age.\n");
    }

    else if (age < ADULT_AGE_THRESHOLD) {
        printf("Visitor Age: %d\n", age);
        printf("Status: Child\n");
        printf("Result: Entry is FREE!\n");
        printf("Enjoy your day at the park.\n");
    }
    else {
        printf("Visitor Age: %d\n", age);
        printf("Status: Adult\n");
        printf("Result: Ticket required.\n");
        printf("Please pay Rs. %.2f\n", TICKET_PRICE);
    }

    return 0;

}
