#include <stdio.h>
// compile: cc main.c -o main.exe
// run: .\main.exe

// Function signature required if the function is defined after main()
int addNumbers(int num1, int num2);

int main() {

    // FUNCTIONS
    int sum = addNumbers(4, 60);
    printf("The sum is: %d\n", sum);

    // // PRINTING
    // printf("Hello\n");
    // printf("world");
    // printf("!\n");
    return 0;
}

int addNumbers(int num1, int num2) {
    return num1 + num2;
}