//
// Created by franc on 07.04.2017.
//
#include "rng.h"
#include <string>
#ifndef EQ_ITEM_H
#define EQ_ITEM_H


class Item {
    std::string item_name;
public:
    virtual void set_item_name(std::string name)=0;
    virtual std::string get_item_name()=0;

};


#endif //EQ_ITEM_H
