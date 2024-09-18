#include "episodio.h"
#include <numeric> // Para std::accumulate

Episodio::Episodio(const std::string& titulo, int temporada)
    : titulo(titulo), temporada(temporada) {}

void Episodio::agregarCalificacion(int calificacion) {
    calificaciones.push_back(calificacion);
}

double Episodio::obtenerCalificacionPromedio() const {
    if (calificaciones.empty()) {
        return 0.0;
    }
    int suma = std::accumulate(calificaciones.begin(), calificaciones.end(), 0);
    return static_cast<double>(suma) / calificaciones.size();
}

void Episodio::mostrar() const {
    std::cout << "Episodio: " << titulo << ", Temporada: " << temporada
              << ", Calificacion Promedio: " << obtenerCalificacionPromedio() << std::endl;
}

std::ostream& operator<<(std::ostream& os, const Episodio& episodio) {
    os << "Episodio: " << episodio.titulo << ", Temporada: " << episodio.temporada
       << ", Calificacion Promedio: " << episodio.obtenerCalificacionPromedio();
    return os;
}
