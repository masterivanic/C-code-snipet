#include <stdio.h>
#include <stdbool.h>

int double_number_a(int x)
{
    return 2 * x;
}

void double_number_b(int *x)
{
    *x *= 2;
}

static inline void square(int* x) {
    *x *= *x;
    return;
}

int main()
{

    /**
     * Multi-line comments are written like this.
     * Goto : Used to jump between code sections. The use of goto is contraversial as it can promote bad code decisions, but it can be very useful for avoiding large nested ‘if’ statements.
     */
    int a = 0;
    unsigned int b; // store only positive integer
    char c;         // Character
    short d;        // Short integer
    long e;         // Long integer
    float f;        // Floating point integer
    double g;       // Double-precision floating point integer
    bool h;         // Boolean TRUE or FALSE

    char greeting_a[6] = {'H', 'e', 'l', 'l', 'o', '\0'};
    char greeting_b[] = "Hello";
    char *greeting_c = "Hello";

    printf("Hello World!\n"); // print hello world
    int my_array[5];
    int my_array_b[] = {0, 1, 2, 3, 4};

    size_t len = sizeof(my_array) / sizeof(my_array[0]);
    for (size_t i = 0; i < len; i++)
    {
        my_array[i] = i;
    }
    for (int i = 1; i <= 3; i++)
    {
        printf("%d\n", i);
    }
    printf("%d\n", my_array[2]);

    char character = 'A';
    if (character < 'a')
        printf("Less than\n"); // character is promoted to int to compare it with the integer value of 'a'.
    else
        printf("Greater than or equal to\n");

    int num = 5;
    square(&num);
    num < 0 ? printf("num is negative\n") : printf("num is 0 or positive\n");
    printf("The address of num is %p\n", (void*)&num); // Use ‘&’ before a variable name to use it’s address in memory rather than the value stored.

    int* y = &num;
    printf("The value stored at num is %d\n", *y); // Use ‘*’ before a variable name to use the value it points to rather than the address stored.

    printf("%d\n", num);
    printf("%d\n", double_number_a(num)); // 10
    printf("%d\n", num);                  // 5
    double_number_b(&num);
    printf("%d\n", num); // 10

    int* var; // pointer to type int. A pointer is a variable that can hold the address of another variable.

    int x = 2;
    switch (x)
    {
    case 1:
        printf("One");
        break;
    case 2:
        printf("Two \n");
        break;
    default:
        break;
    }

    if (x < 3)
        goto cleanup;

cleanup:
    return 0;
}