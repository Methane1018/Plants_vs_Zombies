#ifndef _PEA_H
#define _PEA_H

#include <SDL.h>
#include "Plants.h"

class Pea :public Plants {
    protected:
        int HP = 100;
        int ATK = 10;
        int A_SPD = 10;
        int price = 100;
    public:
        void movingAnimation();
        void attackAnimation();
        void damagedAnimation();
        void deathAnimation();
        //(sound)
};

#endif // _PEA_H
