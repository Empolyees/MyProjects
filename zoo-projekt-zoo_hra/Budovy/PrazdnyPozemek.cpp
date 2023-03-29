//
// Created by Marti on 23.01.2022.
//

#include "PrazdnyPozemek.h"

PrazdnyPozemek::PrazdnyPozemek() {
    m_level=0;
    m_jmeno="prazdny pozemek";
    m_surovinyNaVylepseni=0;
}

void PrazdnyPozemek::vykresli() {
    std::cout<<"____";
}

void PrazdnyPozemek::zjistiPotrebneSuroviny() {}