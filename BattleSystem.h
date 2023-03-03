#include <iostream>
#include <string>
#include "Category.h"
#include "Enemy.h"
#ifndef BATTLESYSTEM_H
#define BATTLESYSTEM_H
using namespace std;

class BattleSystem {
  private: 
    string Category_name; 
    int Category_health;
    bool Category_dodge;
    bool Category_dodge_enemy;
    int Category_criticalhit;
    int Category_points;
    int current_attack;
    int Player_lightattack;
    int Player_mediumattack;
    int Player_powerfulattack;
    string items_dropped;
    int move;
    int health_remaining;
    int health_remaining_enemy;
  public: 
  BattleSystem();
  string get_categorytype(Category n);
  string get_categorytype_enemy(std::shared_ptr<Enemy> n);
  int health(Category n);
  int damage(Category n);
  int health_enemy(std::shared_ptr<Enemy> n);
  int damage_enemy(std::shared_ptr<Enemy> n);
  int get_dodgeandcounter_player(int action, Category n);
  void set_health_player(int amount, Category n);
  void set_health_enemy(int amount, std::shared_ptr<Enemy> n);
  void set_damage_player(int action, Category n, std::shared_ptr<Enemy> opp);
  void set_damage_enemy(int action, std::shared_ptr<Enemy> n, Category opp);
  void set_dodgeandcounter_player(int action, Category n);
  void set_dodgeandcounter_enemy(int action, std::shared_ptr<Enemy> n);
  void PlayerTurn(int action, Category n, std::shared_ptr<Enemy> opp);
  void EnemyTurn(std::shared_ptr<Enemy> opp, Category n);
};

#endif