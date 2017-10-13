#include <cstdio>
#include <math.h>

int main()
{
    std::puts("please enter a, b and c for 'ax^2+bx+c=0':");

    int a = 0;
    int b = 0;
    int c = 0;
    std::scanf("%f %f %f", &a, &b, &c);

    float d = b * b - 4 * a * c;
    float x1 = -(b - std::sqrt(d)) / (2 * a);
    float x2 = -(b + std::sqrt(d)) / (2 * a);

    std::printf("solution: %f %f\n", x1, x2);
}