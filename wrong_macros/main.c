#include <stdio.h>
#include "t.h"
 
static int a = 1;
int f1 (void)
{
  return a++;
}
 
void func (void)
{
  int x;
  x = SQR (f1());
}

int main()
{
    

    return 0;
}
