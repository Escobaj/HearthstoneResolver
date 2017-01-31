//
// Created by Jo on 19/12/2016.
//

#include "M2767.h"

M2767::M2767(const EventHandler &e) : Minion(e) {
    this->set_id(2767);
    this->set_attackMax(3);
    this->set_defaultCost(2);
    this->set_name("Vaillant de Fossoyeuse");
    this->set_membership(Class::ROGUE);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(3);
    this->set_maxHealth(2);
}

void M2767::init() {
}