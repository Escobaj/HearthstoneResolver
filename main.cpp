#include <iostream>
#include <cstdlib>
#include <functional>
#include <vector>
//#include "Emulator/Core/Event/EventHandler.h"
//#include "Emulator/test/Weapon1.h"

class A{
private:
    int _a;
public:
    A(int a) {
        _a = a;
    }

    int square(){
        return _a * _a;
    }

    int multiply(int x){
        return _a * x;
    }
};

int main() {
//    EventHandler e;
//    Weapon1      weapon1(e);
//    Weapon1      weapon2(e);
//    Weapon1      weapon3(e);
//    Weapon1      weapon4(e);
//
//    std::vector<ACard *> v;
//
//    v.push_back(&weapon1);
//    v.push_back(&weapon2);
//    v.push_back(&weapon3);
//    v.push_back(&weapon4);
//
//    std::cout << std::addressof(v[0]) << std::endl;
//    Weapon       *tmp = dynamic_cast<Weapon *>(v[0]);
//    Weapon       *tmp2 = dynamic_cast<Weapon *>(v[0]);
//    Weapon       *tmp3 = dynamic_cast<Weapon *>(v[0]);
//
//    if (tmp != NULL) {
//        tmp->set_defaultCost(5);
//        std::cout << "1 : " << std::addressof(tmp) << std::endl;
//        std::cout << "2 : " << std::addressof(tmp2) << std::endl;
//        std::cout << "3 : " << std::addressof(tmp3) << std::endl;
//
//        tmp->set_attackMax(555);
//        std::cout << "1 attack : " << tmp->get_attackMax() << std::endl;
//        std::cout << "2 attack: " << tmp2->get_attackMax() << std::endl;
//        std::cout << "3 attack: " << tmp3->get_attackMax() << std::endl;
//    }

    std::vector<std::function<int(void)>> b;

    A a(5);
    A c(23);

    b.push_back(std::bind(&A::multiply, a, 6));
    b.push_back(std::bind(&A::multiply, c, 7));
    b.push_back(std::bind(&A::square, a));
    b.push_back(std::bind(&A::square, c));

    for (auto &e : b) {
        std::cout << e() << std::endl;
    }

    return 0;
}