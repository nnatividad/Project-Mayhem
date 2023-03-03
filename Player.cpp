#include <iostream>
#include "Player.h"
#include <string>
using namespace std;

Player:: Player() {
  Player_name = "";
  int money = 10;
}

void Player::set_name(string n){
  this->Player_name = n;
}

string Player::get_name(){
  return Player_name;
}

void Player::set_money(int n){
  this->money = n;
}

int Player::get_money(){
  return this->money;
}



void Player::Open_map(Map& x, Building& y){
  std::cout << "You have opened up the map! You can travel to different locations across campus!" << std::endl;
  std::cout << endl;
  char input;
  std::cout << "Press Y to travel to a new location, or any other button to continue with the story: " << std::endl;
  std::cin >> input;
  if(input == 'Y' || input == 'y'){
    x.travel_to(y);  
  }
  else{
    
  }
}


void Player::Open_menu(){
  string input = "";
  
  cout << "Menu:" << endl;
  cout << "Type 's' to save or 'h' to get help: ";

  cin >> input;
  
  while(input != "s" && input != "h"){
    cout << "Invalid Input. Try again:" << endl;
    cin >> input;
  }
  
  cout << endl << endl;
  
  if(input == "s"){
    save();
  }
  else{
    User_guide();
  }
  cout << endl << endl; 
}

void Player::User_guide(){
  cout << endl;
  cout <<  "Battle System Controls" << endl;
  cout <<  "1 - light attack" << endl;
  cout <<  "2 - medium attack" << endl;
  cout <<  "3 - powerful attack" << endl;

  cout << endl;
  cout << "Item Bag Controls" << endl;
  cout << "a - access item bag" << endl;
  cout << "1 - use light potion" << endl;
  cout << "2 - use medium potion" << endl;
  cout << "3 - use max potion" << endl;
  cout << "4 - use adderall" << endl;
  cout << "5 - use strength enhancemant pills" << endl;
  cout << "6 - use top ramen" << endl;
  cout << "7 - use liquid luck" << endl;

  cout << endl;
  cout << "Locations on campus: " << endl;
  cout << "1 - Office Hours (shop) - Player can buy or sell items." << endl;
  cout << "2 - Department Head - Fight Department Leaders" << endl;
  cout << "3 - SRC Arena - Travel to the SRC Arena to gain money and level up!" << endl;
  cout << "4 - Professor's Office - The Final Boss! " << endl;
  }

void Player::addMoney(int n){
  money += n;
}

void Player::save(){
  cout << "Progress saved." << endl;
}