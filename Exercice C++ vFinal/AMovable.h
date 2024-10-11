
#include "Vector2.h"

class AMovable {
protected:
    Vector2 direction;
    float speed;
public:
    AMovable(float dirX, float dirY, float spd) {
        direction.setPosition(dirX, dirY);
        speed = spd;
    }
    virtual void setDirection(float dirX, float dirY) { direction.setPosition(dirX, dirY); }
    virtual void setSpeed(float spd) { speed = spd; }
    virtual void move() = 0;
};
