//
// Created by escoba_j on 29/11/2016.
//

#ifndef HEARTHSTONERESOLVER_ATARGETABLE_H
#define HEARTHSTONERESOLVER_ATARGETABLE_H

class ATargetable{
public:
    int _currentHealth;
    int _defaultHealth;
    int _maxHealth;

    int get_currentHealth() const;

    void set_currentHealth(int _currentHealth);

    int get_defaultHealth() const;

    void set_defaultHealth(int _defaultHealth);

    int get_maxHealth() const;

    void set_maxHealth(int _maxHealth);
};


#endif //HEARTHSTONERESOLVER_ATARGETABLE_H
