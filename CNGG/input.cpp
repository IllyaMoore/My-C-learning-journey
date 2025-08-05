#include <iostream>
#include "header.h"
using namespace std;


int Input::numeric_in(){
  cout << "enter numeric cheracter" << endl;
  cin >> x;
  return x;
}

int Input::choice() {
  while (true) {
    cout << "enter your choice! 1-3 " << endl;
    cin >> x;
    if (x <= 3 && x >= 1){
      break;
    }
  } 
  return x;
}



