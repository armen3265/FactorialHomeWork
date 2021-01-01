#include "factorial.h"

int factorial(int n)
{
  if(n < 0)
  {
    throw std::runtime_error("n is a smaller of 0");
  }
  if(n > 1)
  {
    return n * factorial(n-1);
  }
  return 1;
}
