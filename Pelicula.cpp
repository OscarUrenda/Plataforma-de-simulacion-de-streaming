#include "Pelicula.h"

Pelicula::Pelicula(string _tipoVideo,string _nombreVideo,string _genero,int _calificacion,int _anioLanzamiento,int _duracion,string _ID) : Video(_tipoVideo,_nombreVideo,_genero,_calificacion,_anioLanzamiento,_duracion) {
  ID = _ID;
}

void Pelicula::muestraDatos(){
  Video::muestraDatos();
  cout << "ID: " << ID << endl;
}