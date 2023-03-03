#include"Enemy.h"

#ifndef HEALTHSPECIALIST_H
#define HEALTHSPECIALIST_H

class HealthSpecialist : public Enemy {
private:
    std::shared_ptr<Enemy> enemyObject;
    int healthMult = 2;
    std::string type = "CNAS";
public:
    HealthSpecialist(std::shared_ptr<Enemy> enemyType) : Enemy() {
        enemyObject = enemyType;
    }
    virtual void modify() {
        enemyObject->setHealth(enemyObject->getHealth() * healthMult);
        enemyObject->setCategoryType(type);
    }
};
#endif