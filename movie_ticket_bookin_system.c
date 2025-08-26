#include <stdio.h>
int main()
{

    // Declaring Variables
    int choice;

    // Book ticket
    char movieType;
    char ticketCategory;
    char snacks;
    double snacksCost = 5.0;
    int totalTickets;
    double discount = 0.10;
    double ticketPrice = 0.0;

    // Create printf and scanf function for each variables
    while (choice = 1)
    {

        printf("\n-------------------Movie Ticket Booking System-----------------\n");

        printf("\n");
        printf("1. Book Tickets \n");

        printf("2. View Ticket Prices \n");

        printf("3. Exit \n");

        printf("Enter your choice: ");
        scanf("%d", &choice);
        printf(" \n");

        switch (choice)
        {
        case 1:

            printf("Select a movie type ('A' for Action, 'C' for Comedy, 'D' for Drama):");
            scanf(" %c", &movieType);

            printf("Select ticket category ('R' for Regular, 'P' for Premium):");
            scanf(" %c", &ticketCategory);

            printf(" Enter the number of tickets : ");
            scanf("%d", &totalTickets);

            printf("Do you want snacks (y/n) : ");
            scanf(" %c", &snacks);

            printf("\n");
            printf("Movie Type: ");

            // Nested Switch
            switch (movieType)
            {

                // Action Movies
            case 'A':
                printf("Action \n");
                printf("Ticket Category: ");

                switch (ticketCategory)
                {
                case 'R':
                    printf("Regular \n");
                    printf("Number of Tickets : %d \n", totalTickets);
                    printf("Total Cost Before Discount : £%.2f \n", ticketPrice = 10.0 * totalTickets);

                    // Implement Logic for Regular Ticket
                    if (totalTickets > 5 && snacks == 'y')
                    {
                        printf("Bulk discount: £%.2f \n", ticketPrice = 10.0 * totalTickets * discount);
                        printf("Snacks Cost : £%.2f\n", snacksCost * totalTickets);
                        printf("Final Total Cost : £%.2f", (ticketPrice = 10.0 * totalTickets) + (snacksCost * totalTickets) - (ticketPrice = 10.0 * totalTickets * discount));
                    }
                    else if (totalTickets > 5 && snacks == 'n')
                    {
                        printf("Bulk discount: £%.2f \n", ticketPrice = 10.0 * totalTickets * discount);
                        printf("Final Total Cost : £%.2f", ticketPrice = 10.0 * totalTickets - (ticketPrice = 10.0 * totalTickets * discount));
                    }
                    else if (totalTickets <= 5 && totalTickets > 0 && snacks == 'y')
                    {
                        printf("Snacks Cost : £%.2f\n", snacksCost * totalTickets);
                        printf("Final Total Cost : £%.2f", (ticketPrice = 10.0 * totalTickets) + (snacksCost * totalTickets));
                    }
                    else
                    {

                        printf("Final Total Cost : £%.2f", ticketPrice = 10.0 * totalTickets);
                    }
                    break;

                case 'P':
                    printf("Premium \n");
                    printf(" Number of Tickets : %d \n", totalTickets);
                    printf("Total Ticket Price : £%.2f \n", ticketPrice = 15.0 * totalTickets);

                    // Implement Logic for Premium Ticket
                    if (totalTickets > 5 && snacks == 'y')
                    {
                        printf("Bulk discount: £%.2f \n", ticketPrice = 15.0 * totalTickets * discount);
                        printf("Snacks Cost : £%.2f\n", snacksCost * totalTickets);
                        printf("Final Total Cost : £%.2f", (ticketPrice = 15.0 * totalTickets) + (snacksCost * totalTickets) - (ticketPrice = 15.0 * totalTickets * discount));
                    }
                    else if (totalTickets > 5 && snacks == 'n')
                    {
                        printf("Bulk discount: £%.2f \n", ticketPrice = 15.0 * totalTickets * discount);
                        printf("Final Total Cost : £%.2f", ticketPrice = 15.0 * totalTickets - (ticketPrice = 15.0 * totalTickets * discount));
                    }
                    else if (totalTickets <= 5 && totalTickets > 0 && snacks == 'y')
                    {
                        printf("Snacks Cost : £%.2f\n", snacksCost * totalTickets);
                        printf("Final Total Cost : £%.2f", (ticketPrice = 15.0 * totalTickets) + (snacksCost * totalTickets));
                    }
                    else
                    {

                        printf("Final Total Cost : £%.2f", ticketPrice = 15.0 * totalTickets);
                    }
                }
                break;

                // Comedy Movies
            case 'C':
                printf("Comedy \n");
                printf("Ticket Category:");
                switch (ticketCategory)
                {
                case 'R':
                    printf("Regular \n");
                    printf("Number of tickets : %d\n", totalTickets);
                    printf("Total Ticket Price : £%.2f\n", ticketPrice = 8.0 * totalTickets);

                    // Implement Logic for Regular Ticket
                    if (totalTickets > 5 && snacks == 'y')
                    {
                        printf("Bulk discount: £%.2f \n", ticketPrice = 8.0 * totalTickets * discount);
                        printf("Snacks Cost : £%.2f\n", snacksCost * totalTickets);
                        printf("Final Total Cost : £%.2f", (ticketPrice = 8.0 * totalTickets) + (snacksCost * totalTickets) - (ticketPrice = 8.0 * totalTickets * discount));
                    }
                    else if (totalTickets > 5 && snacks == 'n')
                    {
                        printf("Bulk discount: £%.2f \n", ticketPrice = 8.0 * totalTickets * discount);
                        printf("Final Total Cost : £%.2f", ticketPrice = 8.0 * totalTickets - (ticketPrice = 8.0 * totalTickets * discount));
                    }
                    else if (totalTickets <= 5 && totalTickets > 0 && snacks == 'y')
                    {
                        printf("Snacks Cost : £%.2f\n", snacksCost * totalTickets);
                        printf("Final Total Cost : £%.2f", (ticketPrice = 8.0 * totalTickets) + (snacksCost * totalTickets));
                    }
                    else
                    {

                        printf("Final Total Cost : £%.2f", ticketPrice = 10.0 * totalTickets);
                    }
                    break;
                case 'P':
                    printf("Premium \n");
                    printf("Number of tickets : %d \n", totalTickets);
                    printf("Total Ticket Price : £%.2f \n", ticketPrice = 12.0 * totalTickets);

                    // Implement Logic for Premium Ticket
                    if (totalTickets > 5 && snacks == 'y')
                    {
                        printf("Bulk discount: £%.2f \n", ticketPrice = 12.0 * totalTickets * discount);
                        printf("Snacks Cost : £%.2f\n", snacksCost * totalTickets);
                        printf("Final Total Cost : £%.2f", (ticketPrice = 12.0 * totalTickets) + (snacksCost * totalTickets) - (ticketPrice = 12.0 * totalTickets * discount));
                    }
                    else if (totalTickets > 5 && snacks == 'n')
                    {
                        printf("Bulk discount: £%.2f \n", ticketPrice = 12.0 * totalTickets * discount);
                        printf("Final Total Cost : £%.2f", ticketPrice = 12.0 * totalTickets - (ticketPrice = 12.0 * totalTickets * discount));
                    }
                    else if (totalTickets <= 5 && totalTickets > 0 && snacks == 'y')
                    {
                        printf("Snacks Cost : £%.2f\n", snacksCost * totalTickets);
                        printf("Final Total Cost : £%.2f", (ticketPrice = 12.0 * totalTickets) + (snacksCost * totalTickets));
                    }
                    else
                    {

                        printf("Final Total Cost : £%.2f", ticketPrice = 12.0 * totalTickets);
                    }
                }
                break;

                // Drama Movies
            case 'D':
                printf("Drama \n");
                printf("Ticket Category:");
                switch (ticketCategory)
                {
                case 'R':
                    printf("Regular \n");
                    printf("Number of Tickets : %d \n", totalTickets);
                    printf("Total Cost before discount : £%.2f \n", ticketPrice = 7.0 * totalTickets);

                    // Implement Logic for Regular Ticket
                    if (totalTickets > 5 && snacks == 'y')
                    {
                        printf("Bulk discount: £%.2f \n", ticketPrice = 7.0 * totalTickets * discount);
                        printf("Snacks Cost : £%.2f\n", snacksCost * totalTickets);
                        printf("Final Total Cost : £%.2f", (ticketPrice = 7.0 * totalTickets) + (snacksCost * totalTickets) - (ticketPrice = 7.0 * totalTickets * discount));
                    }
                    else if (totalTickets > 5 && snacks == 'n')
                    {
                        printf("Bulk discount: £%.2f \n", ticketPrice = 7.0 * totalTickets * discount);
                        printf("Final Total Cost : £%.2f", ticketPrice = 7.0 * totalTickets - (ticketPrice = 7.0 * totalTickets * discount));
                    }
                    else if (totalTickets <= 5 && totalTickets > 0 && snacks == 'y')
                    {
                        printf("Snacks Cost : £%.2f\n", snacksCost * totalTickets);
                        printf("Final Total Cost : £%.2f", (ticketPrice = 7.0 * totalTickets) + (snacksCost * totalTickets));
                    }
                    else
                    {

                        printf("Final Total Cost : £%.2f", ticketPrice = 7.0 * totalTickets);
                    }
                    break;

                // Implement Logic for Premium Ticket
                case 'P':
                    printf("Premium \n");
                    printf("Number of Tickets : %d \n", totalTickets);
                    printf("Total Cost Before Discount: £%.2f\n ", ticketPrice = 10.0 * totalTickets);
                    if (totalTickets > 5 && snacks == 'y')
                    {
                        printf("Bulk discount: £%.2f \n", ticketPrice = 10.0 * totalTickets * discount);
                        printf("Snacks Cost : £%.2f\n", snacksCost * totalTickets);
                        printf("Final Total Cost : £%.2f", (ticketPrice = 10.0 * totalTickets) + (snacksCost * totalTickets) - (ticketPrice = 10.0 * totalTickets * discount));
                    }

                    else if (totalTickets > 5 && snacks == 'n')
                    {
                        printf("Bulk discount: £%.2f \n", ticketPrice = 10.0 * totalTickets * discount);
                        printf("Final Total Cost : £%.2f", ticketPrice = 10.0 * totalTickets - (ticketPrice = 10.0 * totalTickets * discount));
                    }
                    else if (totalTickets <= 5 && totalTickets > 0 && snacks == 'y')
                    {
                        printf("Snacks Cost : £%.2f\n", snacksCost * totalTickets);
                        printf("Final Total Cost : £%.2f", (ticketPrice = 10.0 * totalTickets) + (snacksCost * totalTickets));
                    }
                    else
                    {

                        printf("Final Total Cost : £%.2f", ticketPrice = 10.0 * totalTickets);
                    }
                }
                break;

            default:
                printf("No movies type selected. Enter one of the charater ('A' for Action, 'C' for Comedy, 'D' for Drama) : \n");
                printf(" \n");
                return 1;
                break;
            }

            break;
        case 2:
            printf("--------Ticket Prices---------------- \n");
            printf("Action: £10 (Regular), £15 (Premium) \n");

            printf("Comedy: £8 (Regular), £12 (Premium) \n");

            printf("Drama £7 (Regular), £10 (Premium) \n");

            printf(" \n");
            break;

        case 3:
            printf("Thank you for using Movie Ticket Booking System ! \n");
            printf(" \n");

            return 1;
        default:
            break;
        }

        choice++;
    }

    return 0;
}