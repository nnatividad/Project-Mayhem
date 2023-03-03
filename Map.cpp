#include "Map.h"
#include <iostream>
using namespace std;

std::string Map::get_location(Building x){
  std::string location;
  if(x.get_ID() == 1){
    location = "Office Hours(shop)";
  }
  if(x.get_ID() == 2){
    location = "Department Head";
  }
  if(x.get_ID() == 3){
    location = "SRC Arena";
  }
  if(x.get_ID() == 4){
    location = "Professor's Office";
  }
 return location;
}

void Map::travel_to(Building &x){ //still working on it 
 int n;
 int flag = 0;
 cout << "Which part of campus would you like to travel to?" << endl;
 cout << "1 - Office Hours(shop)" << endl;
 cout << "2 - Department Head" << endl;
 cout << "3 - SRC Arena" << endl;
 cout << "4 - Professor's Office" << endl;
 cout << "5 - Exit Travel" << endl;
 cout << "Enter: ";
 cin >> n;

while(flag != 1){
  if(n == 1){
    cout << "Traveling to Office Hours!" << endl;
    x.set_id(1);
    flag++;
  }
  else if(n == 2){
    cout << "Traveling to the Department Head!" << endl;
    x.set_id(2);
    flag++;
  }
  else if(n == 3){
    cout << "Traveling to the SRC Arena!" << endl;
    x.set_id(3);
    flag++;
  }
  else if(n == 4){
    cout << "Traveling to the Professor's Office!" << endl;
    x.set_id(4);
    flag++;
   }
  else if(n == 5){
    cout << "Exiting the map. " << endl;
    x.set_id(0);
    flag++;
  }
  else{
    cout << "Invalid Location. Please try again. If you would not like to travel, please select  5." << endl;
    cin >> n;
    }
  }
    cout << endl;

  int buildingID;
  buildingID = x.get_ID();
  if(buildingID == 4){
    x.welcomeMessage(buildingID);
  }
  if(buildingID == 3){
    x.welcomeMessage(buildingID);
  }
  if(buildingID == 2){
    x.welcomeMessage(buildingID);
  }
  if(buildingID == 1){
    x.welcomeMessage(buildingID);
  }
}

void Map::move_on(int &buildingID){
  buildingID++;
}

void Map::move_back(int &buildingID){
  buildingID--;
}