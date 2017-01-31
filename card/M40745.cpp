//
// Created by Jo on 19/12/2016.
//

#include "M40745.h"

M40745::M40745(const EventHandler &e) : Minion(e) {
    this->set_id(40745);
    this->set_attackMax(5);
    this->set_defaultCost(6);
    this->set_name("Nettoyeur défias");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(5);
    this->set_maxHealth(7);
}

void M40745::init() {
}