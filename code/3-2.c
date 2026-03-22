#include <stdio.h>
int global_var = 0;

void test_scope(){
    static int static_var = 0;
    int local_var = 0;

    global_var++;
    static_var++;
    local_var++;
    printf("global_var: %d\n", global_var);
    printf("static_var: %d\n", static_var);
    printf("local_var: %d\n", local_var);
}
int main() {//      g s l
    test_scope();// 1 1 1
    printf("\n");
    test_scope();// 2 2 1
    printf("\n");
    test_scope();// 3 3 1

    return 0;
}