//
// Created by Marti on 31.12.2021.
//

#include "Sklad.h"

int Sklad::m_maxSurovin =500;

int Sklad::m_jidlo =0;
int Sklad::m_kameny =200;
int Sklad::m_drevo =200;
int Sklad::m_zlato =0;

/*Sklad::Sklad() {
    m_drevo = 100;
    m_kameny = 100;
    m_zlato = 0;
    m_jidlo = 0;

    m_maxSurovin = 500;

}*/

void Sklad::printInfo() {
    std::cout<<"Maximalni pocet surovin je: "<<m_maxSurovin<<std::endl;
    std::cout<<std::endl;
    std::cout<<"Maximalni pocet surovin je: "<<m_maxSurovin<<std::endl;
    std::cout<<"Zlato: "<<m_zlato<<std::endl;
    std::cout<<"Jidlo: "<<m_jidlo<<std::endl;
    std::cout<<"Drevo: "<<m_drevo<<std::endl;
    std::cout<<"Kameny: "<<m_kameny<<std::endl;

}



void Sklad::kontrola() {

}


void Sklad::pridejJidlo(Farma *farma) {
    if(m_jidlo+farma->getJidlo()>m_maxSurovin){
        std::cout<<"Mas plne skladiste na jidlo" <<std::endl;
    }else{
    m_jidlo+=farma->getJidlo();
    }
}

void Sklad::pridejDrevo(Pila *pila) {
    if(m_drevo+pila->getDrevo()>m_maxSurovin){
        std::cout<<"Mas plne skladiste na drevo" <<std::endl;
    }else{
    m_drevo+= pila->getDrevo();
    }
}

void Sklad::pridejKameny(Dul *dul) {
    if(m_kameny+dul->getKameny()>m_maxSurovin){
        std::cout<<"Mas plne skladiste na kameny" <<std::endl;
    }else{
    m_kameny+=dul->getKameny();
    }
}

void Sklad::pridejZlato(Dul *dul) {
    if(m_zlato+dul->getZlato()>m_maxSurovin){
        std::cout<<"Mas plne skladiste na zlato" <<std::endl;
    }else{
    m_zlato+= dul->getZlato();
    }
}

void Sklad::odeberDrevo(int hodnota) {
    m_drevo-=hodnota;
}

void Sklad::odeberKameny(int hodnota) {
    m_kameny -= hodnota;
}

void Sklad::odeberZlato(int hodnota) {
    m_zlato-= hodnota;
}

void Sklad::odeberJidlo(int hodnota) {
    m_jidlo-=hodnota;
}

int Sklad::getKameny() {
    return  m_kameny;
}

int Sklad::getDrevo() {
    return m_drevo;
}

int Sklad::getZlato() {
    return m_zlato;
}

int Sklad::getJidlo() {
    return m_jidlo;
}

