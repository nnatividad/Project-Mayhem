#ifndef _DEPARTMENT_HEAD_HPP_
#define _DEPARTMENT_HEAD_HPP_

#include <iostream>
#include "Building.h"
#include "Enemy.h"
#include "GruntEnemy.h"
#include "BossEnemy.h"
#include"HealthSpecialist.h"
#include"CritSpecialist.h"
#include"DamageSpecialist.h"
#include"DodgeSpecialist.h"


class DepartmentHead: public Building{
  public:
    std::string winningMessage(Category c){
      string s1 = "You did it! I guess it's official. ";
      string s2 = c.get_category_type();
      s1 += s2;
      s1 += " is the best department. \n\n";
      return s1;
    }

    void fight(int n, ItemBag& i, Category type, BattleSystem player){
      std::cout << "*BOSS BATTLE*   Ready? Set. Fight!" << std::endl << std::endl << std::endl;

      Player user;
      std::shared_ptr<Enemy> boss(new Boss(1));

      
      if(n == 1){
        int flag = 0;
        int choice;
        std::cout << "You will be battling the Department Head of CHASS!" << std::endl;

        boss->setCriticalHit(3);
        boss->setHealth(50);
        boss->setDamage(5);
        boss->setDodgeCounter(3);
  
        do{
          if(player.health(type) <= 0) {
            cout << "Oh no you faited! \nGet up and try again!" << endl << endl;
          }
  
          while(flag == 0){
            cout << endl;
            cout << "Boss action: ";
            player.EnemyTurn(boss, type);
            flag = 1;
            }
           while(flag == 1){
            cout << "Action (enter # between 1-5): \n1. Lightattack \n2. Mediumattack \n3. Powerfulattack \n4. dodge \n5. Item Bag \n \nPlayer action: ";
            cin >> choice;
    
            if(choice > 0 && choice <= 4){
              player.PlayerTurn(choice, type, boss);
              flag = 0;
            }
            else if(choice == 5){
              i.getItems(type);
            }
            else{
              cout << "You wasted a turn!" << endl;
              flag = 0;
            }
          }
        }while(player.health_enemy(boss) > 0);
        type.setCategoryPoints();
      }
      if(n == 2){
        int flag;
        int choice;
        std::cout << "You will be battling the Department Head of BCOE!" << std::endl;

        boss->setCriticalHit(5);
        boss->setHealth(50);
        boss->setDamage(3);
        boss->setDodgeCounter(3);
  
        do{
          if(player.health(type) <= 0) {
            cout << "Oh no you fainted! \nGet up and try again!" << endl << endl;
          }
  
          while(flag == 0){
            cout << endl;
            cout << "Boss action: ";
            player.EnemyTurn(boss, type);
            flag = 1;
            }
           while(flag == 1){
            cout << "Action (enter # between 1-5): \n1. Lightattack \n2. Mediumattack \n3. Powerfulattack \n4. dodge \n5. Item Bag \n \nPlayer action: ";
            cin >> choice;
    
            if(choice > 0 && choice <= 4){
              player.PlayerTurn(choice, type, boss);
              flag = 0;
            }
            else if(choice == 5){
              i.getItems(type);
            }
            else{
              cout << "You wasted a turn!" << endl;
              flag = 0;
            }
          }
        }while(player.health_enemy(boss) > 0);
        type.setCategoryPoints();
      }
      if(n == 3){
        int flag;
        int choice;
        std::cout << "You will be battling the Department Head of CNAS!" << std::endl;

        boss->setCriticalHit(3);
        boss->setHealth(75);
        boss->setDamage(3);
        boss->setDodgeCounter(3);
  
        do{
          if(player.health(type) <= 0) {
            cout << "Oh no you fainted! \nGet up and try again!" << endl << endl;
          }
  
          while(flag == 0){
            cout << endl;
            cout << "Boss action: ";
            player.EnemyTurn(boss, type);
            flag = 1;
            }
           while(flag == 1){
            cout << "Action (enter # between 1-5): \n1. Lightattack \n2. Mediumattack \n3. Powerfulattack \n4. dodge \n5. Item Bag \n \nPlayer action: ";
            cin >> choice;
    
            if(choice > 0 && choice <= 4){
              player.PlayerTurn(choice, type, boss);
              flag = 0;
            }
            else if(choice == 5){
              i.getItems(type);
            }
            else{
              cout << "You wasted a turn!" << endl;
              flag = 0;
            }
          }
        }while(player.health_enemy(boss) > 0);
        type.setCategoryPoints();
      }
      if(n == 4){
        int flag;
        int choice;
        std::cout << "You will be battling the Department Head of Business!" << std::endl;

        boss->setCriticalHit(3);
        boss->setHealth(50);
        boss->setDamage(3);
        boss->setDodgeCounter(5);
  
        do{
          if(player.health(type) <= 0) {
            cout << "Oh no you fainted! \nGet up and try again!" << endl << endl;
          }
  
          while(flag == 0){
            cout << endl;
            cout << "Boss action: ";
            player.EnemyTurn(boss, type);
            flag = 1;
            }
           while(flag == 1){
            cout << "Action (enter # between 1-5): \n1. Lightattack \n2. Mediumattack \n3. Powerfulattack \n4. dodge \n5. Item Bag \n \nPlayer action: ";
            cin >> choice;
    
            if(choice > 0 && choice <= 4){
              player.PlayerTurn(choice, type, boss);
              flag = 0;
            }
            else if(choice == 5){
              i.getItems(type);
            }
            else{
              cout << "You wasted a turn!" << endl;
              flag = 0;
            }
          }
        }while(player.health_enemy(boss) > 0);
        type.setCategoryPoints();
      }
    }
};
#endif