#include "subtarea.h"
#include "tarea.h"

Subtarea::Subtarea(std::string nombre, std::string descricion){
    this->nombre = nombre;
    this->descripcion = descripcion;
}
Tarea::Tarea(std::string nombre, std::string descripcion, std::string fecha_venc)
{
    this->nombre = nombre;
    this->descripcion = descripcion;
    this->fecha_venc = fecha_venc;
}