#include <iostream>
#ifndef ITEMBAG_H
#define ITEMBAG_H
#include "Category.h"


class ItemBag{
  public:
    ItemBag();
    void getItems(Category c);
    void use_light_potion(Category c);
    void use_medium_potion(Category c);
    void use_max_potion(Category c);
    void use_adderall(Category c);
    void use_strength_enhancementPills(Category c);
    void top_ramen(Category c);
    void use_liquid_luck(Category c);

    int light_heal;
    int medium_heal;
    int max_heal;
    int adderall_count;
    int strength_enhancementPills;
    int top_ramen_meals;
    int liquid_luck_vials;
    
    void set_light_heal_amount(int amount);
    void set_medium_heal_amount(int amount);
    void set_max_heal_amount(int amount);
    void set_adderall_amount(int amount);
    void set_strength_enhancementPills_amount(int amount);
    void set_top_ramen(int amount);
    void set_liquid_luck(int amount);
    int get_light_heal_amount();
    int get_meduim_heal_amount();
    int get_max_heal_amount();
    int get_adderall_count_amount();
    int get_strength_enhancementPills_amount();
    int get_top_ramen_meals_amount();
    int get_liquid_luck_vials();

  private:
    const int LIGHT_HEAL_VALUE = 10;
    const int MEDIUM_HEAL_VALUE = 25;
    const int MAX_HEAL_VALUE = 50;
};




#endif