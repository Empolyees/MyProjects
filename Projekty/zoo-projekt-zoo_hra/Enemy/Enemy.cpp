  //
// Created by Marti on 31.12.2021.
//

#include "Enemy.h"
#include "iostream"
Enemy::Enemy() {
m_silaNepritele=0;
}

void Enemy::zautoc(int den) {
    if(den==5){
        std::cout<<"zautocili na tebe indiani"<<std::endl;
        m_silaNepritele= 50;

    }
    else{
        if(den==10){
            std::cout<<"zautocili na tebe indiani"<<std::endl;
            m_silaNepritele= 100;

        }

        else{
            if(den==15){
                std::cout<<"zautocili na tebe indiani"<<std::endl;
                m_silaNepritele= 200;

            }


        }
    }
}

int Enemy::getSilaNepritele() {
    return m_silaNepritele;
}
