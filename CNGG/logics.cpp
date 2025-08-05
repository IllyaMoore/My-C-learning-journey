#include "header.h"
#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int Game::bett() {
  cin >> x;
  return x;
}

int Game::gen_num(){
  rand_num = rand() % 100 + 1;
  cout << rand_num << endl;
  return rand_num;
}

int Game::player_guess(int sec_num, int trys){
  cout << "enter your guess you have 5 tries!" << endl; 
  while (trys >= 0){
    cin >> guess;
    if (guess > sec_num) {
      cout << "too large!" << endl;
      trys -=1;
    } if (guess < sec_num) {
      cout << "too low!" << endl;
      trys -=1;
    } if (guess == sec_num){
      cout << "you win!" << endl;
      return 1;
    } if (trys == 0){
      return 0;
    }
  }
}
