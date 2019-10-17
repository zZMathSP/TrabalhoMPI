#include <iostream>
#include <stdlib.h>

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
  Aeroporto(int codigo);
  int getCodigo();
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
