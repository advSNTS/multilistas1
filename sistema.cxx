#include "tarea.h"
#include "subtarea.h"
#include "miembro.h"
#include <iostream>
#include <list>

void agregarSubTarea(Tarea &tarea);
void eliminarSubTarea(Tarea &tarea);
void agregarTarea(std::list<Tarea> &tareas);

int main(){
    std::list<Tarea> tareas;
    agregarTarea(tareas);
    
    return 0;
}

void agregarSubTarea(Tarea &tarea, std::string nombre, std::string descripcion){
    tarea.agregarSubTarea(Subtarea(nombre, descripcion));
}
void eliminarSubTarea(Tarea &tarea, std::string nombre){
    tarea.eliminarSubTarea(nombre); 
}
void agregarTarea(std::list<Tarea> &tareas){
    std::string nombre, descripcion, vencimiento;
    std::cout<<"Escriba nombre :";
    std::getline(std::cin, nombre);
    std::cout<<"\nEscriba descripcion: ";
    std::getline(std::cin, descripcion);
    std::cout<<"\nEscriba Fecha de venc.:";
    std::getline(std::cin, vencimiento);
    tareas.push_back(Tarea(nombre, descripcion, vencimiento));
    
}
