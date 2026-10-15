#include <stdio.h>

void fun2(int n);  // Function declaration

void fun1(int n) {
    if (n <= 0) {
        return;
    }

    printf("%d ", n);
    fun2(n - 1);
}

void fun2(int n) {
    if (n <= 0) {
        return;
    }

    printf("%d ", n);
    fun1(n - 1);
}

int main() {
    fun1(5);
    return 0;
}