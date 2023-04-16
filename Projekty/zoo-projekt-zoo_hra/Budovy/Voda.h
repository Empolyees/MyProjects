//
// Created by Marti on 23.01.2022.
//

#ifndef ZOO_HRA_VODA_H
#define ZOO_HRA_VODA_H

#include "Budova.h"

class Voda:public Budova {
public:
    Voda();
    void vykresli();

    void zjistiPotrebneSuroviny() override;
};


#endif //ZOO_HRA_VODA_H
