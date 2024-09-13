#include <stdio.h>

void func1() {
    printf("Function 1\n");
}

void func2() {
    printf("Function 2\n");
}

void func3() {
    printf("Function 3\n");
}

int main() {
    // Declare an array of three pointers to functions
    void (*functions[3])() = {func1, func2, func3};

    // Index value
    int index = 1; 

    //Invoke the function based on the index
    functions[index]();

    return 0;
}