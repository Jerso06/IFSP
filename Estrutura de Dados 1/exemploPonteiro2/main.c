#include <stdio.h>
#include <stdlib.h>

int main()
{
    float z = 2.5;
    float *fp;

    fp = &z;

    printf("*&z = %f\n", *&z);
    printf("*fp = %f\n", *fp);
    printf("**&fp = %f\n", **&fp);


    int a, b, *p1, *p2;

    a = 4;
    b = 3;
    p1 = &a;
    p2 = p1;
    *p2 = *p1 + 3;
    b = b * (*p1);
    (*p2)++;
    p1 = &b;

    printf("%d  %d\n", *p1, *p2); // 21 8
    printf("%d  %d\n", a, b); // 8 21

}
