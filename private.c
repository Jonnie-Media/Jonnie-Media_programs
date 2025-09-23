//Display Height,bank balance,Phone number 
/*
Name:John
Reg:133
Date:20/9/2025
Description: Prompt user to enter  program 

*/
#include <stdio.h>
//main function
 
int main () 
{
    //variable declaration
    float height; 
    double Bankbalance;
    long long phonenumber;
    
    // prompt the user
	printf("Enter your height: \n");
    scanf("%f", &height);
    printf("Height is  %.1f inches \n", height);
    
	printf("Enter your bank balance: \n");
    scanf("%lf", &Bankbalance);
    printf("Bankbalance is Kshs.%.2lf \n", Bankbalance);
    
	printf("Enter phonenumber: \n"); 
    scanf("%lld", &phonenumber);
    printf("Phonenumber is %lld \n", phonenumber);
    
    
    return 0;
}