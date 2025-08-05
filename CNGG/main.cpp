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
   
    int x1{};
      
    if (x == 1) {
      while (true) {
        cout << "bet -> " << endl;
        Game game;
        x = game.bett();
        x1 = x; 
        if (x > balance) {
          cout << " error balance " << endl;
        } else{
          break;
        }
      }
      cout << "you betting " << x << endl;
      Game game;
      int sc_num = game.gen_num();
      balance = balance - x1;
      int result = game.player_guess(sc_num, 10); 
      if (result == 1) {
        balance = balance + x * 2;
      } if (result == 0) {
        balance = balance;
      }
    }

    if (x == 2){
      cout << balance << endl;
    }
  
    if (x == 3){
      break;
    }
  }
}
