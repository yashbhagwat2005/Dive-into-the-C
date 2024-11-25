#include <stdio.h>
//prototyping a function with parameters of array,max,sec_max,result called max_sec_max to find the max number and sec max number in the the array "array"
int max_sec_max(int array[],int max,int sec_max,int result[]);
int main(){
    // declaring array of the size of elements of 10
    int array[10];
    //declaring result of the size of the elements of 2
    int result[2];
    // input from the user for the elements
    for (int i = 0;i<10;i++){
        printf("Enter a number: \n");
        scanf("%d",&array[i]);
    }
    // decalring max (initially max is equal to the first element of the array) sec_max(initially sec_max is equal to the second element of the array)
    int max = array[0];
    int sec_max = array[0];
    // calling the function 
    max_sec_max(array,max,sec_max,result);
    printf("The firt element is  %d and the second element is %d",result[0],result[1]);
}
int max_sec_max(int array[],int max,int sec_max,int result[]){
    // any element that is bigger than max then the that elment is assigned to max and the other is assigned to sec_max
    for (int i = 0;i<10;i++){
        if (array[i]>max){
            sec_max = max;
            max = array[i];
        }
    }
    // to return 2 values both max and sec_max are returned as an result
    result[0] = max;
    result[1] = sec_max;
}
