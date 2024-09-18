#ifndef VIDEO_H
#define VIDEO_H

#include <string>
#include <vector>

class Video {
public:
    Video(int id, const std::string& nombre, double duracion, const std::string& genero);
    virtual ~Video() = default;
    void agregarCalificacion(int calificacion);
    double obtenerCalificacionPromedio() const;
    virtual void mostrar() const = 0;
    int obtenerId() const;

protected:
    int id;
    std::string nombre;
    double duracion;
    std::string genero;
    std::vector<int> calificaciones;
};

#endif // VIDEO_H
