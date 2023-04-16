//
// Created by Marti on 31.12.2021.
//

#include "Zbrojnice.h"

Zbrojnice::Zbrojnice() {
    m_vojsko=0;
    m_jmeno="Zbrojnice";
    m_level=0;
}

void Zbrojnice::vykresli(){
    if(m_level==0){
        std::cout<<".Z0.";
    }
    else{
        if(m_level==1){
            std::cout<<".Z1.";
        }
        else{
            if(m_level==2){
                std::cout<<".Z2.";
            }
        }
    }
}

int Zbrojnice::getLvl() {
    return m_level;
}

void Zbrojnice::zjistiPotrebneSuroviny() {
    switch (m_level) {
        case 0:
            m_surovinyNaVylepseni = 100;
            break;
        case 1:
            m_surovinyNaVylepseni = 150;
            break;
        case 2:
            m_surovinyNaVylepseni = 200;
            break;
    }
}

int Zbrojnice::getVosjko() {
    if(m_level==0){
        m_vojsko=0;
        return m_vojsko;
    }
    else{
        if(m_level==1){
            m_vojsko=50;
            return m_vojsko;
        }
        else{
            if(m_level==2){
                m_vojsko=100;
                return m_vojsko;
            }
        }
    }
}