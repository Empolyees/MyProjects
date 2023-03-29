//
// Created by Marti on 31.12.2021.
//

#include "Farma.h"

Farma::Farma() {
    m_jidlo = 0;
    m_level = 0;
    m_jmeno="Farma";
    m_surovinyNaVylepseni = 0;
}

int Farma::getJidlo() {
    return m_jidlo;
}

void Farma::vykresli() {
    if(m_level==0){
        std::cout<<".F0.";
    }
    else{
        if(m_level==1){
            std::cout<<".F1.";
        }
        else{
            if(m_level==2){
                std::cout<<".F2.";
            }
        }
    }
}

void Farma::update(int level) {
    switch (level) {

        case 1:
            m_jidlo = 10;

            break;
        case 2:
            m_jidlo = 20;

            break;
        case 3:
            m_jidlo = 30;

            break;
    }
}

void Farma::addLvl() {
    if(m_level<4){
        m_level+= 1;
    }else{std::cout<<"Tato budova ma maximalni uroven"<<std::endl;}

    switch (m_level) {

        case 1:
            m_jidlo = 10;

            break;
        case 2:
            m_jidlo = 20;

            break;
        case 3:
            m_jidlo = 30;

            break;
}
}

void Farma::zjistiPotrebneSuroviny() {
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