#include <stdio.h>
// call by value - call by reference
void    ft_deneme(int *b)
{
    printf("f1 %p\n", b);
    int a = 100;
    b = &a;
    printf("f2 %d\n", *b);
}

int main()
{
    int a = 5;
    printf("%p\n", &a);
    int *b;
    printf("m1 %p\n", b);
    b = &a;
    printf("m2 %p\n", b);
    ft_deneme(b);
    printf("m3 %p\n", b);
    printf("%d\n", *b);
}