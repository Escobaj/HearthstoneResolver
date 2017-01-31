//
// Created by Jo on 19/12/2016.
//

#include "M13879.h"

M13879::M13879(const EventHandler &e) : Minion(e) {
    this->set_id(13879);
    this->set_attackMax(1);
    this->set_defaultCost(0);
    this->set_name("Murloc mini-aileron");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::MURLOC);
    this->set_attackMax(1);
    this->set_maxHealth(1);
}

void M13879::init() {
}