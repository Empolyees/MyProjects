//
// Created by Marti on 04.01.2022.
//

#ifndef ZOO_HRA_MAPA_H
#define ZOO_HRA_MAPA_H
#include <vector>
#include "../Budovy/Budova.h"
#include "../Budovy/Dul.h"
#include "../Budovy/Farma.h"
#include "../Budovy/HlavniBudova.h"
#include "../Budovy/Pila.h"
#include "../Budovy/Zbrojnice.h"
#include "../Budovy/PrazdnyPozemek.h"
#include "../Budovy/Voda.h"

class Mapa {
    std::vector<std::vector<Budova*>> m_mapa;
public:
    Mapa(HlavniBudova* hlavniBudova,Dul* dul,Farma* farma,Pila* pila,Zbrojnice* zbrojnice,PrazdnyPozemek* prazdnyPozemek,Voda* voda);
    void vykresliMapu();
};


#endif //ZOO_HRA_MAPA_H
