#ifndef _BUILDING_H
#define _BUILDING_H
#include <iostream>
#include <string>

#include "BattleSystem.h"
#include "Enemy.h"

class Building{
  private:
      int building_id;
  public:
      Building();
      void set_id(int n);
      int get_ID();
      void welcomeMessage(int n);
};
#endif