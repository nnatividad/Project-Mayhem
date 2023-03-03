#include <iostream>
#include "Enemy.h"
#include "ItemBag.h"
#include "Player.h"
#include "Category.h"

#include "Map.h"
#include "Building.h"
#include "Professor.hpp"
#include "DepartmentHead.hpp"
#include "SRCArena.hpp"
#include "OfficeHours.hpp"

#include "BattleSystem.h"
#include "Enemy.h"
#include "GruntEnemy.h"
#include "BossEnemy.h"

#include"HealthSpecialist.h"
#include"CritSpecialist.h"
#include"DamageSpecialist.h"
#include"DodgeSpecialist.h"

using namespace std;

int main() {
  Player user;
  Category type;
  BattleSystem player;
  ItemBag userBag;
  Map travel;
  Building location;
  std::shared_ptr<Enemy> grunt(new Grunt(1));
  std::shared_ptr<Enemy> BCOE_grunt(new CritSpecialist(grunt));
  
  string name = " ";
  string cat_choice;
  int flag = 0;
  int checkpoint1 = 0;
  int choice;
  user.set_money(200);


  cout << "*You are in orientation*" << endl;
  cout << "You have $" << user.get_money() << " in your pocket." << endl;
  do{
    cout << "Hello newcomer! I am Professor N, your guide at UCR. Tell me, what is your name? (First name OR First name and Last Name): ";
    getline(cin, name);
  }while(name == " ");

  user.set_name(name);
  cout << endl;

  cout << name << "! Nice to meet you!" << endl;
  cout << endl;


    cout << "Tell me, what college do you belong too?:\n1. BCOE \n2. CHASS \n3. CNAS \n4. BUSINESS \n(Type either 1-4)" << endl;
  cin >> cat_choice;
  cout << endl;
  while(cat_choice != "1" && cat_choice != "2" && cat_choice != "3" && cat_choice != "4"){
    cout << "Invalid Input! Type a number (1-4). ";
    cin >> cat_choice;
  }

  cout << endl << endl << "I see, so you're a "; 

  if(cat_choice == "1"){
    cout << "BCOE ";
    type.set_category_type("BCOE");
  }

  if(cat_choice == "2"){
    cout << "CHASS ";
    type.set_category_type("CHASS");
  }

  if(cat_choice == "3"){
    cout << "CNAS ";
    type.set_category_type("CNAS");
  }

  if(cat_choice == "4"){
    cout << "BUSINESS ";
    type.set_category_type("BUSINESS");
  }
  cout << "major!" << endl << endl;

  cout << "Come with me to my lab and I will brief you on what you need to accom- \n*an enemy BCOE grunt appeared*" << endl << endl;
  cout << name << " help!" << endl;
  cout << "This is your chance to prove yourself, prove to me you have what it takes to be the best " << type.get_category_type() << " student!" << endl << endl;


    grunt->setCriticalHit(1);
    grunt->setHealth(25);
    grunt->setDamage(3);
    grunt->setDodgeCounter(4);

  
do{
  if(player.health(type) <= 0) {
    cout << "Oh no you faited! \nGet up and try again!" << endl << endl;
  }
  
  while(flag == 0){
    cout << endl;
    cout << "Enemy action: ";
    player.EnemyTurn(grunt, type);
    flag = 1;
    }
   while(flag == 1){
    cout << "Action (enter # between 1-5): \n1. Lightattack \n2. Mediumattack \n3. Powerfulattack \n4. dodge \n5. Item Bag \n \nPlayer action: ";
    cin >> choice;
    
    if(choice > 0 && choice <= 4){
      player.PlayerTurn(choice, type, grunt);
      flag = 0;
    }
    else if(choice == 5){
      userBag.getItems(type);
    }
    else{
      cout << "You wasted a turn!" << endl;
      flag = 0;
    }
  }
}while(player.health_enemy(grunt) > 0);

  cout << "Professor: Good job " << name << "! \n I noticed your health is low. If you ever need performance enhancers I always have them in stock. Just don't tell campus security!" << endl;
  checkpoint1 = 1;
 
cout << endl << "Come visit me at office hours....\n(hint: open map with 'y')" << endl << endl;
  
  user.Open_map(travel, location);
  
  if(location.get_ID() == 4){
    Professor test3;
    cout << test3.winningGameMessage();
  }
  else if(location.get_ID() == 3){
    SRCArena testArena;
  }
  else if (location.get_ID()== 2){
    DepartmentHead testDepart;
  }
  else if(location.get_ID() == 1){
    OfficeHours testOffice;
    cout << "Press B to buy items or press S to sell your items for money: " << endl;
    char input;
    cin >> input;
    while(input != 'B' && input != 'S'){
      cout << "Invalid character, please enter B or S: ";
      cin >> input;
    }
    if(input == 'B'){
      testOffice.buy_item(user,userBag);
    }
    else{
      testOffice.sell_item(user,userBag);
    }
    cout << endl;
    }
  else{
    
  }
  
  cout << "What did you think? Our campus is vast and has a lot to offer. " << name << ".. I think it's time you to face off against a Department Head! \n \n";

  DepartmentHead Gym;
  Gym.fight(1, userBag, type, player);

  Professor neftali;
  cout << neftali.winningGameMessage();
}