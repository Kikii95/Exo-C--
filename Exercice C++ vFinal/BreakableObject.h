
#include "Entity.h"
#include "Alive.h"
#include <iostream>

class BreakableObject : public Entity, public Alive {
public:
    BreakableObject(float x, float y, float maxLife) : Entity(x, y), Alive(maxLife) {
        std::cout << "Breakable Object just created at x = " << x << " and y = " << y << " with " << maxLife << " life" << std::endl;
    }
    void takeDamage(float dmg) override {
        Alive::takeDamage(dmg);
        std::cout << "Breakable Object just broke" << std::endl;
    }
};
