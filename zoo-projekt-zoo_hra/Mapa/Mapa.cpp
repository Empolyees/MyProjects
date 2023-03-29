//
// Created by Marti on 04.01.2022.
//

#include "Mapa.h"

Mapa::Mapa(HlavniBudova* hlavniBudova,Dul* dul,Farma* farma,Pila* pila,Zbrojnice* zbrojnice,PrazdnyPozemek* prazdnyPozemek,Voda* voda) {


    std::vector<Budova*> radek1;
    radek1.push_back(voda);
    radek1.push_back(voda);
    radek1.push_back(voda);
    radek1.push_back(voda);
    radek1.push_back(voda);


    std::vector<Budova*> radek2;
    radek2.push_back(voda);
    radek2.push_back(dul);
    radek2.push_back(prazdnyPozemek);
    radek2.push_back(farma);
    radek2.push_back(voda);

    std::vector<Budova*> radek3;
    radek3.push_back(voda);
    radek3.push_back(prazdnyPozemek);
    radek3.push_back(hlavniBudova);
    radek3.push_back(prazdnyPozemek);
    radek3.push_back(voda);

    std::vector<Budova*> radek4;
    radek4.push_back(voda);
    radek4.push_back(pila);
    radek4.push_back(prazdnyPozemek);
    radek4.push_back(zbrojnice);
    radek4.push_back(voda);




    m_mapa.push_back(radek1);
    m_mapa.push_back(radek2);
    m_mapa.push_back(radek3);
    m_mapa.push_back(radek4);
    m_mapa.push_back(radek1);


}

void Mapa::vykresliMapu() {


    for(auto  radek:m_mapa){
        for(auto policko:radek){
            policko->vykresli();
        }
        std::cout<<std::endl;
    }
}