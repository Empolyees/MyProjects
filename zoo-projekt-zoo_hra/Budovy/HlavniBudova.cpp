//
// Created by Marti on 31.12.2021.
//

#include "HlavniBudova.h"

HlavniBudova::HlavniBudova() {
    m_zivoty = 100;
    m_level = 0;
    m_jmeno = "Hlavni Budova";


}

void HlavniBudova::vykresli() {
    if(m_level==0){
        std::cout<<".H0.";
    }
    else{
        if(m_level==1){
            std::cout<<".H1.";
        }
        else{
            if(m_level==2){
                std::cout<<".H2.";
            }
        }
    }
}

void HlavniBudova::odeberZivoty(int den,Zbrojnice* zbrojnice,Enemy* enemy) {
    std::cout<<"Pocet zivotu pred utokem: "<<m_zivoty<<std::endl;
    std::cout<<"Sila vojska: "<<zbrojnice->getVosjko()<<std::endl;
    std::cout<<"Sila nepritele: "<<enemy->getSilaNepritele()<<std::endl;
    if(zbrojnice->getVosjko()<enemy->getSilaNepritele()){
        m_zivoty=m_zivoty+zbrojnice->getVosjko()-enemy->getSilaNepritele();
    }
    std::cout<<"Pocet zivotu po utokem: "<<m_zivoty<<std::endl;
}

void HlavniBudova::zjistiPotrebneSuroviny() {
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

int HlavniBudova::getZivoty() {
    return m_zivoty;
}