//
// Created by Jo on 19/12/2016.
//

#include "M2773.h"

M2773::M2773(const EventHandler &e) : Minion(e) {
    this->set_id(2773);
    this->set_attackMax(6);
    this->set_defaultCost(3);
    this->set_name("Fils de la Flamme");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(6);
    this->set_maxHealth(3);
}

void M2773::init() {
}