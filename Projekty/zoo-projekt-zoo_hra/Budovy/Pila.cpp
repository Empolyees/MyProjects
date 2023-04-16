//
// Created by Marti on 31.12.2021.
//

#include "Pila.h"

Pila::Pila() {
    m_drevo = 0;
    m_jmeno = "Pila";
    m_level = 0;
    m_surovinyNaVylepseni = 0;
}

int Pila::getDrevo() {
    return m_drevo;
}

void Pila::vykresli() {
    if(m_level==0){
        std::cout<<".P0.";
    }
    else{
        if(m_level==1){
            std::cout<<".P1.";
        }
        else{
            if(m_level==2){
                std::cout<<".P2.";
            }
        }
    }
}

void Pila::update(int level) {
    switch (level) {

        case 1:
            m_drevo = 50;

            break;
        case 2:
            m_drevo = 60;

            break;
        case 3:
            m_drevo = 70;

            break;
    }
}

void Pila::addLvl() {
    if(m_level<4){
        m_level+= 1;
    }else{std::cout<<"Tato budova ma maximalni uroven"<<std::endl;}


}

void Pila::zjistiPotrebneSuroviny() {
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