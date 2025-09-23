#include <stdio.h>
//main function

int main () {

//variable description
int age;
float annual_income;

//prompt user to enter age
printf("Enter your age:");
scanf("%d", &age);
   printf("age is %.d years \n", age);
   
     if (age > 21){
     printf("Enter annual_income");
     scanf("%f", &annual_income);
     }
     if (annual_income > 21000){
     printf("congratulations!You qualify for a loan \n");
          printf("annual_income is Kshs.%.2f \n", annual_income);
     }
     else {
     printf("sorry we are unable to process your loan");
     
  

     }
     return 0;
}     