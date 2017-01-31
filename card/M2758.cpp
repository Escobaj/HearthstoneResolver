//
// Created by Jo on 19/12/2016.
//

#include "M2758.h"

M2758::M2758(const EventHandler &e) : Minion(e) {
    this->set_id(2758);
    this->set_attackMax(2);
    this->set_defaultCost(2);
    this->set_name("Championne d’Alexstrasza");
    this->set_membership(Class::WARRIOR);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(2);
    this->set_maxHealth(3);
}

void M2758::init() {
}