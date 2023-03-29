//
// Created by Marti on 31.12.2021.
//

#include "Budova.h"

std::string Budova::getName() {
    return m_jmeno;
}

int Budova::getLvl() {
    return m_level;
}

void Budova::addLvl() {
    m_level +=1;
}

int Budova::getSurovinyNaVylepseni() {
    return m_surovinyNaVylepseni;
}

void Budova::update(int level) {}


