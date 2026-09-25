#include <stdio.h>

int main() {
    int choice;
    int bookingCount = 0;

    char name1[50], name2[50], name3[50];
    int flight1, flight2, flight3;
    int timeChoice1, timeChoice2, timeChoice3; 

    while (1) {
        printf("\n==== AIRLINE RESERVATION ====\n");
        printf("1. View Flights\n");
        printf("2. Book Flight\n");
        printf("3. View Bookings\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("\nAvailable Flights:\n");
                printf("1. Manila to Boracay\n");
                printf("2. Boracay to Manila\n");
                printf("3. Malaysia to Philippines\n");
                printf("4. Philippines to Malaysia\n");
                break;

            case 2:
                if (bookingCount >= 3) {
                    printf("\nSorry, booking list is full (max 3).\n");
                } 
                else {
                    printf("\nAvailable Flights:\n");
                    printf("1. Manila to Boracay\n");
                    printf("2. Boracay to Manila\n");
                    printf("3. Malaysia to Philippines\n");
                    printf("4. Philippines to Malaysia\n");

                    if (bookingCount == 0) {
                        printf("Enter passenger name: ");
                        scanf(" %49[^\n]", name1);
                        printf("Choose flight number: ");
                        scanf("%d", &flight1);

                        printf("\nAvailable Time:\n");
                        printf("1. 6:00 AM\n");
                        printf("2. 12:00 PM\n");
                        printf("3. 6:00 PM\n");
                        scanf("%d", &timeChoice1);
                    }
                    else if (bookingCount == 1) {
                        printf("Enter passenger name: ");
                        scanf(" %49[^\n]", name2);
                        printf("Choose flight number: ");
                        scanf("%d", &flight2);

                        printf("\nAvailable Time:\n");
                        printf("1. 6:00 AM\n");
                        printf("2. 12:00 PM\n");
                        printf("3. 6:00 PM\n");
                        scanf("%d", &timeChoice2);
                    }
                    else if (bookingCount == 2) {
                        printf("Enter passenger name: ");
                        scanf(" %49[^\n]", name3);
                        printf("Choose flight number: ");
                        scanf("%d", &flight3);

                        printf("\nAvailable Time:\n");
                        printf("1. 6:00 AM\n");
                        printf("2. 12:00 PM\n");
                        printf("3. 6:00 PM\n");
                        scanf("%d", &timeChoice3);
                    }

                    bookingCount += 1;
                    printf("Booking confirmed. Have a safe flight!\n");
                }
                break;

            case 3:
                if (bookingCount == 0) {
                    printf("\nNo bookings yet.\n");
                } else {
                    printf("\nCurrent Bookings:\n");

                    if (bookingCount >= 1) {
                        printf("1. %s - ", name1);
                        if (flight1 == 1) printf("Manila to Boracay - ");
                        else if (flight1 == 2) printf("Boracay to Manila - ");
                        else if (flight1 == 3) printf("Malaysia to Philippines - ");
                        else if (flight1 == 4) printf("Philippines to Malaysia - ");

                        if (timeChoice1 == 1) printf("6:00 AM\n");
                        else if (timeChoice1 == 2) printf("12:00 PM\n");
                        else if (timeChoice1 == 3) printf("6:00 PM\n");
                    }

                    if (bookingCount >= 2) {
                        printf("2. %s - ", name2);
                        if (flight2 == 1) printf("Manila to Boracay - ");
                        else if (flight2 == 2) printf("Boracay to Manila - ");
                        else if (flight2 == 3) printf("Malaysia to Philippines - ");
                        else if (flight2 == 4) printf("Philippines to Malaysia - ");

                        if (timeChoice2 == 1) printf("6:00 AM\n");
                        else if (timeChoice2 == 2) printf("12:00 PM\n");
                        else if (timeChoice2 == 3) printf("6:00 PM\n");
                    }

                    if (bookingCount >= 3) {
                        printf("3. %s - ", name3);
                        if (flight3 == 1) printf("Manila to Boracay - ");
                        else if (flight3 == 2) printf("Boracay to Manila - ");
                        else if (flight3 == 3) printf("Malaysia to Philippines - ");
                        else if (flight3 == 4) printf("Philippines to Malaysia - ");

                        if (timeChoice3 == 1) printf("6:00 AM\n");
                        else if (timeChoice3 == 2) printf("12:00 PM\n");
                        else if (timeChoice3 == 3) printf("6:00 PM\n");
                    }
                }
                break;

            case 4:
                printf("\nYay! Thank you for choosing PJ Airlines. Have a safe trip.\n");
                break;

            default:
                printf("\nInvalid choice, try again.\n");
        }

        if (choice == 4) {
            break;
        }
    }

    return 0;
}