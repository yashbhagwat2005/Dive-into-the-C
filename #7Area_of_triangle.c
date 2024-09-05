#include <stdio.h>
int main(){
    printf("Calculate the area of a triangle \n");
    // variable for the length of the triangle 
    float a;
    // variable for t he breadth of the triangle
    float b;
    float area;
    // input from the user for the length of the triangle
    printf("Enter the length of the triangle: ");
    scanf("%f",&a);
    // input from the user for the breadth of the triangle 
    printf("Enter the breadth of the triangle: ");
    scanf("%f",&b);
    area = 0.5*(b*a);
    printf("Area of the triangle is %f",area);
    return 0;

}


// =)
