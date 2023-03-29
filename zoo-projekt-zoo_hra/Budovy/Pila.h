//
// Created by Marti on 31.12.2021.
//

#ifndef ZOO_HRA_PILA_H
#define ZOO_HRA_PILA_H

#include "Budova.h"

class Pila: public Budova{

    int m_drevo;
public:

    Pila();

    int getDrevo();

    void vykresli();

    void addLvl();

    void zjistiPotrebneSuroviny()override;

    void update(int level);
};


#endif //ZOO_HRA_PILA_H
