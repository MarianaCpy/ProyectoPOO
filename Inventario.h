#ifndef INVENTARIO_H
#define INVENTARIO_H

#include <string>
#include <sstream>

using namespace std;

//Definir la clase producto que sera la clase padre, junto con sus atributos y getters
class Inventario{
    protected:
        string tipo;
        int cantidad;
        double precio;
    public:
        Inventario();
        Inventario(int c, double p,string t);

        int getCant() const;
        double getPrecio() const;
        string getTipo();
        string toString()const;
};

//Constructor por default
Inventario::Inventario(){
    cantidad=0;
    precio=0;
    tipo="";
}

//Constructor con variables establecidas
Inventario::Inventario(int c, double p,string t){
    cantidad=c;
    precio=p;
    tipo=t;
}

//Definir los getters conforme a la clase
int Inventario::getCant()const{
    return cantidad;
}

double Inventario::getPrecio() const{
    return precio;
}

string Inventario::getTipo(){
    return tipo;
}

//Establecer método para poder imprimir los getters del objeto
string Inventario::toString()const{
    stringstream aux;
    aux << "Hay " << cantidad << tipo <<" de costo "<< precio<< "\n";
    return aux.str();
}

//Definir la clase perfume que es hija de la clase producto, pero con la variable aroma como diferencia
class Insumos: public Inventario{
    public:

        Insumos(int c, double p,string t);
        Insumos();

        string getTipo() const;
        double getPrecio();
        int getCantidad() const;
        string toString()const;
};

//Constructor por default
Insumos::Insumos(){
    cantidad=0;
    precio=0;
    tipo="";
}

Insumos::Insumos(int c, double p,string t){
    cantidad=c;
    precio=p;
    tipo=t;
}

//Definir los getters conforme a la clase
int Insumos::getCantidad()const{
    return cantidad;
}

double Insumos::getPrecio(){
    return precio;
}

string Insumos::getTipo()const{
    return tipo;
}

//Establecer método para poder imprimir los getters del objeto
string Insumos::toString()const{
    stringstream aux;
    aux << "Hay " << cantidad << tipo <<" de costo "<< precio<< endl;
    return aux.str();
}

class Mobiliario: public Inventario{
    public:

        Mobiliario(int c, double p,string t);
        Mobiliario();

        string getTipo() const;
        double getPrecio();
        int getCantidad() const;
        string toString()const;
};

//Constructor por default
Mobiliario::Mobiliario(){
    cantidad=0;
    precio=0;
    tipo="";
}

Mobiliario::Mobiliario(int c, double p,string t){
    cantidad=c;
    precio=p;
    tipo=t;
}

//Definir los getters conforme a la clase
int Mobiliario::getCantidad()const{
    return cantidad;
}

double Mobiliario::getPrecio(){
    return precio;
}

string Mobiliario::getTipo()const{
    return tipo;
}

//Establecer método para poder imprimir los getters del objeto
string Mobiliario::toString()const{
    stringstream aux;
    aux << "Hay " << cantidad << tipo <<" con costo de "<< precio<< endl;
    return aux.str();
}

#endif
