#include <stdio.h>
int add(int x, int y){
    return x + y;
}
int sub(int x, int y){
    return x - y;
}
int mul(int x, int y){
    return x * y;
}
int div(int x, int y){
    return x / y;
}
int main(void) {
    int a = 10, b = 5;
    printf("%d + %d = %d\n", a, b, add(a, b));
    printf("%d - %d = %d\n", a, b, sub(a, b));
    printf("%d * %d = %d\n", a, b, mul(a, b));
    printf("%d / %d = %d\n", a, b, div(a, b));
    return 0;
}