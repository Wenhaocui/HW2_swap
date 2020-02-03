#include "src/lib/solution.h"
#include <iostream>
using namespace std;
int main() {
  Solution solution;
  int x = 20;
  int y = 30;
  solution.SwapReference(x,y);
  solution.SwapPointer(&x,&y);
  return 0;

}