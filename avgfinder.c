#include <stdio.h>

// Program to calculate average of 5 numbers entered by users.

int main()
{
    int num; // Declare 'num' to read number from users
    int sum, i; // Declare variables 'sum' to keep sum of numbers & 'i' used in for loop
    float average; // Declae variable 'average' of float type to save average value  
    
    printf("Enter five numbers: "); // Display message to enter numbers
    
    for(i=0; i<5; i++){    // Loop for 5 times 
        scanf("%d", &num); // Read number
        sum = sum + num;   // Add into 'sum'
    }
    
    average = sum/(float)5;  // Calculate average by dividing 'sum' by 5
    
    printf("Average = %f", average); // Display average 
    
    return 0;
}

    