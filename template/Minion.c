//
// Created by Jo on 19/12/2016.
//

#include "{$id}.h"

{$id}::{$id}(const EventHandler &e) : Minion(e) {
    this->set_id({$Mid});
    this->set_attackMax({$attack});
    this->set_defaultCost({$cost});
    this->set_name("{$name}");
    this->set_membership(Class::{$class});
    this->set_type(CardType::{$type});
    this->set_attackMax({$attack});
    this->set_maxHealth({$health});
}

void {$id}::init() {
}