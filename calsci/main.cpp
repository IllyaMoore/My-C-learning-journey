#include <iostream>
#include "header.h"

using namespace std;

int main() {

  cout << "---welcome to my calculator---" << endl;
  cout << "  ---enter your operation!---" << endl;
  Input input;
  input.get_usr_input();

  return 1;
}
