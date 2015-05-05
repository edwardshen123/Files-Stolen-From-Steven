#include <stdio.h>
#include <stdlib.h>

int main() {
  __asm__ ("MOV $23837,%ebx\n"
       "MOV $16157,%eax\n"
       "MOV $6899,%ecx\n"
       "CMP %eax,%ebx\n"
       "JL L1\n"
       "JMP L2\n"
       "L1:\n"
       "IMUL %eax,%ebx\n"
       "ADD %eax,%ebx\n"
       "MOV %ebx,%eax\n"
       "SUB %ecx,%eax\n"
       "JMP L3\n"
       "L2:\n"
       "IMUL %eax,%ebx\n"
       "SUB %eax,%ebx\n"
       "MOV %ebx,%eax\n"
       "ADD %ecx,%eax\n"
       "L3:\n"
       "NOP");
  /*asm ("movl %1, %%eax;"
       "movl %%eax, %0;"
       :"=r"(y)	// y is output operand
       :"r"(y)		// x is input operand
       :"%eax"	 ); */
  register int i asm("eax");

  printf("%d\n",i);
}
