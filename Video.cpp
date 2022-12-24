#include "Video.h"

using namespace std;

Video::Video(string tipo, string nombre, string gene, int rating, int anio, int dura) {
  tipoVideo = tipo;
  nombreVideo = nombre;
  genero = gene;
  calificacion = rating;
  anioLanzamiento = anio;
  duracion = dura;
}

void Video::muestraDatos() {
  cout << "Tipo: " << tipoVideo << endl;
  cout << "Nombre: " << nombreVideo << endl;
  cout << "Género: " << genero << endl;
  cout << "Calificación: " << calificacion << "/5 estrellas" << endl;
  cout << "Año de lanzamiento: " << anioLanzamiento << endl;
  cout << "Duración: " << duracion << " minutos" << endl;
}

void Video::calificaVideo(int n){
  calificacion = n;
}