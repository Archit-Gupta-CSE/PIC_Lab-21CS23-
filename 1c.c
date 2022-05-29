#include <stdio.h>
#define INCH_TO_CM 2.54 //defining a constant value 
int main()
{ 
    double inch,cm;
    printf("Enter the distance in cm:");
    scanf("%lf",&cm);
    inch=cm/INCH_TO_CM; 
    printf("Distance %0.2lf cms is = %0.2lf inches\n",cm,inch); 
    /* In %0.2lf the %lf 'format specifier' is used for printing double values
    and '0.2' before 'lf' is used to print double value upto 2 decimal digits (string formatting!). 
    Extra: for printing long double values use %Lf format specifier! */
    return 0;
}


