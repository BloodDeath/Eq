//
// Created by franc on 30.03.2017.
//

#include "sword.h"
sword::sword()
{
    level=(int) rng::getRng(50,5);
    if(level <=46) level = 60;
}
int sword::getLevel()
{
    return level;
}
void sword::set_item_name(std::string name) {
    sword_name=name;
}
std::string sword::get_item_name()
{
    return sword_name;
}