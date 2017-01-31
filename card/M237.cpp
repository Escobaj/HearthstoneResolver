//
// Created by Jo on 19/12/2016.
//

#include "M237.h"

M237::M237(const EventHandler &e) : Minion(e) {
    this->set_id(237);
    this->set_attackMax(3);
    this->set_defaultCost(4);
    this->set_name("Prêtresse auchenaï");
    this->set_membership(Class::PRIEST);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(3);
    this->set_maxHealth(5);
}

void M237::init() {
}