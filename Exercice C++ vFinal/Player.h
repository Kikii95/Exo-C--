
#include "Entity.h"
#include "Alive.h"
#include "AMovable.h"
#include "IAttacker.h"
#include <iostream>

class Player : public Entity, public Alive, public AMovable, public IAttacker {
public:
    Player(float x, float y, float maxLife, float dirX, float dirY, float spd)
        : Entity(x, y), Alive(maxLife), AMovable(dirX, dirY, spd) {
        std::cout << "Player just created at x = " << x << " and y = " << y
                  << " with " << maxLife << " life with direction x = " << dirX << " and y = " << dirY << std::endl;
    }
    void takeDamage(float dmg) override {
        Alive::takeDamage(dmg);
        std::cout << "Player just died" << std::endl;
    }
    void move() override {
        std::cout << "Player moved to x = " << position.getX() + direction.getX() * speed
                  << " and y = " << position.getY() + direction.getY() * speed << std::endl;
    }
    void attack(Alive* target) override {
        target->takeDamage(10);
        std::cout << "Player just attacked" << std::endl;
    }
};
