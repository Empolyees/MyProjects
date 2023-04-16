//
// Created by Marti on 23.01.2022.
//

#ifndef ZOO_HRA_PRAZDNYPOZEMEK_H
#define ZOO_HRA_PRAZDNYPOZEMEK_H
#include "Budova.h"

class PrazdnyPozemek:public Budova {
public:
    PrazdnyPozemek();
    void vykresli();
    void zjistiPotrebneSuroviny() override;


};


#endif //ZOO_HRA_PRAZDNYPOZEMEK_H
