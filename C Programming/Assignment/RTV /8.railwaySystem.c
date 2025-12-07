//  8. Railway Seat Reservation Mini Project (Array Indexing)
// Features:
// • 1D array to represent 50 seats (0 = empty, 1 = booked)
// • Booking, cancelling, viewing seats
// • Functions for each
// • Pointer for seat update
// Real use: Basic reservation logic.1

#include <stdio.h>
#define SEATs 50
void viewSeat(int *seats){
    printf("\nSeat Status (0=empty 1=booked):\n");
    for(int i=0;i<SEATs;i++){
        printf("Seat %d : %d\n",i+1,*(seats+i));
    }
}
void bookSeat(int *seats){
    int seatNo;
    printf("Enter the Seat Number to Book: ");
    scanf("%d",&seatNo);
    if(seatNo<1 || seatNo>SEATs){
        printf("Invalid Seat Number!\n");
        return;
    }
    seatNo--;
    if (*(seats + seatNo) == 1) {
        printf("Seat Already Booked!\n");
    } 
    else {
        *(seats + seatNo) = 1; 
        printf("Seat %d Booked Successfully!\n", seatNo + 1);
    }
}
void cancelSeat(int *seats){
    int seatNo;
    printf("Enter the Seat Number to Cancel: ");
    scanf("%d",&seatNo);
    if(seatNo<1 || seatNo>SEATs){
        printf("Invalid Seat Number!\n");
        return;
    }
    seatNo--;
    if (*(seats + seatNo) == 0) {
        printf("Seat is Already Empty!\n");
    } 
    else {
        *(seats + seatNo) = 0; 
        printf("Seat %d Cancelled Successfully!\n", seatNo + 1);
    }
}
int main()
{
    int seat[SEATs]={0};
    int choice;
    while (1)
    {
        printf("------ Railway Reservation System ------\n");
        printf("1. View Seat\n");
        printf("2. Book Seat\n");
        printf("3. Cancel Seat\n");
        printf("4. Exit\n");
        printf("Choose (1-4):\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            viewSeat(seat);
            break;
        case 2:
            bookSeat(seat);
            break;
        case 3:
            cancelSeat(seat);
            break;
        case 4:
            printf("Sayonara! Have A Safe Journey!");
            return 0;

        default:
            printf("Invalid Choice! Try Again!\n");
            break;
        }
    }
    return 0;
}