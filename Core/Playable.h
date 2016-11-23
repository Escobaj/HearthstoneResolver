//
// Created by escoba_j on 22/11/2016.
//

#ifndef HEARTHSTONERESOLVER_PLAYABLE_H
#define HEARTHSTONERESOLVER_PLAYABLE_H

class Playable {
public:
    Playable(unsigned int _health);

public:
    unsigned int GetHealth();
    void SetHealth(unsigned int health);
    void Heal(unsigned int heal);
    void TakeDamage(unsigned int damage);
private:
    unsigned int _health;
};


#endif //HEARTHSTONERESOLVER_PLAYABLE_H
