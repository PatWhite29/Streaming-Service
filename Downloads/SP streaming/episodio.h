#ifndef EPISODIO_H
#define EPISODIO_H

#include <string>
#include <vector>
#include <iostream>

class Episodio {
public:
    Episodio(const std::string& titulo, int temporada);
    void agregarCalificacion(int calificacion);
    double obtenerCalificacionPromedio() const;
    void mostrar() const;
    friend std::ostream& operator<<(std::ostream& os, const Episodio& episodio);

private:
    std::string titulo;
    int temporada;
    std::vector<int> calificaciones;
};

#endif // EPISODIO_H
