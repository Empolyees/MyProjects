//
// Created by Marti on 31.12.2021.
//
#include "Engine.h"

int Engine::s_pocitacDnu = 0;

Dul* Engine::s_dul = new Dul();
Farma* Engine::s_farma = new Farma();
Pila* Engine::s_pila = new Pila();
HlavniBudova* Engine::s_hlavniBudova = new HlavniBudova();
Zbrojnice* Engine::s_zbrojnice = new Zbrojnice();
PrazdnyPozemek* Engine::s_prazdnyPozemek=new PrazdnyPozemek();
Voda* Engine::s_voda=new Voda();


Engine::Engine() {
    m_enemy=new Enemy();

    m_mapa= new Mapa(s_hlavniBudova,s_dul,s_farma,s_pila,s_zbrojnice,s_prazdnyPozemek,s_voda);
}

void Engine::utokNepratel(int den, Enemy *enemy, HlavniBudova *hlavniBudova, Zbrojnice *zbrojnice) {
    if(den==5){
        enemy->zautoc(den);
        hlavniBudova->odeberZivoty(den,zbrojnice,enemy);
        if(s_hlavniBudova->getZivoty()<=0){
            std::cout<<"Zabilli te indiani, prohral si :-("<<std::endl;
            konecHry(s_pocitacDnu);
        }
    }
    else{
        if(den==10){
            enemy->zautoc(den);
            hlavniBudova->odeberZivoty(den,zbrojnice,enemy);
            if(s_hlavniBudova->getZivoty()<=0){
                std::cout<<"Zabilli te indiani, prohral si :-("<<std::endl;
                konecHry(s_pocitacDnu);
            }
        }
        else{
            if(den==15){
                enemy->zautoc(den);
                hlavniBudova->odeberZivoty(den,zbrojnice,enemy);
                if(s_hlavniBudova->getZivoty()<=0){
                    std::cout<<"Zabilli te indiani, prohral si :-("<<std::endl;
                    konecHry(s_pocitacDnu);
                }
            }
        }
    }
}

void Engine::Vylepsi(Budova *budova) {
    budova->zjistiPotrebneSuroviny();

    if(Sklad::getKameny()>=budova->getSurovinyNaVylepseni() and Sklad::getDrevo()>=budova->getSurovinyNaVylepseni()) {

        Sklad::odeberKameny(budova->getSurovinyNaVylepseni());
        Sklad::odeberDrevo(budova->getSurovinyNaVylepseni());


        budova->addLvl();



        std::cout<<budova->getName()<<" byl(a) vylepsena na uroven: "<<budova->getLvl()<<std::endl;
    }else {std::cout<<"Potrebujes vice surovin, kamenu a dreva: "<<budova->getSurovinyNaVylepseni()<<std::endl;}
}

void Engine::pridejDen() {
    s_pocitacDnu++;

}

void Engine::konecHry(int pocetDnu) {
    std::cout << "Hra ukoncena na dnu odehrano: "<<pocetDnu << std::endl;
    

}

void Engine::vypisNapovedu() {
    std::cout << "[0]: Konec hry" << std::endl;
    std::cout << "[1]: Napoveda" << std::endl;
    std::cout << "[2]: Zobrazit suroviny" << std::endl;
    std::cout << "[3]: Vylepsit" << std::endl;
    std::cout << "[4]: Zobrazit mapu" << std::endl;
    std::cout << "[5]: Konec dne" << std::endl;
}

void Engine::startHry(){
    int rozhodnuti =0;



    do{
        std::cout<<std::endl;
        std::cout << "Vyber co chces udelat, stiskni [1] pro napovedu" << std::endl;
        std::cin>>rozhodnuti;

        switch(rozhodnuti){
            case 0:
                konecHry(s_pocitacDnu);

                break;
            case 1:
                vypisNapovedu();
                break;
            case 2:
                Sklad::printInfo();
                std::cout<<std::endl;
                std::cout<<"Pocet surovin za den:"<<std::endl;
                std::cout<<"Pocet zlata za den: "<<s_dul->getZlato()<<std::endl;
                std::cout<<"Pocet jidla za den: "<<s_farma->getJidlo()<<std::endl;
                std::cout<<"Pocet dreva za den: "<<s_pila->getDrevo()<<std::endl;
                std::cout<<"Pocet kamenu za den: "<<s_dul->getKameny()<<std::endl;
                break;
            case 3:

                if(s_pocitacDnu<100){
                    int rozhodnuti2 = 0;
                    do{
                        std::cout << "[0]: Zpet" << std::endl;
                        std::cout << "[1]: Vylepsit pilu" << std::endl;
                        std::cout << "[2]: Vylepsit dul" << std::endl;
                        std::cout << "[3]: Vylepsit farmu" << std::endl;
                        std::cout<< "[4]: Vylepsit zbrojnici" <<std::endl;
                        std::cout<<"[5]: Vylepsit hlavni budovu"<<std::endl;
                        std::cin>>rozhodnuti2;
                        switch(rozhodnuti2){
                            case 0:

                                break;
                            case 1:
                                Vylepsi(s_pila);
                                s_pila->update(s_pila->getLvl());
                                break;
                            case 2:
                                Vylepsi(s_dul);
                                s_dul->update(s_dul->getLvl());
                                break;
                            case 3:
                                Vylepsi(s_farma);
                                s_farma->update(s_farma->getLvl());
                                break;
                            case 4:
                                Vylepsi(s_zbrojnice);

                                break;
                            case 5:
                                Vylepsi(s_hlavniBudova);
                                break;


                        }


                    } while (rozhodnuti2 =0);

                }
                    if(s_hlavniBudova->getLvl()==3){
                        std::cout<<"Vyhral si hru :-)"<<std::endl;
                        konecHry(s_pocitacDnu);
                    }
                break;

            case 4:
                std::cout<<"Mapa: "<<std::endl;
                m_mapa->vykresliMapu();
                std::cout<<std::endl;
                std::cout<<s_dul->getName()<<" s levelem: "<<s_dul->getLvl()<<" ,";
                std::cout<<s_farma->getName()<<" s levelem: "<<s_farma->getLvl()<<" ,";
                std::cout<<s_hlavniBudova->getName()<<" s levelem: "<<s_hlavniBudova->getLvl()<<" ,";
                std::cout<<s_pila->getName()<<" s levelem: "<<s_pila->getLvl()<<" ,";
                std::cout<<s_zbrojnice->getName()<<" s levelem: "<<s_zbrojnice->getLvl()<<" ,";
                break;

            case 5:
                s_pocitacDnu++;
                Sklad::pridejZlato(s_dul);
                Sklad::pridejDrevo(s_pila);
                Sklad::pridejJidlo(s_farma);
                Sklad::pridejKameny(s_dul);
                std::cout<<"Zactek dne "<<s_pocitacDnu<<std::endl;
                utokNepratel(s_pocitacDnu,m_enemy,s_hlavniBudova,s_zbrojnice);
        }
    }while(rozhodnuti!=0);
}


