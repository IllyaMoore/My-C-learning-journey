#include <iostream>
#include "header.h"

int main() {
  int balance{100};
  while (true) {
    cout << "welcome pick your option! 1.bett, 2.balance, 3.exit" << endl;
    int x{};
    Input input;
    x = input.choice();
    cout << x << endl;
    
    if (x == 1) {
      while (true) {
        cout << "bet -> " << endl;
        Game game;
        x = game.bett();
        if (x > balance) {
          cout << " error balance " << endl;
        } else{
          break;
        }
      }
      cout << "you betting " << x << endl;
      Game game;
      game.timeToJam(1);
    }

    if (x == 2){
      cout << balance << endl;
    }
  
    if (x == 3){
      break;
    }
  }
}
