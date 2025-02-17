#include "subtarea.h"
#include "tarea.h"
#include "miembro.h"
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
    bool encontrado = false;
    for(std::list<Subtarea>::iterator it = this->subtareas.begin(); it != this->subtareas.end(); it++){
        if(it->getNombre()==nombre){
            encontrado = true;
            this->subtareas.erase(it);
            break;
        }
    }
    if(!encontrado){
        std::cout<<"La tarea '"<<nombre<<"' no se ha encontrado."<<std::endl;
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
std::string Tarea::getNombre(){
    return this->nombre;
}


Miembro::Miembro(std::string nombre, std::string rol){
    this->nombre = nombre;
    this->rol = rol;
}

void Miembro::agregarTarea(Tarea tarea){
    this->listaTareas.push_back(tarea);
}
void Miembro::eliminarTarea(std::string nombre){
    bool encontrado = false;
    for(std::list<Tarea>::iterator it = this->listaTareas.begin(); it != this->listaTareas.end(); it++){
        if(it->getNombre()==nombre){
            encontrado = true;
            this->listaTareas.erase(it);
            break;
        }
    }
    if(!encontrado){
        std::cout<<"El miembro '"<<this->nombre<<"' no tiene la tarea '"<<nombre<<"'."<<std::endl;
    }

}
void Miembro::toString(){
    std::cout<<"Nombre: "<<this->nombre<<"\nRol: "<<this->rol;
    std::cout<<"Tareas: \n";
    if(this->listaTareas.empty()){
        std::cout<<"El miembro aun no tiene tareas."<<std::endl;
    }
    else{
        int i = 1;
        for (std::list<Tarea>::iterator it = this->listaTareas.begin(); it != this->listaTareas.end(); it++, i++)
        {
            std::cout<<"Tarea #"<<i;
            it->mostrarTarea();
        }
    }
    
    
}