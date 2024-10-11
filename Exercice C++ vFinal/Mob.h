
#include "Entity.h"
#include "Alive.h"
#include "AMovable.h"
#include <iostream>

class Mob : public Entity, public Alive, public AMovable {
public:
    Mob(float x, float y, float maxLife, float dirX, float dirY, float spd)
        : Entity(x, y), Alive(maxLife), AMovable(dirX, dirY, spd) {
        std::cout << "Mob just created at x = " << x << " and y = " << y << " with " << maxLife
                  << " life with direction x = " << dirX << " and y = " << dirY << std::endl;
    }
    void takeDamage(float dmg) override {
        Alive::takeDamage(dmg);
        std::cout << "Mob just die" << std::endl;
    }
    void move() override {
        std::cout << "Mob move to x = " << position.getX() + direction.getX() * speed
                  << " and y = " << position.getY() + direction.getY() * speed << std::endl;
    }
};
