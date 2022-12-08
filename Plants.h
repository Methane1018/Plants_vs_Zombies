#ifndef _PLANTS_H
#define _PLANTS_H

#include <SDL.h>

class plants {
    protected:
        int HP;
        int ATK;
        int A_SPD;
        int price;
    public:
        void HPdamaged (int damage) {HP -= damage;}
        virtual void movingAnimation() = 0;
        virtual void attackAnimation() = 0;
        virtual void damagedAnimation() = 0;
        virtual void deathAnimation() = 0;
        //(sound)
};

#endif // _PLANTS_H
