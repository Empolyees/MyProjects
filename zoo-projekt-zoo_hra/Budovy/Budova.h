//
// Created by Marti on 31.12.2021.
//

#ifndef ZOO_HRA_BUDOVA_H
#define ZOO_HRA_BUDOVA_H

#include "string"
#include "iostream"

class Budova {

protected:
    std::string m_jmeno;
    int m_level;
    int m_surovinyNaVylepseni;
public:

    virtual void vykresli()=0;

    virtual void zjistiPotrebneSuroviny()=0;

    int getSurovinyNaVylepseni();

    std::string getName();

    void addLvl();

    void update(int level);


    int getLvl();

    //TODO .cpp
};


#endif //ZOO_HRA_BUDOVA_H
