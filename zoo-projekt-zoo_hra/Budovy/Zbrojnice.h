//
// Created by Marti on 31.12.2021.
//

#ifndef ZOO_HRA_ZBROJNICE_H
#define ZOO_HRA_ZBROJNICE_H

#include "Budova.h"
class Zbrojnice:public Budova{
int m_vojsko;
public:
Zbrojnice();

int getVosjko();

void vykresli();

int getLvl();

void zjistiPotrebneSuroviny() override;



};


#endif //ZOO_HRA_ZBROJNICE_H
