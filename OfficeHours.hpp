#ifndef _OFFICE_HOURS_HPP_
#define _OFFICE_HOURS_HPP_

#include <iostream>
#include "Player.h"
#include "Building.h"

class OfficeHours: public Building{
  private:
      int price;
      int sell;
  public:
      void buy_item(Player& n, ItemBag& x){
        int light_heals = 0;
        int medium_heals = 0;
        int max_heals = 0;
        int strength_pills = 0;
        int top_ramen = 0;
        int adderall = 0;
        int liquid_vials = 0;
        char input;
        price = 0;
        std::cout << "L - light heal ($1)" << std::endl;
        std::cout << "m - medium heal ($3)" << std::endl;
        std::cout << "M - max heal ($5)" << std::endl;
        std::cout << "S - strength enhancement pills ($5)" << std::endl;
        std::cout << "T - top ramen ($1)" << std::endl;
        std::cout << "A - adderall count ($1)" << std::endl;
        std::cout << "V - liquid luck vials ($3)" << std::endl;
        std:: cout << std::endl;
        std::cout << "When you are finished choosing items please press q to checkout." << std:: endl;
        std::cout << "Which items would you like to buy?: ";
        cin >> input;

        while(input != 'q'){
          if(input == 'L'){
            price += 1;
            light_heals++;
            std::cout << "Please select another item, or enter q to checkout: ";
          }
          else if(input == 'm'){
            price += 3;
            medium_heals++;
            std::cout << "Please select another item, or enter q to checkout: ";
          }
          else if(input == 'M'){
            price += 5;
            max_heals++;
            std::cout << "Please select another item, or enter q to checkout: ";
          }
          else if(input == 'S'){
            price += 5;
            strength_pills++;
            std::cout << "Please select another item, or enter q to checkout: ";
          }
          else if(input == 'T'){
            price += 1;
            top_ramen++;
            std::cout << "Please select another item, or enter q to checkout: ";
          }
          else if(input == 'A'){
            price += 1;
            adderall++;
            std::cout << "Please select another item, or enter q to checkout: ";
          }
          else if(input == 'V'){
            price += 3;
            liquid_vials++;
            std::cout << "Please select another item, or enter q to checkout: ";
            }
          else{
            std::cout << "Invalid item please enter a valid item, or enter q to checkout." << std::endl;
            cin >> input;
          }
          cin >> input;
        }
        std::cout << "Your total comes out to be $" << price << "." << std::endl;
        std::cout << "Would you like to purchase? Enter Y to purchase, or N to discard and leave Office Hours! ";
        cin >> input;
        if(input == 'Y'){
          int userMoney = n.get_money();
          if(userMoney < price){
            std::cout << "Sorry, you are asking to buy more than you can afford! Office Hours has now closed! Come back with more money!" << std::endl;
          }
          else{
          userMoney = userMoney - price;
          n.set_money(userMoney);
          std::cout << "You now have $" << n.get_money() << " left in your wallet." << std::endl;

            if(light_heals > 0){
            std::cout << "You've purchased ";
            std::cout << light_heals << " light heals." << std::endl;
            x.set_light_heal_amount(light_heals);
            }
            if(medium_heals > 0){
            std::cout << "You've purchased ";
            std:: cout << medium_heals << " medium heals." << std::endl;
            x.set_medium_heal_amount(medium_heals);
            }
            if(max_heals > 0){
              std::cout << "You've purchased ";
            std::cout << max_heals << " max heals.";
            x.set_max_heal_amount(max_heals);
            }
            if(strength_pills > 0){
            std::cout << "You've purchased ";
            std::cout << strength_pills << " strength pill." << std::endl;
            x.set_strength_enhancementPills_amount(strength_pills);
            }
            if(top_ramen > 0){
            std::cout << "You've purchased ";
            std::cout << top_ramen << " top ramen"<< std::endl;
            x.set_top_ramen(top_ramen);
            }
            if(adderall > 0){
            std::cout << "You've purchased ";
            std::cout << adderall << " adderall"<< std::endl;
            x.set_adderall_amount(adderall);
            }
            if(liquid_vials > 0){
            std::cout << "You've purchased ";
            std::cout << liquid_vials << " liquid vials" << std::endl;
            x. set_liquid_luck(liquid_vials);
            }
          }     
        std::cout << "Thank you for shopping with us! We wish you the best!" << std::endl;         }
  }



      void sell_item(Player& n, ItemBag& x){
        char input;
        int light_heals = 0;
        int medium_heals = 0;
        int max_heals = 0;
        int strength_pills = 0;
        int top_ramen = 0;
        int adderall = 0;
        int liquid_vials = 0;
        sell = 0;
        std::cout << "L - light heal ($1)" << std::endl;
        std::cout << "m - medium heal ($3)" << std::endl;
        std::cout << "M - max heal ($5)" << std::endl;
        std::cout << "S - strength enhancement pills ($5)" << std::endl;
        std::cout << "T - top ramen ($1)" << std::endl;
        std::cout << "A - adderall count ($1)" << std::endl;
        std::cout << "V - liquid luck vials ($3)" << std::endl;
        std:: cout << std::endl;
        std::cout << "When you are finished choosing items please press q to checkout." << std:: endl;
        std::cout << "Which items would you like to sell?: ";
        cin >> input;

        while(input != 'q'){
          if(input == 'L'){
            sell += 1;
            light_heals++;
            std::cout << "Please select another item, or enter q to checkout: ";
          }
          else if(input == 'm'){
            sell += 3;
            medium_heals++;
            std::cout << "Please select another item, or enter q to checkout: ";
          }
          else if(input == 'M'){
            sell += 5;
            max_heals++;
            std::cout << "Please select another item, or enter q to checkout: ";
          }
          else if(input == 'S'){
            sell += 5;
            strength_pills++;
            std::cout << "Please select another item, or enter q to checkout: ";
          }
          else if(input == 'T'){
            sell += 1;
            top_ramen++;
            std::cout << "Please select another item, or enter q to checkout: ";
          }
          else if(input == 'A'){
            sell += 1;
            adderall++;
            std::cout << "Please select another item, or enter q to checkout: ";
          }
          else if(input == 'V'){
            sell += 3;
            liquid_vials++;
            std::cout << "Please select another item, or enter q to checkout: ";
            }
          else{
            std::cout << "Invalid item please enter a valid item, or enter q to checkout." << std::endl;
            cin >> input;
          }
          cin >> input;
        }
        std::cout << "Your total to sell comes out to be $" << sell << "." << std::endl;
        std::cout << "Would you like to sell these items? Enter Y to sell these items, or N to discard and leave Office Hours! ";
        cin >> input;
        if(input == 'Y'){
          int userMoney = n.get_money();
            if(x.get_light_heal_amount() < light_heals || x.get_meduim_heal_amount() < medium_heals || x.get_max_heal_amount() < max_heals || x.get_strength_enhancementPills_amount() < strength_pills || x.get_adderall_count_amount() < adderall || x.get_liquid_luck_vials() < liquid_vials){
            std::cout << "You are asking to sell more than you own. Office Hours has now closed!" << std::endl;
          }
          else{
          userMoney = userMoney - sell;
          n.set_money(userMoney);
          std::cout << "You now have $" << n.get_money() << " in your wallet." << std::endl;

          if(light_heals > 0){
            std::cout << "You've sold ";
            std::cout << light_heals << " light heals." << std::endl;
            int count = x.get_light_heal_amount();
            int neg = 0 - light_heals;
            count = count - light_heals;
            std::cout << "You know have " << count << " light heals in your item bag." << std::endl;
            x.set_light_heal_amount(neg);
            }
            if(medium_heals > 0){
            std::cout << "You've sold ";
            std:: cout << medium_heals << " medium heals." << std::endl;
            int count = x.get_meduim_heal_amount();
            int neg = 0 - medium_heals;
            count = count - medium_heals;
            std::cout << "You know have " << count << " medium heals in your item bag." << std::endl;
            x.set_medium_heal_amount(neg);
            }
            if(max_heals > 0){
            std::cout << "You've sold ";
            std::cout << max_heals << " max heals." << std::endl;
            int count = x.get_max_heal_amount();
            int neg = 0 - max_heals;
            count = count - max_heals;
            std::cout << "You know have " << count << " max heals in your item bag." << std::endl;
            x.set_max_heal_amount(neg);
            }
            if(strength_pills > 0){
            std::cout << "You've sold ";
            std::cout << strength_pills << " strength pill." << std::endl;
            int count = x.get_strength_enhancementPills_amount();
            int neg = 0 - strength_pills;
            count = count - strength_pills;
            std::cout << "You know have " << count << " strength enhancement pills in your item bag." << std::endl;
            x.set_strength_enhancementPills_amount(neg);
            }
            if(top_ramen > 0){
            std::cout << "You've sold ";
            std::cout << top_ramen << " top ramen"<< std::endl;
            int count = x.get_top_ramen_meals_amount();
            int neg = 0 - top_ramen;
            count = count - top_ramen;
            std::cout << "You know have " << count << " top ramen meals in your item bag." << std::endl;
            x.set_top_ramen(neg);
            }
            if(adderall > 0){
            std::cout << "You've sold ";
            std::cout << adderall << " adderall"<< std::endl;
            int count = x.get_adderall_count_amount();
            int neg = 0 - adderall;
            count = count - adderall;
            std::cout << "You know have " << count << " adderall in your item bag." << std::endl;
            x.set_adderall_amount(neg);
            }
            if(liquid_vials > 0){
            std::cout << "You've sold ";
            std::cout << liquid_vials << " liquid vials" << std::endl;
             int count = x.get_liquid_luck_vials();
            int neg = 0 - liquid_vials;
            count = count - liquid_vials;
            std::cout << "You know have " << count << " liquid vials in your item bag." << std::endl; 
            x. set_liquid_luck(neg);
            }
        }
        std::cout << "Thank you for shopping with us! We wish you the best!" << std::endl;
      }
    }
};
#endif