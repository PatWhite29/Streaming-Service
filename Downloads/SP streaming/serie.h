#ifndef SERIE_H
#define SERIE_H

#include "video.h"
#include "episodio.h"
#include <vector>

class Serie : public Video {
public:
    Serie(int id, const std::string& nombre, double duracion, const std::string& genero);
    void agregarEpisodio(Episodio* episodio);
    void mostrar() const override;

private:
    std::vector<Episodio*> episodios;
};

#endif // SERIE_H
