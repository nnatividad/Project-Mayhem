#include<iostream>
#ifndef PLAYER_H
#define PLAYER_H

#include "ItemBag.h"
#include "Map.h"
using namespace std;

class Player {
  private:
    string Player_name;
    int money;
  public:
    Player();
    void set_name(string n);
    void set_money(int n);
    int get_money();
    void Open_menu();
    void User_guide();
    void Open_map(Map& x, Building& y);
    string get_name();
    void addMoney(int n);
    void save();   
};
#endif