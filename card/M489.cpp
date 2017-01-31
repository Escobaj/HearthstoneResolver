//
// Created by Jo on 19/12/2016.
//

#include "M489.h"

M489::M489(const EventHandler &e) : Minion(e) {
    this->set_id(489);
    this->set_attackMax(7);
    this->set_defaultCost(4);
    this->set_name("Drake émeraude");
    this->set_membership(Class::DREAM);
    this->set_type(CardType::DRAGON);
    this->set_attackMax(7);
    this->set_maxHealth(6);
}

void M489::init() {
}