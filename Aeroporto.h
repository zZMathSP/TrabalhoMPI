#include <iostream>
#include <string.h>

using namespace std;

class Aeroporto{
private:
  int codigo;
  int numeroPousos;
  int numeroDecolagens;
  int codigoVoo;
  int origemVoo;
  int horarioChegada;
  int horarioPartida;
  int tempoVoo;
public:
  Aeroporto(int codigo){
    this->codigo = codigo;
    this->numeroPousos = 0;
    this->numeroDecolagens = 0;
    this->codigoVoo = 0;
    this->origemVoo = 0;
    this->horarioChegada = 0;
    this->horarioPartida = 0;
    this->tempoVoo = 0;
  };
  int getCodigo(){return this->codigo;};
  int getNumeroPousos();
  void setNumeroPousos(int numeroPousos);
  int getNumeroDecolagens();
  void setNumeroDecolagens(int numeroDecolagens);
  int getCodigoVoo();
  void setCodigoVoo(int codigoVoo);
  int getOrigemVoo();
  void setOrigemVoo(int origemVoo);
  int getHorarioChegada();
  void setHorarioChegada(int horarioChegada);
  int getHorarioPartida();
  void setHorarioPartida(int horarioPartida);
  int getTempoVoo();
  void setTempoVoo(int tempoVoo);
};
