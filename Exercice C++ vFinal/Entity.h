
#include "Vector2.h"

class Entity {
protected:
    Vector2 position;
public:
    Entity(float x, float y) {
        position.setPosition(x, y);
    }
    virtual Vector2 getPosition() { return position; }
    virtual void setPosition(float x, float y) { position.setPosition(x, y); }
};
