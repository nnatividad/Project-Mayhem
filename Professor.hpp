#ifndef _PROFESSOR_HPP_
#define _PROFESSOR_HPP_

#include "Building.h"
#include <iostream>
#include <string>

class Professor: public Building{
  public:
    Professor() {}

    std::string winningGameMessage(){
      std::string s = "";
      s = "Congratulations, you've completed the game! You have done well. ";
      s += "Thank you for playing and we hope you enjoyed! You are the fish that swam up the river! Good for you!";
      return s;
    }
};

#endif