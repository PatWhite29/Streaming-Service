#include "video.h"
#include <numeric> // Para std::accumulate

Video::Video(int id, const std::string& nombre, double duracion, const std::string& genero)
    : id(id), nombre(nombre), duracion(duracion), genero(genero) {}

void Video::agregarCalificacion(int calificacion) {
    calificaciones.push_back(calificacion);
}

double Video::obtenerCalificacionPromedio() const {
    if (calificaciones.empty()) {
        return 0.0;
    }
    int suma = std::accumulate(calificaciones.begin(), calificaciones.end(), 0);
    return static_cast<double>(suma) / calificaciones.size();
}

int Video::obtenerId() const {
    return id;
}
