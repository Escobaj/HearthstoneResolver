//
// Created by Jo on 19/12/2016.
//

#include "M537.h"

M537::M537(const EventHandler &e) : Minion(e) {
    this->set_id(537);
    this->set_attackMax(1);
    this->set_defaultCost(1);
    this->set_name("Totem incendiaire");
    this->set_membership(Class::SHAMAN);
    this->set_type(CardType::TOTEM);
    this->set_attackMax(1);
    this->set_maxHealth(1);
}

void M537::init() {
}