#include <iostream>
#include "input.h"
using namespace std;

float cgpa(void) {
  int sum_murk {};
  int choice {};
  int x {};

  cout << "how many marks do you have?" << endl;
  cin >> choice;
  int start_choice = choice;
    
  while (choice > 0) {
    cout << "enter your murk!" << endl;
    cin >> x;
    sum_murk += x;
    choice -= 1;
  }
  float result = static_cast<float>(sum_murk) / start_choice;
  return result;


} 
