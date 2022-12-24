#ifndef PELICULA_H_INCLUDED
#define PELICULA_H_INCLUDED

#include <iostream>
#include "Video.h"

using namespace std;

class Pelicula : public Video{
  private:
    string ID;

  public:
    Pelicula();
    Pelicula(string,string,string,int,int,int,string);
    void muestraDatos();

};

#endif // PELICULA_H_INCLUDED