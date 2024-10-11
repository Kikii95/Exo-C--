
#include "StaticObject.h"
#include "BreakableObject.h"
#include "Mob.h"
#include "Player.h"
#include "World.h"

int main() {
    StaticObject obj1(1, 1);
    BreakableObject obj2(2, 2, 10);
    Mob mob1(3, 3, 20, 1, 0, 0.5);
    Player player1(4, 4, 10, 0, 1, 0.7);

    World world;
    world.Init();
    world.Step();

    return 0;
}
