// Preprocessor Directives
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    // Check for a write error on puts
    if (puts("Hello, world!") == EOF) {
        return EXIT_FAILURE;
        // code below this line will never execute
    }

    /*  using printf format strings
        %s - conversion specification for string literal
    */
    printf("%s\n", "Hello, old friend!");

    return EXIT_SUCCESS;
    // code below this line will never execute
}