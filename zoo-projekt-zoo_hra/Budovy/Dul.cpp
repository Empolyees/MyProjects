//
// Created by Marti on 31.12.2021.
//

#include "Dul.h"

Dul::Dul() {
    m_kameny = 0;
    m_zlato =0;
    m_level = 0;
    m_jmeno="Dul";
    m_surovinyNaVylepseni = 0;
}

int Dul::getKameny() {
    return m_kameny;
}

int Dul::getZlato() {
    return m_zlato;
}

void Dul::vykresli() {
    if(m_level==0){
        std::cout<<".D0.";
    }
    else{
        if(m_level==1){
            std::cout<<".D1.";
        }
        else{
            if(m_level==2){
                std::cout<<".D2.";
            }
        }
    }
}

void Dul::update(int level) {
    switch(level) {
        case 1:
            m_zlato = 10;
            m_kameny = 50;
            break;
        case 2:
            m_zlato = 20;
            m_kameny = 60;
            break;
        case 3:
            m_zlato = 30;
            m_kameny = 70;
            break;
    }
    }

void Dul::addLvl() {
    if(m_level<4){
    m_level+= 1;
    }else{std::cout<<"Tato budova ma maximalni uroven"<<std::endl;}

}

void Dul::zjistiPotrebneSuroviny() {
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

