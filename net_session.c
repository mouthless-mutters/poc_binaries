#include <stdlib.h>

int main ()
{
  int i;
  
  i = system ("net session > net_session.txt");
  
  return 0;
}