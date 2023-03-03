#include"Enemy.h"

#ifndef DODGESPECIALIST_H
#define DODGESPECIALIST_H
class DodgeSpecialist : public Enemy {
private:
    std::shared_ptr<Enemy> enemyObject;
    int dodgeMult = 2;
    std::string type = "BUSINESS";
public:
    DodgeSpecialist(std::shared_ptr<Enemy> enemyType) : Enemy() {
        enemyObject = enemyType;
    }
    virtual void modify() {
        enemyObject->setDodgeCounter(enemyObject->getDodgeCounter() * dodgeMult);
        enemyObject->setCategoryType(type);
    }
};
#endif