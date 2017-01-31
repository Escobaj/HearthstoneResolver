//
// Created by Jo on 19/12/2016.
//

#include "M1019.h"

M1019::M1019(const EventHandler &e) : Minion(e) {
    this->set_id(1019);
    this->set_attackMax(6);
    this->set_defaultCost(6);
    this->set_name("Infernal de l’effroi");
    this->set_membership(Class::WARLOCK);
    this->set_type(CardType::DEMON);
    this->set_attackMax(6);
    this->set_maxHealth(6);
}

void M1019::init() {
}