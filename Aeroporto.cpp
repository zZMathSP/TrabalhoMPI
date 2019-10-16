#include <iostream>
#include <stdlib.h>
#include "Aeroporto.h"

using namespace std;

Aeroporto::Aeroporto(int codigo) {
  this->codigo = codigo;
  this->numeroPousos = 0;
  this->numeroDecolagens = 0;
  this->codigoVoo = 0;
  this->origemVoo = 0;
  this->horarioChegada = 0;
  this->horarioPartida = 0;
  this->tempoVoo = 0;
}

int Aeroporto::getCodigo() {
  return this->codigo;
}

int Aeroporto::getNumeroPousos() {
  return this->numeroPousos;
}

void Aeroporto::setNumeroPousos(int numeroPousos) {
  this->numeroPousos = numeroPousos;
}

int Aeroporto::getNumeroDecolagens() {
  return this->numeroDecolagens;
}

void Aeroporto::setNumeroDecolagens(int numeroDecolagens) {
  this->numeroDecolagens = numeroDecolagens;
}

int Aeroporto::getCodigoVoo() {
  return this->codigoVoo;
}

void Aeroporto::setCodigoVoo(int codigoVoo) {
  this->codigoVoo = codigoVoo;
}

int Aeroporto::getOrigemVoo() {
  return this->origemVoo;
}

void Aeroporto::setOrigemVoo(int origemVoo) {
  this->origemVoo = origemVoo;
}

int Aeroporto::getHorarioChegada() {
  return this->horarioChegada;
}

void Aeroporto::setHorarioChegada(int horarioChegada) {
  this->horarioChegada = horarioChegada;
}

int Aeroporto::getHorarioPartida() {
  return this->horarioPartida;
}

void Aeroporto::setHorarioPartida(int horarioPartida) {
  this->horarioPartida = horarioPartida;
}

int Aeroporto::getTempoVoo() {
  return this->tempoVoo;
}

void Aeroporto::setTempoVoo(int tempoVoo) {
  this->tempoVoo = tempoVoo;
}
