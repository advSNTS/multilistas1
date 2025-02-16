#include "subtarea.h"
#include "tarea.h"
#include <list>

Subtarea::Subtarea(std::string nombre, std::string descricion){
    this->nombre = nombre;
    this->descripcion = descripcion;
}

std::string Subtarea::getNombre(){
    return this->nombre;
}


Tarea::Tarea(std::string nombre, std::string descripcion, std::string fecha_venc)
{
    this->nombre = nombre;
    this->descripcion = descripcion;
    this->fecha_venc = fecha_venc;
}

void Tarea::agregarSubTarea(Subtarea subtarea){
    this->subtareas.push_back(subtarea);
}

void Tarea::eliminarSubTarea(std::string nombre){
    for(std::list<Subtarea>::iterator it = this->subtareas.begin(); it != this->subtareas.end(); it++){
        if(it->getNombre()==nombre){
            this->subtareas.erase(it);
            break;
        }
    }
}
void Tarea::mostrarTarea()
{
    std::cout << "Tarea: " << this->nombre << std::endl;
    std::cout << "Descripción: " << this->descripcion << std::endl;
    std::cout << "Fecha de vencimiento: " << this->fecha_venc << std::endl;
    std::cout << "Subtareas:" << std::endl;

    if (subtareas.empty())
    {
        std::cout << "  No hay subtareas." << std::endl;
    }
    else
    {
        for (std::list<Subtarea>::iterator it = this->subtareas.begin(); it != this->subtareas.end(); it++)
        {
            std::cout << "  - " << it->getNombre() << std::endl;
        }
    }
}