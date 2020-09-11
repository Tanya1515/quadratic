//-----------------------------------------------------------
//! Solves a square equation coef2*x^2 + coef1*x + coef0 = 0
//!
//! @param [in] coef2 - coeficient at x^2
//! @param [in] coef1 - coeficient at x^1
//! @param [in] coef0 - coeficient at x^0
//! @param [out] root1 - the first root
//! @param [out] root2 - the second root
//!
//-----------------------------------------------------------

#include <stdio.h>
#include <stdlib.h>
#include <math.h>


extern double Discriminant (double a, double b, double c);

extern int Num_of_Roots(double a, double b, double c);

extern void Root (double a, double b, double c, double *root1, double *root2);

int main()
{
    double coef2, coef1, coef0;
    printf ("Please enter coefficients: ");
    scanf ("%lf", &coef2);
    scanf ("%lf", &coef1);
    scanf ("%lf", &coef0);
    int type_of_roots = Num_of_Roots(coef2, coef1, coef0);
    double root1;
    double root2;
    switch(type_of_roots){
        case -1 :
            printf("Every number can be a root of the equation");
            break;
        case 0 :
            printf("There is no desicion of the equation");
            break;
        case 1 :
            Root(coef2, coef1, coef0, &root1, &root2);
            printf("There is only one root of the equation, that is %f", root1);
            break;
        case 2 :
            Root(coef2, coef1, coef0, &root1, &root2);
            printf ("There are 2 roots of the equation, and they are %f,%f", root1, root2);
            break;
        case 3 :
            Root(coef2, coef1, coef0, &root1, &root2);
            printf("There is only one root of the equation, that is %f", root1);
            break;
        case 4 :
            printf ("There are 2 roots of the equation, and they are complex");
            break;
    }
    return 0;
}


