#include <stdio.h>

int main()
{
    /* Variables */
    char c = 'a';
    int i = 1;
    double d = 2.5;

    /* Pointers */
    char *pc = &c;
    int *pi = &i;
    double *pd = &d;

    /* Addresses */
    printf("The address of char c is 0x%x\n", (unsigned int)&c);
    printf("The address of int i is 0x%x\n", (unsigned int)&i);
    printf("The address of double d is 0x%x\n", (unsigned int)&d);

    printf("The address of char* pc is 0x%x\n", (unsigned int)&pc);
    printf("The address of int* pi is 0x%x\n", (unsigned int)&pi);
    printf("The address of double* pd is 0x%x\n", (unsigned int)&pd);

    /* Values */
    printf("The value of char c is %c\n", c);
    printf("The value of int i is %d\n", i);
    printf("The value of double d is %f\n", d);

    printf("The value of char* pc is %u\n", (unsigned int)pc);
    printf("The value of int* pi is %u\n", (unsigned int)pi);
    printf("The value of double* pd is %u\n", (unsigned int)pd);

    /* Sizes */
    printf("The size of char is %lu\n", sizeof(char));
    printf("The size of int is %lu\n", sizeof(int));
    printf("The size of double is %lu\n", sizeof(double));

    printf("The size of char* is %lu\n", sizeof(char*));
    printf("The size of int* is %lu\n", sizeof(int*));
    printf("The size of double* is %lu\n", sizeof(double*));

    return 0;
}


#include <stdio.h>

/* Function to swap values using pointers */
void swap(int *x, int *y)
{
    int temp;
    temp = *x;   // store value of x
    *x = *y;     // put value of y into x
    *y = temp;   // put old value of x into y
}

int main()
{
    int a, b;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    printf("\nBefore swap: a = %d, b = %d\n", a, b);

    /* Pass addresses of a and b */
    swap(&a, &b);

    printf("After swap:  a = %d, b = %d\n", a, b);

    return 0;
}

