#ifndef EPISODIOS_H_INCLUDED
#define EPISODIOS_H_INCLUDED

#include <iostream>


using namespace std;

class Episodios{ 
  private:
    int tempo;
    int numcap;
    string namecap;
    

  public:
    Episodios();
    Episodios(int,int,string);
    void muestraEpisodios();

};

#endif // EPISODIOS_H_INCLUDED