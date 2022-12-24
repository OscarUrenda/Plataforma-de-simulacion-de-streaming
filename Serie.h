#ifndef SERIE_H_INCLUDED
#define SERIE_H_INCLUDED

#include <iostream>
#include "Video.h"

using namespace std;

class Serie : public Video{
  private:
    string ID;
    int temporada;
    int caps;

  public:
    Serie();
    Serie(string,string,string,int,int,int,string,int,int);
    void muestraDatos();

};

#endif // SERIE_H_INCLUDED