#include "serie.h"
#include <iostream>

Serie::Serie(int id, const std::string& nombre, double duracion, const std::string& genero)
    : Video(id, nombre, duracion, genero) {}

void Serie::agregarEpisodio(Episodio* episodio) {
    episodios.push_back(episodio);
}

void Serie::mostrar() const {
    std::cout << "Serie: " << nombre << ", Genero: " << genero << ", Calificacion Promedio: " << obtenerCalificacionPromedio() << std::endl;
    for (const auto& episodio : episodios) {
        std::cout << "  - ";
        episodio->mostrar();
    }
}
