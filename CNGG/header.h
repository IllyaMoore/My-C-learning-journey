#ifndef INPUT
#define INPUT
using namespace std;

class Input{
  int x {};
  public:
  int numeric_in();
  int choice();
};

class Game{
  int guess{};
  int x{};
  int rand_num{};
  public:
  int bett();
  int gen_num();
  int player_guess(int sec_num, int trys);
};

#endif
