//
// Created by Marti on 31.12.2021.
//

#ifndef ZOO_HRA_HLAVNIBUDOVA_H
#define ZOO_HRA_HLAVNIBUDOVA_H

#include "Budova.h"
#include "../Enemy/Enemy.h"
#include "../Budovy/Zbrojnice.h"

class HlavniBudova:public Budova {
    int m_zivoty;
    Enemy* m_enemy;

public:
    HlavniBudova();
    void vykresli();
    void odeberZivoty(int den,Zbrojnice* zbrojnice,Enemy* enemy);
    int getZivoty();

    void zjistiPotrebneSuroviny() override;

};


#endif //ZOO_HRA_HLAVNIBUDOVA_H
