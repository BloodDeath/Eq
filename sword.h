//
// Created by franc on 30.03.2017.
//

#ifndef EQ_SWORD_H
#define EQ_SWORD_H

#include "weapon.h"

class sword : public weapon{
    int level;
    std::string sword_name;
public:
    sword();
    int getLevel();
    void set_item_name(std::string name);
    std::string get_item_name();

};


#endif //EQ_SWORD_H
