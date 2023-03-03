#ifndef _SRC_ARENA_HPP_
#define _SRC_ARENA_HPP_

#include <iostream>
#include "Player.h"

class SRCArena: public Building{
  private:
      int betAmount = 0;
      int choice = 0;
  public:

      void bet(Player n){
        int rand1 = rand() % 10 + 1;
        cout << "How much would you like to bet? ";
        cin >> betAmount;
        cout << endl; 
        cout << "What Kind of challenge are you looking for? The harder the challange, the bigger the payday!" << endl;
        cout << "1. Easy(double your money)" << endl;
        cout << "2. Medium(triple your money)" << endl;
        cout << "3. Hard(quadruple your money)" << endl;
        cout << "4. Prize fighting eh? I should report you to campus security!(dont fight)" << endl;
        cin >> choice;
        
        if(choice == 1){
          if(rand1 > 3){
            n.set_money(n.get_money() + (betAmount * 2));
          }
          else{
            n.set_money(n.get_money() - betAmount);
          }
        }
        else if(choice == 2){
          if(rand1 > 5){
            n.set_money(n.get_money() + (betAmount * 3));
          }
          else{
            n.set_money(n.get_money() - betAmount);
          }
        }
        else if(choice == 3){
          if(rand1 > 7){
            n.set_money(n.get_money() + (betAmount * 4));
          }
          else{
            n.set_money(n.get_money() - betAmount);
          }
        }
        else if(choice == 4){
          cout << "Suit yourself pal" << endl;
        }
      }
};

#endif