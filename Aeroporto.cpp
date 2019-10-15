#include <iostream>
#include <string.h>
#include "Aeroporto.h"

using namespace std;

/*Aeroporto::Aeroporto(int codigo) {
  this->codigo = codigo;
  this->numeroPousos = 0;
  this->numeroDecolagens = 0;
  this->codigoVoo = 0;
  this->origemVoo = 0;
  this->horarioChegada = 0;
  this->horarioPartida = 0;
  this->tempoVoo = 0;
}*/

/*Aeroporto::int getCodigo(){
  return this->codigo;
}*/

Aeroporto::int getNumeroPousos() {
  return this->numeroPousos;
}

Aeroporto::void setNumeroPousos(int numeroPousos) {
  this->numeroPousos = numeroPousos;
}

Aeroporto::int getNumeroDecolagens() {
  return this->numeroDecolagens;
}

Aeroporto::void setNumeroDecolagens(int numeroDecolagens) {
  this->numeroDecolagens = numeroDecolagens;
}

Aeroporto::int getCodigoVoo() {
  return this->codigoVoo;
}

Aeroporto::void setCodigoVoo(int codigoVoo) {
  this->codigoVoo = codigoVoo;
}

Aeroporto::int getOrigemVoo() {
  return this->origemVoo;
}

Aeroporto::void setOrigemVoo(int origemVoo) {
  this->origemVoo = origemVoo;
}

Aeroporto::int getHorarioChegada() {
  return this->horarioChegada;
}

Aeroporto::void setHorarioChegada(int horarioChegada) {
  this->horarioChegada = horarioChegada;
}

Aeroporto::int getHorarioPartida() {
  return this->horarioPartida;
}

Aeroporto::void setHorarioPartida(int horarioPartida) {
  this->horarioPartida = horarioPartida;
}

Aeroporto::int getTempoVoo() {
  return this->tempoVoo;
}

Aeroporto::void setTempoVoo(int tempoVoo) {
  this->tempoVoo = tempoVoo;
}
