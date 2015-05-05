#include <unistd.h>

int main() {
  int f = fork();
  if (f) {
    // Parent instructions
  } else {
    // Child instructions
  }
}
