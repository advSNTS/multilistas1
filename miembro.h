#ifndef MIEMBRO_H
#define MIEMBRO_H
#include <iostream>
#include <list>
#include "tarea.h"
class Miembro
{
private:
    std::string nombre;
    std::string rol;
    std::list<Tarea> listaTareas;

public:
    Miembro(std::string nombre, std::string rol);
    void agregarTarea(Tarea tarea);
    void eliminarTarea(std::string nombre);
    void toString();
};

#endif