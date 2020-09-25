//-----------------------------------------------------------
/** @file */
/**
* Solves a square equation coef2*x^2 + coef1*x + coef0 = 0
* @param [in] coef2 - coeficient at x^2
* @param [in] coef1 - coeficient at x^1
* @param [in] coef0 - coeficient at x^0
* @param [out] root1 - the first root
* @param [out] root2 - the second root
*/
//-----------------------------------------------------------

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <assert.h>

extern double Discriminant(double a, double b, double c);

extern int Num_of_Roots(double a, double b, double c);

extern double Linaer_case(double c, double b);

extern void Root(double a, double b, double c, double *root1, double *root2);

extern int Is_Zero(double value);

extern void Print_result(int type_of_roots, double coef2, double coef1, double coef0);

int main()
{
    double coef2, coef1, coef0 = NAN;
    printf("Please enter coefficients: ");
    scanf("%lf %lf %lf", &coef2, &coef1, &coef0);
    assert(isfinite(coef2));
    assert(isfinite(coef1));
    assert(isfinite(coef0));
    int type_of_roots = Num_of_Roots(coef2, coef1, coef0);
    Print_result(type_of_roots, coef2, coef1, coef0);
    return 0;
}
