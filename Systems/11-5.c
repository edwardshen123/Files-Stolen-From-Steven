#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {

  fork();
  fork();
  printf("pid: %d\n", getpid());

  return 0;

}
