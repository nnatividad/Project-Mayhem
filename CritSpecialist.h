#include"Enemy.h"

#ifndef CRITSPECIALIST_H
#define CRITSPECIALIST_H

class CritSpecialist : public Enemy {
private:
    std::shared_ptr<Enemy> enemyObject;
    int IQMult = 2;
    std::string type = "BCOE";
public:
    CritSpecialist(std::shared_ptr<Enemy> enemyType) : Enemy() {
        enemyObject = enemyType;
    }
    virtual void modify() {
        enemyObject->setCriticalHit(enemyObject->getCriticalHit() * IQMult);
        enemyObject->setCategoryType(type);
    }
};
#endif