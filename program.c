#include <stdio.h>

/**
 * A program can optionally take a set of arguments from the user at launch.
 *
 * Storage Class Specifiers
    Define the storage duration of an object.
 */
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

    return 0;
}