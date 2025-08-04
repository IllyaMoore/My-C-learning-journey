#include <iostream>
#include <cstdlib>
#include "header.h"
using namespace std;


void turn(int choice) {
  int rand_num = rand() % 4;
  if (rand_num == 1 & choice == 2) {
    cout << "you win rand picked rock" << endl;
  } if (rand_num == 2 & choice == 1) {
    cout << "you lost rand picked papper" << endl;
  } if (rand_num == 1 & choice == 3) {
    cout << "you lost rand picked rock" << endl;
  } if (rand_num == 2 & choice == 3) {
    cout << "you win rand picked paper" << endl;
  } if (rand_num == 3 & choice == 1) {
    cout << "you win rand picked cissors" << endl;
  } if (rand_num == 3 & choice == 2) {
    cout << "you lost rand picked cissors" << endl;
  } else {
    cout << "draw" << endl;
  }
}
