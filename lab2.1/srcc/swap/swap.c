#include "swap.h"

void Swap(char *left, char *right)
{
  char inter = *left;
  *left = *right;
  *right = inter;
}
