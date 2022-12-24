#include "Episodios.h"

Episodios::Episodios(int _tempo, int _numcap, string _namecap) {
  tempo = _tempo;
  numcap = _numcap;
  namecap = _namecap;
}

void Episodios::muestraEpisodios(){
  cout << "Temporada: " << tempo << endl;
  cout << "Capitulo: " << numcap << endl;
  cout << namecap << endl;
}