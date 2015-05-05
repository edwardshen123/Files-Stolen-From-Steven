#include <stdio.h>
#include <stdlib.h>

int main() {
  int x = 5;
  int y = -1;
  char s[200];
  sprintf(s,"The point (x, y) is (%d, %d)\n",x,y);
  printf("%s",s);
}
