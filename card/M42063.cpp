//
// Created by Jo on 19/12/2016.
//

#include "M42063.h"

M42063::M42063(const EventHandler &e) : Minion(e) {
    this->set_id(42063);
    this->set_attackMax(5);
    this->set_defaultCost(5);
    this->set_name("Démon de la Kabale");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::DEMON);
    this->set_attackMax(5);
    this->set_maxHealth(5);
}

void M42063::init() {
}