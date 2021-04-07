//
// Created by Piotr on 07.04.2021.
//

#ifndef C___DOBRZEZNANYKOLEGA_H
#define C___DOBRZEZNANYKOLEGA_H
#include "CzlowiekZnanyZWidzenia.h"
#include "CzlowiekZnanyZImienia.h"
#include "CzlowiekZnanyZInternetu.h"
#include "Zwierze.h"


class DobrzeZnanyKolega : public CzlowiekZnanyZWidzenia, public CzlowiekZnanyZImienia, public CzlowiekZnanyZInternetu{
protected:
    string skadGoZnam;
    Zwierze zwierzeDomowe;
public:
    void setSkadGoZnam(string where);
    void setZwierzeDomoweName(string animalName);
    void setZwierzeDomoweGatunek(string animalSpecies);

};


#endif //C___DOBRZEZNANYKOLEGA_H
