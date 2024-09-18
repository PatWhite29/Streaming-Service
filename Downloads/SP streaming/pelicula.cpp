#include "pelicula.h"
#include <iostream>

Pelicula::Pelicula(int id, const std::string& nombre, double duracion, const std::string& genero)
    : Video(id, nombre, duracion, genero) {}

void Pelicula::mostrar() const {
    std::cout << "Pelicula: " << nombre << ", Duracion: " << duracion << " min, Genero: " << genero
              << ", Calificacion Promedio: " << obtenerCalificacionPromedio() << std::endl;
}
