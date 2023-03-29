//
// Created by Marti on 31.12.2021.
//

#ifndef ZOO_HRA_FARMA_H
#define ZOO_HRA_FARMA_H

#include "Budova.h"

class Farma: public Budova{
int m_jidlo;
public:
    Farma();
    void vykresli();
    int getJidlo();

    void addLvl();

    void zjistiPotrebneSuroviny()override;


    void update(int level);
    
};


#endif //ZOO_HRA_FARMA_H
