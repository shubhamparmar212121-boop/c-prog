#include <stdio.h>

// Global variable
int globalVar = 100;

void function1() {
    // Local variable
    int localVar = 10;
    printf("Inside function1():\n");
    printf("  Local variable localVar = %d\n", localVar);
    printf("  Global variable globalVar = %d\n\n", globalVar);
}

void function2() {
    // Static variable
    static int staticVar = 0;  // Initialized only once
    staticVar++;
    printf("Inside function2():\n");
    printf("  Static variable staticVar = %d\n", staticVar);
    printf("  Global variable globalVar = %d\n\n", globalVar);
}

int main() {
    printf("Inside main():\n");
    printf("  Global variable globalVar = %d\n\n", globalVar);

    // Demonstrate local scope
    function1();

    // Demonstrate static variable (retains value)
    function2();
    function2();
    function2();

    // Demonstrate block scope
    int x = 5;
    printf("\nBlock Scope Example:\n");
    if (x > 0) {
        int blockVar = 20; // Block scope
        printf("  Inside if-block: blockVar = %d\n", blockVar);
    }
    // printf("Outside if-block: blockVar = %d\n", blockVar); // ❌ Error if uncommented

    printf("\nBack in main():\n");
    printf("  x = %d\n", x);
    printf("  globalVar = %d\n", globalVar);

    return 0;
}
