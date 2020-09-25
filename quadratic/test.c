#include <stdio.h>
#include <stdlib.h>

extern double Discriminant(double a, double b, double c);

extern int Num_of_Roots(double a, double b, double c);

extern double Linaer_case(double c, double b);

extern void Root(double a, double b, double c, double *root1, double *root2);

extern int Is_Zero(double value);

extern void Print_result(int type_of_roots, double coef2, double coef1, double coef0);

int test(double a, double b)
{
    if (a == b)
        return 1;
    return 0;
}

void print_result(int res)
{
    if (res)
        printf("ok\n");
    else
        printf("error\n");
}

int main()
{
    print_result(test(Linaer_case(5, 25), -5));
    print_result(test(Linaer_case(5, 10), -2));
    print_result(test(Is_Zero(0), 1));
    print_result(test(Is_Zero(10), 0));
    print_result(test(Num_of_Roots(0, 0, 0), -1));
    print_result(test(Num_of_Roots(0, 0, 1), 0));
    print_result(test(Num_of_Roots(0, 1, 1), 1));
    print_result(test(Num_of_Roots(1, 5, 4), 2));
    print_result(test(Num_of_Roots(1, 2, 1), 3));
    print_result(test(Num_of_Roots(33, 1, 1), 4));
    print_result(test(Discriminant(3, 6, 3), 0));
    print_result(test(Discriminant(1, -1, 2), -7));
    print_result(test(Discriminant(0, 6, 0), 36));
}
