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
  int x{};
  int rand_num{};
  public:
  int bett();
  int timeToJam(int x);
};

#endif
