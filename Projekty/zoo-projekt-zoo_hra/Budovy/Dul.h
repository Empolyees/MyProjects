//
// Created by Marti on 31.12.2021.
//

#ifndef ZOO_HRA_DUL_H
#define ZOO_HRA_DUL_H
#include "Budova.h"

class Dul: public Budova{
int m_zlato;
int m_kameny;
public:

    Dul();
    void vykresli();

    int getZlato();

    int getKameny();

    void addLvl();

    void update(int level);

    void zjistiPotrebneSuroviny()override;
};


#endif //ZOO_HRA_DUL_H
