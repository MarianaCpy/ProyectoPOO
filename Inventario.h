//definimos archivo inventario
#ifndef INVENTARIO_H
#define INVENTARIO_H

#include <string>
#include <sstream>

using namespace std;

//Clase inventario, clase padre
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

//Definir getter con respecto a la clase
double Inventario::getPrecio() const{
    return precio;
}

//Definir getter de acuerdo a la clase
string Inventario::getTipo(){
    return tipo;
}

//Método para poder imprimir los getters del objeto
string Inventario::toString()const{
    stringstream aux;
    aux << "Hay " << cantidad << tipo <<" de costo "<< precio<< "\n";
    return aux.str();
}

//Clase insumos que recibe la herencia de inventario, es la clase hija
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

//Constructor con valores
Insumos::Insumos(int c, double p,string t){
    cantidad=c;
    precio=p;
    tipo=t;
}

//Definir los getters conforme a la clase
int Insumos::getCantidad()const{
    return cantidad;
}

//Definir los getters conforme a la clase
double Insumos::getPrecio(){
    return precio;
}

//Definir los getters conforme a la clase
string Insumos::getTipo()const{
    return tipo;
}

//Establecer método para poder imprimir los getters del objeto
string Insumos::toString()const{
    stringstream aux;
    aux << "Hay " << cantidad << tipo << " de costo " << precio << endl;
    return aux.str();
}

//Clase mobiliario recibe herencia de clase inventario,
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

//Constructor que recibe valores
Mobiliario::Mobiliario(int c, double p,string t){
    cantidad=c;
    precio=p;
    tipo=t;
}

//Definir los getters conforme a la clase
int Mobiliario::getCantidad()const{
    return cantidad;
}

//Definir los getters conforme a la clase
double Mobiliario::getPrecio(){
    return precio;
}

//Definir los getters conforme a la clase
string Mobiliario::getTipo()const{
    return tipo;
}

//Establecer método para poder imprimir los getters del objeto
string Mobiliario::toString()const{
    stringstream aux;
    aux << "Hay " << cantidad << tipo << " con costo de " << precio << endl;
    return aux.str();
}

#endif // INVENTARIO_H_
