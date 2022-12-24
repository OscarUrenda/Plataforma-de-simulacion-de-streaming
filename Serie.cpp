#include "Serie.h"

Serie::Serie(string _tipoVideo,string _nombreVideo,string _genero,int _calificacion,int _anioLanzamiento,int _duracion,string _ID,int _temporada,int _caps) : Video(_tipoVideo,_nombreVideo,_genero,_calificacion,_anioLanzamiento,_duracion) {
  ID = _ID;
  temporada = _temporada;
  caps = _caps;
}

void Serie::muestraDatos(){
  Video::muestraDatos();
  cout << "ID: " << ID << endl;
  cout << "Temporadas: " << temporada << endl;
  cout << "Episodios: " << caps << endl;
}