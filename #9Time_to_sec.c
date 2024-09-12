#include <stdio.h>
int main(){
    // declaring hour,minute,sec as a integer variable
    /*declaring a new variable called format in which it askes will the user use the 12 hour format or 24 hour format of time */
    int hour,min,sec,format;
    // declaring t_sec(total seconds) as a integer variable
    int t_sec;
    printf("Enter the time and convert it into seconds \n");
    printf("Type 1 if you will be entering time in 12 hour format \n");
    printf("Type 2 if you will be entering time in 24 hour format\n");
    scanf("%d",&format);
    /* declaring am_pm as a integer as a integer variable where user can give the status whether it is am or pm */
    int am_pm;
    switch (format)
    {
        case 1: printf("Enter the hour");
                scanf("%d",&hour);
                printf("Enter the minute");
                scanf("%d",&min);
                printf("Enter the second");
                scanf("%d",&sec);
                printf("Enter 1 if it A.M\n");
                printf("Enter 2 if it is P.M\n");
                scanf("%d",&am_pm);
                if (hour == 12 && am_pm == 1) {  // 12 AM case
                t_sec = 0 + min * 60 + sec;
                } else if (hour == 12 && am_pm == 2) {  // 12 PM case
                t_sec = 12 * 60 * 60 + min * 60 + sec;
                } else {
                t_sec = hour * 60 * 60 + min * 60 + sec;
                if (am_pm == 2) {  // if it is PM, add 12 hours
                    t_sec += 12 * 60 * 60;
                }
            }
            break;

                break;
        case 2: printf("Enter the hour");
                scanf("%d",&hour);
                printf("Enter the minute");
                scanf("%d",&min);
                printf("Enter the second");
                scanf("%d",&sec);
                t_sec = hour*60*60+min*60+sec;
                break;
    }
    if (format == 1) {
        if (am_pm == 1) {
            printf("The time is %d:%d:%d A.M\n", hour, min, sec);
        } else {
            printf("The time is %d:%d:%d P.M\n", hour, min, sec);
        }
    } else if (format == 2) {
        printf("The time is %d:%d:%d\n", hour, min, sec);
    }
    // calculating total second by adding hours converted to seconds, minute to seconds and seconds
    printf("The total second of the given time is %d",t_sec);
    return 0 ;
    
}


// =) 
