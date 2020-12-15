#include <stdio.h>
void printN (int n);
int main(void)
{
printN(5);
return 0;
}

void printN (int n) {   
if (n<=10){
  printf("%d ",n);
  printN(n+1);
}
}

