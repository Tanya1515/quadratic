#include <math.h>
#include <stdio.h>
#include <assert.h>

#define INFINITE_NUMBER_OF_ROOTS -1
#define NO_ROOTS 0
#define ONE_ROOT_LINEAR_CASE 1
#define ONE_ROOT 2
#define TWO_ROOTS 3
#define COMPLEX_ROOTS 4
#define BAD_DISCRIMINANT 5

double Discriminant(double a, double b, double c)
{
    return (b * b - 4 * a * c);
}

int Is_Zero(double value)
{
    if (fabs(value) < 1e-6)
        return 1;
    return 0;
}

int Num_of_Roots(double a, double b, double c)
{
    if ((Is_Zero(a)) && (Is_Zero(b)) && (Is_Zero(c)))
        return INFINITE_NUMBER_OF_ROOTS;
    if ((Is_Zero(a)) && (Is_Zero(b)))
        return NO_ROOTS;
    if (Is_Zero(a))
        return ONE_ROOT_LINEAR_CASE;
    double d = Discriminant(a, b, c);
    if (isnan(d) != 0)
        return BAD_DISCRIMINANT;
    if (d > 0)
        return ONE_ROOT;
    if (d == 0)
        return TWO_ROOTS;
    return COMPLEX_ROOTS;
}

double Linaer_case(double b, double c)
{
    double r1;
    r1 = (-1) * c / b;
    return r1;
}

void Root(double a, double b, double c, double *root1, double *root2)
{
    double d = Discriminant(a, b, c);
    if (isnan(d) != 0)
        return;
    double r1, r2;
    if (a == 0)
        r1 = Linaer_case(b, c);
    else if (d > 0)
    {
        r1 = ((-1) * b + sqrt(d)) / (2 * a);
        r2 = ((-1) * b - sqrt(d)) / (2 * a);
    }
    else if (d == 0)
        r1 = ((-1) * b) / (2 * a);

    *root1 = r1;
    *root2 = r2;
    return;
}

void Print_result(int type_of_roots, double coef2, double coef1, double coef0)
{
    double root1, root2 = NAN;
    switch (type_of_roots)
    {
    case -1:
        printf("Every number can be a root of the equation\n");
        break;
    case 0:
        printf("There is no desicion of the equation\n");
        break;
    case 1:
        Root(coef2, coef1, coef0, &root1, &root2);
        assert(isfinite(root1));
        printf("There is only one root of the equation, that is %f\n", root1);
        break;
    case 2:
        Root(coef2, coef1, coef0, &root1, &root2);
        assert(isfinite(root2));
        assert(isfinite(root1));
        printf("There are 2 roots of the equation, and they are %f,%f\n", root1, root2);
        break;
    case 3:
        Root(coef2, coef1, coef0, &root1, &root2);
        assert(isfinite(root1));
        printf("There is only one root of the equation, that is %f\n", root1);
        break;
    case 4:
        printf("There are 2 roots of the equation, and they are complex\n");
        break;
    case 5:
        printf("Bad discriminant\n");
        break;
    }
}
