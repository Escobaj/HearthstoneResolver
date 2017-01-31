//
// Created by Jo on 19/12/2016.
//

#include "M40695.h"

M40695::M40695(const EventHandler &e) : Minion(e) {
    this->set_id(40695);
    this->set_attackMax(4);
    this->set_defaultCost(4);
    this->set_name("Sensei de l’ombre");
    this->set_membership(Class::ROGUE);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(4);
    this->set_maxHealth(4);
}

void M40695::init() {
}