#include <stdio.h>

/**
 * A program can optionally take a set of arguments from the user at launch.
 *
 * Storage Class Specifiers
    Define the storage duration of an object.
 */

 // Structs are user defined data storage objects containing public members by default.
 struct my_struct {
    int x;
    int y;
};

/**
 * A union is a special data type that can store different data types at the same memory location. 
 * You can define a union with many members, but only one member can contain a value at any given time. 
 * Unions provide an efficient way of using the same memory location for multiple purposes. 
 * A union’s size will be the size of the largest constituent type.
 */

union my_data {
    int i;
    float f;
    char str[20];
};

int main(int argc, char *argv[])
{
    extern int a;               // defined elsewhere
    static int b;               // hold value between invocations
    register int c;             // store in CPU register for fast access
    auto int d;                 // automatic duration - scope lifetime. Implicit if not specified
    static _Thread_local int e; // thread storage duration

    const int y; // Once defined, is constant and cannot be changed
    volatile int f; // Can be modified externally. the program will check x's value before using it, even if it hasn't been modified locally.

    for (int i = 0; i < argc; i++)
    {
        printf("%s\n", argv[i]);
    }

    /**
     * Perform integer addition or subtraction operations on pointers, taking the data type’s size
     * into account to return the correct address of the next item.
     */
    int x[5];
    int* x_ptr = &x[0];
    printf("Value of x_ptr = %p\n", (void*)x_ptr);
    printf("Value of x_ptr + 1 = %p\n", (void*)(x_ptr + 1));
    char m[5];
    char* y_ptr = &m[0];
    printf("Value of y_ptr = %p\n", (void*)y_ptr);
    printf("Value of y_ptr + 1 = %p\n", (void*)(y_ptr + 1));

    struct my_struct object1;
    object1.x = 1;
    printf("%d\n", object1.x);

    union my_data object2;        
    printf("Size of my_data union: %lu\n", sizeof(object2));

    return 0;
}