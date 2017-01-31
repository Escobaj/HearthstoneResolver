//
// Created by Jo on 19/12/2016.
//

#include "M40544.h"

M40544::M40544(const EventHandler &e) : Minion(e) {
    this->set_id(40544);
    this->set_attackMax(0);
    this->set_defaultCost(4);
    this->set_name("Soigneuse de raid");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(0);
    this->set_maxHealth(7);
}

void M40544::init() {
}