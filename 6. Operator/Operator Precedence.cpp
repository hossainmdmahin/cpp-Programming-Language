#include <iostream>
using namespace std;

int main() {

  /* 
  When a calculation contains more than one operator, 
  C++ follows order of operations rules to decide which part to calculate first.
  For example, multiplication happens before addition: */
  
  int result1 = 2 + 3 * 4;     // 2 + 12 = 14
  int result2 = (2 + 3) * 4;   // 5 * 4 = 20

  cout << result1 << "\n";
  cout << result2 << "\n";

  return 0;
}
