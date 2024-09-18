#include <iostream>
#include <vector>
#include "pelicula.h"
#include "serie.h"
#include "episodio.h"

void mostrarCatalogo(const std::vector<Video*>& catalogo) {
    for (const auto& video : catalogo) {
        video->mostrar();
    }
}

Video* buscarVideo(const std::vector<Video*>& catalogo, int id) {
    for (const auto& video : catalogo) {
        if (video->obtenerId() == id) {
            return video;
        }
    }
    return nullptr;
}

int main() {
    std::vector<Video*> catalogo = {
        new Pelicula(1, "Pelicula A", 120, "Accion"),
        new Pelicula(2, "Pelicula B", 160, "Drama"),
        new Pelicula(3, "Pelicula C", 200, "Terror"),
        new Serie(4, "Serie A", 3 * 5 * 45, "Drama/Accion"),
        new Serie(5, "Serie B", 5 * 10 * 45, "Anime"),
        new Serie(6, "Serie C", 2 * 20 * 45, "Drama")
    };

    Serie* serieA = dynamic_cast<Serie*>(catalogo[3]);
    if (serieA) {
        serieA->agregarEpisodio(new Episodio("Episodio 1", 1));
        serieA->agregarEpisodio(new Episodio("Episodio 2", 1));
    }

    bool continuar = true;
    while (continuar) {
        mostrarCatalogo(catalogo);

        int id;
        std::cout << "Ingresa el ID de la pelicula o serie que deseas calificar: ";
        std::cin >> id;

        Video* video = buscarVideo(catalogo, id);
        if (video) {
            int calificacion;
            std::cout << "Ingresa la calificacion (1-5): ";
            std::cin >> calificacion;
            video->agregarCalificacion(calificacion);
        } else {
            std::cout << "Video no encontrado." << std::endl;
        }

        char opcion;
        std::cout << "¿Deseas calificar otro video? (s/n): ";
        std::cin >> opcion;
        continuar = (opcion == 's' || opcion == 'S');
    }

    for (auto video : catalogo) {
        delete video;
    }

    return 0;
}