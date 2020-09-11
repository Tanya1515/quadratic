#include <math.h>
double Discriminant (double a, double b, double c)
{
    return (b*b - 4*a*c);
}

int Num_of_Roots(double a, double b, double c)
{
    if ((a == 0) && (b == 0) && (c == 0))
        return -1;
    if ((a == 0) && (b == 0))
        return 0;
    if (a == 0)
        return 1;
    double d =  Discriminant (a, b, c);
    if (d > 0)
        return 2;
    if (d == 0)
        return 3;
    return 4;
}

void Root (double a, double b, double c, double *root1, double *root2)
{
    double d = Discriminant(a,b,c);
    double r1, r2;
    if (a == 0)
        r1 = (-1)*c/b;
    else if (d > 0)
    {
        r1 = ((-1)*b + sqrt(d))/(2*a);
        r2 = ((-1)*b - sqrt(d))/(2*a);
    }
    else if (d == 0)
        r1 = ((-1)*b)/(2*a);

    *root1 = r1;
    *root2 = r2;
    return;
}
