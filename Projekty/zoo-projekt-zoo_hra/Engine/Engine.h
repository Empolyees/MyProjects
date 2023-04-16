//
// Created by Marti on 31.12.2021.
//

#ifndef ZOO_HRA_ENGINE_H
#define ZOO_HRA_ENGINE_H

#include "iostream"
#include "../Budovy/Sklad.h"
#include "../Budovy/Pila.h"
#include "../Budovy/Farma.h"
#include "../Budovy/Dul.h"
#include "../Mapa/Mapa.h"
#include "../Enemy/Enemy.h"
#include "../Budovy/HlavniBudova.h"
#include "../Budovy/Zbrojnice.h"
#include "../Budovy/Voda.h"
#include "../Budovy/PrazdnyPozemek.h"

class Engine {

static int s_pocitacDnu;

static Farma* s_farma;

static Pila* s_pila;

static Dul* s_dul;

static HlavniBudova* s_hlavniBudova;
    static Zbrojnice* s_zbrojnice;
    static PrazdnyPozemek* s_prazdnyPozemek;
    static Voda* s_voda;


    Mapa* m_mapa;
    Enemy* m_enemy;



public:

    Engine();
    static void pridejDen();

    static void konecHry(int pocetDnu);

    void startHry();

    static void vypisNapovedu();

    void Vylepsi(Budova* budova);

    void utokNepratel(int den,Enemy* enemy,HlavniBudova* hlavniBudova,Zbrojnice* zbrojnice);


};


#endif //ZOO_HRA_ENGINE_H
