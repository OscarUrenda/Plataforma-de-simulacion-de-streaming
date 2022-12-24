#include "iostream"
#include "Video.h"
#include "Pelicula.h"
#include "Serie.h" 
#include "Episodios.h"
#include <stdio.h>
#include <string.h>

using namespace std;


int procedimiento;
int opcion;
int rate;
int buscar;
int brate;
string bgenero;
string bID;

int main() {

  Video *vector[10];

  vector[0] = new Pelicula("Pelicula","Spiderman","Acción", 5, 2021, 170,"P1");
  vector[1] = new Pelicula("Pelicula","Titanic","Romance", 4, 1998, 185,"P2");
  vector[2] = new Pelicula("Pelicula","Avatar","Ciencia ficción", 3, 2000, 150,"P3");
  vector[3] = new Pelicula("Pelicula","Huye","Suspenso", 2, 2008, 126,"P4");
  vector[4] = new Pelicula("Pelicula","¿Dónde están las rubias?","Comedia", 1, 2001, 118,"P5");
  vector[5] = new Serie("Serie","Bob Esponja","Animada", 5, 1995, 25, "S1", 3, 2);
  vector[6] = new Serie("Serie","American Horror Story","Suspenso", 1, 1999, 40, "S2", 1, 4);
  vector[7] = new Serie("Serie","The Walking Dead","Zombies", 2, 1992, 50, "S3", 2, 2);
  vector[8] = new Serie("Serie","Drake y Josh","Comedia", 3, 2001, 30, "S4", 2, 3);
  vector[9] = new Serie("Serie","Dragon Ball","Anime", 4, 1985, 25, "S5", 1, 5);

  Episodios *bob[6];
  bob[0] = new Episodios(1,1,"Estoy listo");
  bob[1] = new Episodios(1,2,"Patricio se une");
  bob[2] = new Episodios(2,1,"La cangreburger");
  bob[3] = new Episodios(2,2,"Los planes de plankton");
  bob[4] = new Episodios(3,1,"Crustaceo cascarudo");
  bob[5] = new Episodios(3,2,"Soy un cacahuate");

  Episodios *ahs[4];
  ahs[0] = new Episodios(1,1,"Casa embrujada");
  ahs[1] = new Episodios(1,2,"Nuevos vecinos");
  ahs[2] = new Episodios(1,3,"Historia revelada");
  ahs[3] = new Episodios(1,4,"Ordenes ajenas");

  Episodios *twd[4];
  twd[0] = new Episodios(1,1,"Nuevo mundo");
  twd[1] = new Episodios(1,2,"No hay reglas");
  twd[2] = new Episodios(2,1,"Escape crítico");
  twd[3] = new Episodios(2,2,"Zombies");

  Episodios *dyj[6];
  dyj[0] = new Episodios(1,1,"Hermanos");
  dyj[1] = new Episodios(1,2,"La banda");
  dyj[2] = new Episodios(1,3,"Escuela pública");
  dyj[3] = new Episodios(2,1,"Enseñando a ligar");
  dyj[4] = new Episodios(2,2,"La chica recién llegada");
  dyj[5] = new Episodios(2,3,"Te veo en química");

  Episodios *db[5];
  db[0] = new Episodios(1,1,"Sayajin");
  db[1] = new Episodios(1,2,"Gohan");
  db[2] = new Episodios(1,3,"Torneo del poder");
  db[3] = new Episodios(1,4,"Vuela Goku");
  db[4] = new Episodios(1,5,"El legendario super sayajin");
  

vector[0] -> calificaVideo(5);

cout << "Menú.\nPara continuar, presione uno de los siguientes números:\n(1) Observar listas de series o peliculas\n(2) Mostrar los videos en general con una cierta calificación o de un cierto género\n(3) Mostrar los episodios de una determinada serie\n(4) Mostrar las películas con cierta calificación\n(5) Calificar un video\n(6) Salir" <<endl;
cin >> procedimiento;

  switch (procedimiento){
    case 1:

  cout << "Si quiere ver las peliculas disponibles, presione 1.\nSi quiere ver las series disponibles presione 2." << endl;

  cin >> opcion;

  if (opcion == 1){

    cout << "\n" << endl;
    vector[0] -> muestraDatos();
    cout << "\n" << endl;
    vector[1] -> muestraDatos();
    cout << "\n" << endl;
    vector[2] -> muestraDatos();
    cout << "\n" << endl;
    vector[3] -> muestraDatos();
    cout << "\n" << endl;
    vector[4] -> muestraDatos();
  }

  else if (opcion == 2){

  cout << "\n" << endl;
  vector[5] -> muestraDatos();
  cout << "\n" << endl;
  vector[6] -> muestraDatos();
  cout << "\n" << endl;
  vector[7] -> muestraDatos();
  cout << "\n" << endl;
  vector[8] -> muestraDatos();
  cout << "\n" << endl;
  vector[9] -> muestraDatos();
  }

  break;
  

  case 2:
    cout << "Si quiere ver videos con cierta calificación, presione 1.\nSi quiere ver videos de cierto género, presione 2." << endl;
  cin >> buscar;

  if (buscar == 1){
    cout << "¿Videos de qué calificación busca?" << endl;
    cin >> brate;
    if (brate <= 5){
    for(int i = 0; i < 10; i++) {
      if (vector[i]->calificacion == brate)
  cout << vector[i]->nombreVideo << "\n";
     }
    }
  
  else{
    cout << "Valor inválido" << endl;
  }
  }

    
  
  else if (buscar == 2){
      cout << "¿Videos de qué género busca?" << endl;
    cin >> bgenero;
    for(int i = 0; i < 10; i++) {
      if (vector[i]->genero == bgenero)
  cout << vector[i]->nombreVideo << "\n";
 /* else{
       cout << "No se encontraron videos de ese género, lo sentimos :(" << endl;
       break;
    }*/
     
  }
  
  }

  else{
    cout<< "Valor introducido no válido." << endl;
  }
    
    
  break;

  case 3:
    cout << "Introduzca el ID de la serie:" << endl;
    cin >> bID;
    if (bID == "S1"){
      cout << "Bob esponja" << endl;
      for(int i = 0; i < 6; i++) {
      cout << "\n" << endl;
      bob[i]->muestraEpisodios();
      }
    }
    else if (bID == "S2"){
      cout << "American horror story" << endl;
      for(int i = 0; i < 4; i++) {
      cout << "\n" << endl;
      ahs[i]->muestraEpisodios();
      }
    }
    else if (bID == "S3"){
      cout << "The walking dead" << endl;
      for(int i = 0; i < 4; i++) {
      cout << "\n" << endl;
      twd[i]->muestraEpisodios();
      }
    }
    else if (bID == "S4"){
      cout << "Drake y Josh" << endl;
      for(int i = 0; i < 6; i++) {
      cout << "\n" << endl;
      dyj[i]->muestraEpisodios();
      }
    }
    else if (bID == "S5"){
      cout << "Dragon Ball" << endl;
      for(int i = 0; i < 5; i++) {
      cout << "\n" << endl;
      db[i]->muestraEpisodios();
      }
    }
    else{
      cout << "ID inválido" << endl;
    }
  break;

  case 4:
    cout << "Introduzca la calificación deseada:" << endl;
    cin >> rate;
    if (rate < 6 and rate > 0){
    for(int i = 0; i < 6; i++) {
      if (vector[i]->calificacion == rate) {
  cout << vector[i]->nombreVideo << "\n";
      }
    }
  }
    else{
      cout << "Valor no válido." << endl;
    }
  
  break;
    

  case 5:
    cout << "Introduzca el ID del video:" << endl;

  break;

  case 6:

  cout << "Gracias por contar con nuestro servicio de streaming." << endl;
  
  break;

  default:
  cout << "Valor introducido no válido." << endl;

 

    }

  }

