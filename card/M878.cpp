//
// Created by Jo on 19/12/2016.
//

#include "M878.h"

M878::M878(const EventHandler &e) : Minion(e) {
    this->set_id(878);
    this->set_attackMax(3);
    this->set_defaultCost(4);
    this->set_name("Corsaire de l’effroi");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::PIRATE);
    this->set_attackMax(3);
    this->set_maxHealth(3);
}

void M878::init() {
}