//
// Created by Jo on 19/12/2016.
//

#include "M272.h"

M272::M272(const EventHandler &e) : Minion(e) {
    this->set_id(272);
    this->set_attackMax(4);
    this->set_defaultCost(6);
    this->set_name("Prêtresse de la Cabale");
    this->set_membership(Class::PRIEST);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(4);
    this->set_maxHealth(5);
}

void M272::init() {
}