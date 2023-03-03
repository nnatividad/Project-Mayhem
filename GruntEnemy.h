#include"Enemy.h"


#ifndef GRUNTENEMY_H
#define GRUNTENEMY_H

class Grunt : public Enemy {
private:
    int mult = 1;
public:
    Grunt(int value) : Enemy() { this->mult = value; }
    virtual void modify() {
        setDamage(mDamage * mult);
        setCriticalHit(mCriticalHit * mult);
        setDodgeCounter(mDodgeCounter * mult);
        setHealth(mHealth * mult);
        
    }

};
#endif