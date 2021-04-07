//
// Created by Piotr on 07.04.2021.
//

#ifndef C___CZLOWIEKZNANYZIMIENIA_H
#define C___CZLOWIEKZNANYZIMIENIA_H
#include "CzlowiekZnanyZWidzenia.h"


class CzlowiekZnanyZImienia :public CzlowiekZnanyZWidzenia{
protected:
    string imie;

public:
    void setImie(string name);
};


#endif //C___CZLOWIEKZNANYZIMIENIA_H
