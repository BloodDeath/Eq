//
// Created by franc on 06.04.2017.
//

#include "weapon.h"

weapon::weapon()
{

}

int weapon::getLevel() const {
    return level;
}

void weapon::setLevel(int level) {
    weapon::level = level;
}

int weapon::getPrimary_stat() const {
    return primary_stat;
}

void weapon::setPrimary_stat(int primary_stat) {
    weapon::primary_stat = primary_stat;
}

int weapon::getLife() const {
    return life;
}

void weapon::setLife(int life) {
    weapon::life = life;
}

int weapon::getCs_percent() const {
    return cs_percent;
}

void weapon::setCs_percent(int cs_percent) {
    weapon::cs_percent = cs_percent;
}

int weapon::getCs_dmg() const {
    return cs_dmg;
}

void weapon::setCs_dmg(int cs_dmg) {
    weapon::cs_dmg = cs_dmg;
}