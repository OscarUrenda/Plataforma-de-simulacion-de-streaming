#ifndef VIDEO_H_INCLUDED
#define VIDEO_H_INCLUDED

#include<iostream>
#include<string.h>

using namespace std;

class Video {
  public:
  string tipoVideo;
  string nombreVideo;
  string genero;
  int calificacion;
  int anioLanzamiento;
  int duracion;

  public:
  Video();
  Video(string,string,string,int,int,int);
  void calificaVideo(int);
  virtual void muestraDatos();

};

#endif // VIDEO_H_INCLUDED