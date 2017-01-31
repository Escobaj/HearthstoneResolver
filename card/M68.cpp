//
// Created by Jo on 19/12/2016.
//

#include "M68.h"

M68::M68(const EventHandler &e) : Minion(e) {
    this->set_id(68);
    this->set_attackMax(5);
    this->set_defaultCost(5);
    this->set_name("Tigre de Strangleronce");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::BEAST);
    this->set_attackMax(5);
    this->set_maxHealth(5);
}

void M68::init() {
}