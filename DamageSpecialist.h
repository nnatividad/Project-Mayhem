#include"Enemy.h"

#ifndef DAMAGESPECIALIST_H
#define DAMAGESPECIALIST_H

class DamageSpecialist : public Enemy {
private:
    std::shared_ptr<Enemy> enemyObject;
    int strengthMult = 2;
    std::string type = "CHASS";
public:
    DamageSpecialist(std::shared_ptr<Enemy> enemyType) : Enemy() {
        enemyObject = enemyType;
        }
    virtual void modify(){
        enemyObject->setDamage(enemyObject->getDamage() * strengthMult);
        enemyObject->setCategoryType(type);
    }
};
#endif