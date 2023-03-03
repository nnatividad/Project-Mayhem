#include "Building.h"
#include <iostream>

Building::Building(){
  int building_id = 0;
}

void Building::set_id(int n){
  this->building_id = n;
}

int Building::get_ID(){
    return building_id;
}

void Building::welcomeMessage(int n){
  if(n == 4){
    std::cout << "Welcome to the Professor's Office." << std::endl;
  }
  if(n == 3){
    std::cout << "Welcome to the SRC Arena! Prepare to compete against your fellow UCR student body and staff!" << std::endl;
  }
  if(n == 2){
    std::cout << "Welcome to the building of the Department Head." << std::endl;
  }
  if(n == 1){
    std::cout << "Welcome to Office Hours, here you can shop and gain items to help boost your character's attributes!" << std::endl;
  }
}