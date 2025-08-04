#include <iostream>
#include "header.h"
using namespace std;

int input(){
  int choice{};
  cout << "enter your moove! 1. Rock, 2. Papper, 3. Scissors" << endl;
  cin >> choice;
  if (choice > 4){
    cout << "incorect input!" << endl;
  } if (choice <= 0) {
    cout << "incorect input!" << endl;
  }
  return choice;
}
