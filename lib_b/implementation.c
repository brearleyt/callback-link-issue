#include "lib_b.h"

extern void foo(void);
extern void bar(void);
extern void baz(void);

void initialise_b(void) {
    foo();
    bar();
    baz();
}