#ifndef PELICULA_H
#define PELICULA_H

#include "video.h"

class Pelicula : public Video {
public:
    Pelicula(int id, const std::string& nombre, double duracion, const std::string& genero);
    void mostrar() const override;
};

#endif // PELICULA_H
