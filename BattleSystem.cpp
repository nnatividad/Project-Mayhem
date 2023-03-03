#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h> 
#include <stdio.h> 
#include "BattleSystem.h"
using namespace std;

BattleSystem::BattleSystem() {
  current_attack = 0;
  Player_lightattack = 0;
  Player_mediumattack = 0;
  Player_powerfulattack = 0;
  move = 0;
  health_remaining = 0; 
  health_remaining_enemy = 25;
}

string BattleSystem::get_categorytype(Category n) {
  return n.get_category_type();
}

string BattleSystem::get_categorytype_enemy(std::shared_ptr<Enemy> n) {
  return n->getCategoryType();
}

int BattleSystem::health(Category n) {
  return n.get_health();
}

int BattleSystem::health_enemy(std::shared_ptr<Enemy> n){
  return n->getHealth();
}

int BattleSystem::damage(Category n) {
  return n.get_damage();
}

int BattleSystem::get_dodgeandcounter_player(int action, Category n) {
  return Category_dodge;
}

void BattleSystem::set_health_player(int amount, Category n){
  if(Category_dodge == false) {
    if(health_remaining == 0){
      health_remaining = n.get_health();
    if(get_categorytype(n) == "CNAS" || get_categorytype(n) == "cnas"){
      health_remaining = 150;
      //n.set_health(150);
      //health_remaining = n.get_health();
    }
    else {
      health_remaining = 100;
    }
    n.set_health(health_remaining);
    }
    if(health_remaining - amount < 0){
      health_remaining = 0;
      n.set_health(0);
    }
    else{
      health_remaining -= amount;
      n.set_health(health_remaining);
    }
     
    }
    cout << endl;
    cout << "Player health: " << health_remaining << endl;
  }

void BattleSystem::set_health_enemy(int amount,std::shared_ptr<Enemy> n){
  if(Category_dodge_enemy == false) {
    if(health_remaining_enemy - amount < 0){
      n->setHealth(0);
      health_remaining_enemy = 0;
    }
    else{
      health_remaining_enemy -= amount;
    }

    }
    cout << endl;
    cout << "Enemy health: " << health_remaining_enemy << endl;
  }

void BattleSystem::set_damage_player(int action, Category n, std::shared_ptr<Enemy> opp){
  
  /*if(health_remaining <= 0 ){
    health_remaining = n.get_health();
    if(get_categorytype(n) == "CNAS" || get_categorytype(n) == "cnas"){
      health_remaining = 150;
      //n.set_health(150);
      //health_remaining = n.get_health();
    }
    else {
      health_remaining = 100;
    }
    n.set_health(health_remaining);
  }*/
  srand (time(NULL));
  int damage = n.get_damage();
  if(action == 1) {
    damage = rand() % 3 + 1;
    if(get_categorytype(n) == "CHASS" || get_categorytype(n) == "chass"){
      damage += rand() % 3 + 1;
    }
     current_attack = Player_lightattack;
    cout << "damage: "<< damage << "\nYou can do better than that!" << endl;
    set_health_enemy(damage, opp);
  }
  else if(action == 2) {
    damage = rand() % 5 + 1;
    if(get_categorytype(n) == "CHASS" || get_categorytype(n) == "chass"){
      damage += rand() % 3 + 1;
    }
    current_attack = Player_mediumattack;
    cout << "damage: "<< damage << "\nWow what a hit!" << endl;
    set_health_enemy(damage, opp);
  }
  else if(action == 3) {
    damage = rand() % 10 + 1;
    if(get_categorytype(n) == "CHASS" || get_categorytype(n) == "chass"){
      damage += rand() % 3 + 1;
    }
    current_attack = Player_powerfulattack;
    cout << "damage: "<< damage << "\nThat did some damage!" << endl;
   set_health_enemy(damage, opp);
  }
  else {
    current_attack = 0;
  }
}


void BattleSystem::set_damage_enemy(int action, std::shared_ptr<Enemy> n, Category opp){
  
  if(health_remaining_enemy  <= 0) {
    //n->setHealth(25);
    health_remaining_enemy = 25;
  }
  
  int damage = n->getDamage();
  if(action == 1) {
    damage = rand() % 3 + 1;
    if(get_categorytype_enemy(n) == "CHASS" || get_categorytype_enemy(n) == "chass"){
      damage += rand() % 3 + 1;
    }
     current_attack = Player_lightattack;
    cout << "damage: "<< damage << endl; 
    if(health_remaining_enemy == 0){
      cout << "You did it!" << endl << endl;
    } else{
      cout << "\nYou can do better than that!" << endl;
    }
    set_health_player(damage, opp);
  }
  else if(action == 2) {
    damage = rand() % 5 + 1;
    if(get_categorytype_enemy(n) == "CHASS" || get_categorytype_enemy(n) == "chass"){
      damage += rand() % 3 + 1;
    }
    current_attack = Player_mediumattack;
    cout << "damage: "<< damage << "\nWow what a hit!" << endl;
    set_health_player(damage, opp);
  }
  else if(action == 3) {
    damage = rand() % 10 + 1;
    if(get_categorytype_enemy(n) == "CHASS" || get_categorytype_enemy(n) == "chass"){
      damage += rand() % 3 + 1;
    }
    current_attack = Player_powerfulattack;
    cout << "damage: "<< damage << "\nThat did some damage!" << endl;
    set_health_player(damage, opp);
  }
  else {
    current_attack = 0;
  }
  damage = 1;
}


void BattleSystem::set_dodgeandcounter_player(int action, Category n) {
  srand (time(NULL));
  int random;
  string temp1 = "business";
  string temp2 = "BUSINESS";
  if(get_categorytype(n) == temp1 || get_categorytype(n) == temp2) {
    random = rand() % 4 + 1;
  }
  else {
    random = rand() % 6 + 1;
  }

  if(random == 3 && (get_categorytype(n) == temp1 || get_categorytype(n) == temp2)) {
    current_attack = Player_lightattack;
    cout << "You managed to do some damage!" << endl;
  }
  if(random == 3) {
    Category_dodge = true;
    cout << "Nice dodge!" << endl;
  }
  else {
    Category_dodge = false;
    cout << "Oh no! You weren't able to dodge!" << endl;
  }
}

void BattleSystem::set_dodgeandcounter_enemy(int action, std::shared_ptr<Enemy> n){
  srand (time(NULL));
  int random;
  string temp1 = "business";
  string temp2 = "BUSINESS";
  if(get_categorytype_enemy(n) == temp1 || get_categorytype_enemy(n) == temp2) {
    random = rand() % 4 + 1;
  }
  else {
    random = rand() % 6 + 1;
  }

  if(random == 3 && (get_categorytype_enemy(n) == temp1 || get_categorytype_enemy(n) == temp2)) {
    current_attack = Player_lightattack;
    cout << "You managed to do some damage!" << endl;
  }
  if(random == 3) {
    Category_dodge_enemy = true;
    cout << "Nice dodge!" << endl;
  }
  else {
    Category_dodge_enemy = false;
    cout << "Oh no! You weren't able to dodge!" << endl;
  }
}


void BattleSystem::PlayerTurn(int action, Category n,std::shared_ptr<Enemy> opp) {
  move = action;
  if(move == 1 || move == 2 || move == 3) {
    set_damage_player(move, n, opp);
  }

  else if(move == 4) {
    set_dodgeandcounter_player(move, n);
  }
  cout << endl;
}

void BattleSystem::EnemyTurn(std::shared_ptr<Enemy> n, Category opp) {
  srand (time(NULL));
  int enemy_move;
  
  if(move == 4){
    enemy_move = rand() % 3 + 1;
  }
  else{
    enemy_move = rand() % 4 +1;
    }

  cout << enemy_move << endl;
  if(enemy_move == 1 || enemy_move == 2 || enemy_move == 3) {
    set_damage_enemy(enemy_move, n, opp);
  }

  else if(enemy_move == 4) {
    set_dodgeandcounter_enemy(enemy_move, n);
  }
  cout << endl;
  move = 0;
}