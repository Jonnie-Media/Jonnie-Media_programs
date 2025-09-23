//calculate volume and surface area 

#include <stdio.h>
#define PI 3.14159

int main() {
     double radius, height, volume, surface_area;
    
     // prompt user for input
     printf("Enter the radius of the cylinder: ");
     scanf("%lf", &radius);
     
     printf("Enter the height of the cylinder: ");
     scanf("%lf", &height);
     
     // calculate volume and surface area
     volume= PI * radius * radius * height;
     surface_area= (2 * PI * radius * radius) + (2 * PI * radius * height);
     
     //Display results
     printf("\nvolume of the cylinder = %.2lf\n", volume);
     printf("surface of the cylinder = %.2lf\n", surface_area);
     
     return 0;
 }    