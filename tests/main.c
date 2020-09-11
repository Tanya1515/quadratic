#include <stdio.h>
#include <stdlib.h>

extern double Discriminant (double a, double b, double c);

extern int Num_of_Roots(double a, double b, double c);

extern void Root (double a, double b, double c, double *root1, double *root2);


int test_for_num_of_roots(int a, int b)
{
    if (a == b)
        return 1;
    return 0;
}

int test_for_discriminant(double a, double b)
{
    if (a == b)
        return 1;
    return 0;
}

void print_result (int res)
{
    if (res)
        printf("ok\n");
    else
        printf("error");

}

int main()
{
    print_result (test_for_num_of_roots(Num_of_Roots(0,0,0), -1));
    print_result (test_for_num_of_roots(Num_of_Roots(0,0,1), 0));
    print_result (test_for_num_of_roots(Num_of_Roots(0,1, 1), 1));
    print_result (test_for_num_of_roots(Num_of_Roots(1,5,4), 2));
    print_result (test_for_num_of_roots(Num_of_Roots(1,2,1), 3));
    print_result (test_for_num_of_roots(Num_of_Roots(33,1,1), 4));
    print_result (test_for_discriminant(Discriminant(3,6,3), 0));
    print_result (test_for_discriminant(Discriminant(1,-1,2), -7));
    print_result (test_for_discriminant(Discriminant(0,6,0), 36));
}
