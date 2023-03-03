#include <iostream>
#include <cmath>
#include <string>
#include <stdlib.h>
#include <memory>
#include <utility>

#ifndef ENEMY_H
#define ENEMY_H
class Enemy {
protected:
    int mCriticalHit = 0;
    int mDamage = 0;
    int mHealth = 0;
    int mDodgeCounter = 0;
    std::string mCategoryType = "Empty";
public:
    virtual void modify() = 0;

    int getCriticalHit() {
        return this->mCriticalHit;
    }

    int getDamage() {
        return this->mDamage;
    }

    int getHealth() {
        return this->mHealth;
    }

    int getDodgeCounter() {
        return this->mDodgeCounter;
    }
    std::string getCategoryType() {
        return this->mCategoryType;
    }

    void setCriticalHit(int const& CriticalHit) {
        this->mCriticalHit = CriticalHit;
    }

    void setDamage(int const& Damage) {
        this->mDamage = Damage;
    }

    void setHealth(int const& Health) {
        this->mHealth = Health;
    }

    void setDodgeCounter(int const& Dodge) {
        this->mDodgeCounter = Dodge; 
    }
    void setCategoryType(std::string const& type) {
        this->mCategoryType.assign(type);
    }
    void resetStats() {
        this->mCriticalHit = 0;
        this->mDamage = 0;
        this->mDodgeCounter = 0;
        this->mHealth = 0;
    }

};
#endif