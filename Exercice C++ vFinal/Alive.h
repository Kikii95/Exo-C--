
class Alive {
protected:
    float maxLife, currentLife;
public:
    Alive(float maxL) : maxLife(maxL), currentLife(maxL) {}
    virtual float getMaxLife() { return maxLife; }
    virtual float getCurrentLife() { return currentLife; }
    virtual void takeDamage(float dmg) { currentLife -= dmg; }
};
