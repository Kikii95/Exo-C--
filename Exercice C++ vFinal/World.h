
#include "StaticObject.h"
#include "BreakableObject.h"
#include "Mob.h"
#include "Player.h"
#include <vector>

class World {
private:
    std::vector<Entity*> entities;
public:
    void Init() {
        StaticObject* obj1 = new StaticObject(1, 1); 
        BreakableObject* obj2 = new BreakableObject(2, 2, 1); 
        Mob* mob1 = new Mob(3, 3, 20, 1, 0, 0.5); 
        Player* player1 = new Player(4, 4, 10, 0, 1, 0.7); 

        entities.push_back(obj1); 
        entities.push_back(obj2); 
        entities.push_back(mob1); 
        entities.push_back(player1); 
    }

    void Step() {
        for (auto entity : entities) {
            if (dynamic_cast<Mob*>(entity)) {
                static_cast<Mob*>(entity)->move(); 
            } else if (dynamic_cast<Player*>(entity)) {
                static_cast<Player*>(entity)->attack(nullptr); // erreur: null au lieu du pointeur correct
            }
        }
    }
};
