//
// Created by Jo on 19/12/2016.
//

#include "M40404.h"

M40404::M40404(const EventHandler &e) : Minion(e) {
    this->set_id(40404);
    this->set_attackMax(3);
    this->set_defaultCost(3);
    this->set_name("Rêveuse céleste");
    this->set_membership(Class::DRUID);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(3);
    this->set_maxHealth(3);
}

void M40404::init() {
}