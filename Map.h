#ifndef MAP_H__
#define MAP_H__

#include <iostream>
#include "Building.h"
#include <string>

class Map {
  public:
      std::string get_location(Building x);
      void travel_to(Building &x);
      void move_on(int &buildingID);
      void move_back(int &buildingID);
};
#endif