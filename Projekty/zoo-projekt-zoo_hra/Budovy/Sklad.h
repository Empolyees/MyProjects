//
// Created by Marti on 31.12.2021.
//

#ifndef ZOO_HRA_SKLAD_H
#define ZOO_HRA_SKLAD_H

#include "Budova.h"
#include "Pila.h"
#include "Farma.h"
#include "Dul.h"


class Sklad {
static int m_zlato;
static int m_jidlo;
static int m_kameny;
static int m_drevo;
static int m_maxSurovin;
public:

    Sklad();

   static void printInfo();

   static int getZlato();

   static int getKameny();

   static int getDrevo();

   static int getJidlo();



    static void pridejJidlo(Farma* farma);

    static void pridejZlato(Dul* dul);

    static void pridejKameny(Dul* dul);

    static void pridejDrevo(Pila* pila);


    static void odeberDrevo(int hodnota);

    static void odeberKameny(int hodnota);


    static void odeberJidlo(int hodnota);

    static void odeberZlato(int hodnota);


    void kontrola();






};


#endif //ZOO_HRA_SKLAD_H
