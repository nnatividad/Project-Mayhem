#include<iostream>
#ifndef CATEGORY_H
#define CATEGORY_H

class Category{
  private:
  std::string category_name;
  int category_points;  
  int category_health;
  int category_damage;
  int category_dodgeandcounter;
  int category_criticalhit;
  Category* c;
  
  public:
    Category();
    int max_health;
    int max_dodgeandcounter;
    int max_damage;
    int max_criticalhit;

    std::string get_category_type();
    void set_category_type(std::string s);

    int get_max_health();
    int get_max_dodgeandcounter();
    int get_max_damage();
    int get_max_critical_hit();

    void set_max_health(int amount);
    void set_max_dodgeandcounter(int amount);
    void set_max_damage(int amount);
    void set_max_critical_hit(int amount);

    int get_damage();
    int get_health();
    int get_dodgeandcounter();
    int get_criticalhit();
    
    void set_health(int n);
    void set_damage(int amount);
    void set_dodgeandcounter(int amount);
    void set_criticalhit(int amount);
    
    void setCategoryPoints();
};
#endif