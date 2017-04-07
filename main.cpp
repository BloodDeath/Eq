#include <iostream>
#include <cstdlib>
#include <cmath>
#include <limits>
#include <ctime>
#include "rng.h"
#include "sword.h"
#include "Item.h"
int main() {
    srand(time(NULL));
    //------------- Sprawdzenie losowania liczb
//    double lowest = INT16_MAX;
//    double highest = -INT16_MAX;
//    double x;
//    long int v = 0;
//    int g = 0;
//    int help;
//    int table[100] = {0};
//    for(long int i = 0; i < 100000000; i++)
//    {
//        x = generateGaussianNoise(50,50);
//        if(x>highest) highest=x;
//        if(x<lowest) lowest=x;
//        v++;
//        if(v>1000000)
//        {
//            std::cout << "Zyje " << ++g << std::endl;
//            v = 0;
//        }
//        help = (int)x;
//        table[help]++;
//    }
//    for(int i=0; i<100; i++)
//    {
//        std::cout << i << " = "<< table[i] << std::endl;
//    }
//     std::cout << lowest << std::endl;
//     std::cout <<  highest << std::endl;
    //-- koniec tego sprawdzania

    /*
     * Sloty:
     * Lewa reka -- bron -- statystyki zalezne od klasy
     * Prawa reka
     * Glowa
     * Tors -- lekki pancerz -- sredni -- ciezki
     * Nogi
     * Buty
     * Ramiona
     * Rece
     *
     *
     * Statystyki
     * Wylacznie bronie -- obrazenia
     *
     * sila zrecznosc inteligencja
     *
     * pozostale
     *
     * zycie
     *
     *
     *
     *
     */
    Item *s;
//    do
//    {
//        s = new sword();
//        std::cout << s->getLevel() << std::endl;
//        delete s;
//    }while(s->getLevel() != 60);
    s = new sword();
    s->set_item_name("Test");
    std::cout<< s->get_item_name()<<std::endl;
    return 0;
}