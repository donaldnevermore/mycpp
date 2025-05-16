#define NOL_IMPLEMENTATION
// #define NOL_NO_LOGS
#include "nol.h"

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

int main(void) {
    pid_t pid;
    for (int i = 0; i < 2; ++i) {
        pid = fork();
        if (pid > 0) {
            NOL_INFO("before parent, pid: %d, i: %d", pid, i);
            wait(NULL);
            NOL_INFO("after parent, pid: %d, i: %d", pid, i);
        } else if (pid == 0) {
            NOL_INFO("child ok, pid: %d, i: %d", pid, i);
            break;
        } else {
            fprintf(stderr, "fork failed\n");
            exit(1);
        }
    }
    NOL_INFO("reach pid: %d", pid);

    return 0;
}
