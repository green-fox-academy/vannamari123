#include <iostream>
#include <string>

using namespace std;

class Pirate{
  private:
      int calls;
  public:
      int drink_rum(){
         return calls++;
      };

      string hows_going_mate(){
          if(calls >= 5){
             // cout << "Arrrrr!" << endl;
              return "Arrr!";
          } else {
             // cout << "Nothin'" << endl;
              return "Nothin'";
          }
      };
  };


int main() {
    // create a pirate class
    // it should have 2 methods
    // drink_rum()
    // hows_goin_mate()
    // if the drink_rum was called at least 5 times:
    // hows_goin_mate should return "Arrrr!"
    // "Nothin'" otherwise

    Pirate BlackJack;
    BlackJack.drink_rum();
    BlackJack.drink_rum();
    cout << BlackJack.hows_going_mate() << endl;

    BlackJack.drink_rum();
    BlackJack.drink_rum();
    BlackJack.drink_rum();
    BlackJack.drink_rum();
    BlackJack.drink_rum();
    BlackJack.drink_rum();

   cout << BlackJack.hows_going_mate() << endl;




    return 0;
}
