#ifndef TAREA_H
#define TAREA_H
#include <iostream>
#include "subtarea.h"
#include <list>
class Tarea
{
private:
    std::string nombre;
    std::string descripcion;
    std::string fecha_venc;
    std::list<Subtarea> subtareas;
public:
    Tarea(std::string nombre, std::string descripcion, std::string fecha_venc);
    void agregarSubTarea(Subtarea subtarea);
    void eliminarSubTarea(std::string nombre);
    void mostrarTarea();
};




#endif