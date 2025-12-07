
#include <stdio.h>
#include <assert.h>

// ------------ Application Code ------------
int sum(int a, int b) {
    return a + b;
}

// ------------ Test Code ------------
void run_tests() {
    printf("Running tests...\n");

    assert(sum(2, 3) == 5);
    assert(sum(10, 20) == 30);
    assert(sum(-5, 5) == 0);
    assert(sum(100, 200) == 300);

    printf("All tests passed successfully!\n");
}

// ------------ Main Function ------------
int main() {
    printf("Main Program Output:\n");
    printf("Sum = %d\n", sum(10, 20));

    // Run test inside main
    run_tests();

    return 0;
}
