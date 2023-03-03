#include <iostream>
#include <string>
#include "Category.h"
using namespace std;


Category::Category(){
  max_health = 100;
  max_criticalhit = 10;
  max_damage = 10;
  max_dodgeandcounter = 10;
  category_name = "";
  category_health = 100;
  category_damage = 1;
  category_dodgeandcounter = 1;
  category_criticalhit = 1;
  category_points = 4;
}

void Category::set_category_type(string s){
  category_name = s;
  if(s == "bcoe" || s == "BCOE"){
    category_criticalhit = 5;
  }

  if(s == "chass" || s == "CHASS"){
    category_damage = 5;
  }

  if(s == "cnas" || s == "CNAS"){
    category_health = 150;
  }

  if(s == "business" || s == "BUSINESS"){
    category_dodgeandcounter = 5;
  }
}

string Category::get_category_type(){
  return category_name;
}

int Category::get_health(){
  return category_health;
}

int Category::get_max_health(){
  return max_health;
}

int Category::get_max_dodgeandcounter(){
  return max_dodgeandcounter;
}

int Category::get_max_critical_hit(){
  return max_criticalhit;
}

int Category::get_max_damage(){
  return max_damage;
}

void Category::set_max_health(int amount){
  max_health = amount;
}
void Category::set_max_dodgeandcounter(int amount){
  max_dodgeandcounter = amount;
}
void Category::set_max_damage(int amount){
  max_damage = amount;
}
void Category::set_max_critical_hit(int amount){
  max_criticalhit = amount;
}

void Category::set_health(int n){
  category_health = n;
}

int Category::get_damage(){
  return category_damage;
}

int Category::get_dodgeandcounter(){
  return category_dodgeandcounter;
}

int Category::get_criticalhit(){
  return category_criticalhit;
}

void Category::setCategoryPoints(){
  category_points += 1;
}

void Category::set_damage(int amount){
  category_damage = amount;
}

void Category::set_dodgeandcounter(int amount){
  category_dodgeandcounter = amount;
}

void Category::set_criticalhit(int amount){
  category_criticalhit = amount;
}