#include <stdio.h>

#define COMMAND(NAME, TYPE) TYPE##_##NAME##_command
#define DEFINE_COMMAND(NAME, TYPE) \
    void COMMAND(NAME, TYPE)()

DEFINE_COMMAND(quit, internal) {
    printf("Hi!\n");
}

DEFINE_COMMAND(start, external) {
    printf("Hello!\n");
}

int main() {
    internal_quit_command();
    external_start_command();

    return 0;
}
