#include <stdio.h>
int main(){
    int t_sec,hour,min,sec;
    int remaining_sec;
    int format;
    printf("A tool which will convert total seconds into time \n");
    printf("Enter the seconds--> ");
    scanf("%d",&t_sec);
    hour = t_sec/(60*60);
    remaining_sec = t_sec%(60*60);
    min = remaining_sec/60;
    sec = remaining_sec%60;
    printf("Choose the format to display the time in\n");
    printf("If the 12-hour format enter 1\n");
    printf("If the 24-hour format enter 2 \n");
    scanf("%d",&format);
    switch(format)
    {
        case 1: 
            if (hour==12){
                printf("The time is %d:%d:%d P.M",hour,min,sec);
            }else if (hour==0){
                printf("The time is 12:%d:%d A.M",min,sec);
            }else if (hour>12){
                hour-=12;
                printf("The time is %d:%d:%d P.M",hour,min,sec);
            }else if (hour<12){
                printf("The time is %d:%d:%d A.M",hour,min,sec);
            }
            break;
        case 2:
            printf("The is time is %d:%d:%d",hour,min,sec);
            break;
    }        
    return 0;    
}

// =)
