#ifndef SUBTAREA_H
#define SUBTAREA_H

#include <iostream>


class Subtarea
{
private:
   std::string nombre;
   std::string descripcion;
public:
    Subtarea(std::string nombre, std::string descripcion);
    std::string getNombre();
};




#endif