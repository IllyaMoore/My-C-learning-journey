#include "header.h"
#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int Game::bett() {
  cin >> x;
  return x;
}

int Game::timeToJam(int x){
  rand_num = rand() % 100 + 1;
  cout << rand_num << endl;
  return rand_num;
}
