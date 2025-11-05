#pragma once
//#include <print>
#include "Stocznia.hpp"

unsigned int transportujFlota(unsigned int towar)
{
    //std::println("liczba towaru {}", towar);
    unsigned int przetransportowano = 0;
    unsigned int liczbaZaglowcow = 0;

    Stocznia stocznia{};

    while (przetransportowano < towar)
    {
        Statek* nowyStatek = stocznia();

        przetransportowano += nowyStatek->transportuj();
        //std::println("przetransportowano {}", przetransportowano);
        if (dynamic_cast<Zaglowiec*>(nowyStatek) != nullptr)
        {
            liczbaZaglowcow++;
        }

        delete nowyStatek;
    }
    //std::println("liczba zaglowcow {}", liczbaZaglowcow);
    return liczbaZaglowcow;

    
}