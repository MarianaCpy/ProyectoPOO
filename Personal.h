#ifndef Personal_H
#define Personal_H

#include <string>
#include <sstream>

using namespace std;

//Definir la clase producto que sera la clase padre, junto con sus atributos y getters
class Personal{
    protected:
		int id;
        string nombre;
    public:
        Personal();
        Personal(int is, string nom);

        string getNombre() const;
        int getId() const;
		string toString() const;
};

//Constructor por default
Personal::Personal(){
	id=0;
    nombre="";

}

//Constructor con variables establecidas
Personal::Personal(int is, string nom){
    is=id;
    nom=nombre;
}

//Definir los getters conforme a la clase
string Personal::getNombre()const{
    return nombre;
}

int Personal::getId() const{
    return id;
}


//Establecer método para poder imprimir los getters del objeto
string Personal::toString()const{
    stringstream aux;
    aux << id << " - "<< nombre << "\n";
    return aux.str();
}

//Definir la clase perfume que es hija de la clase producto, pero con la variable aroma como diferencia
class Medico: public Personal{
    protected:
        string especialidad;
		string turno;

    public:

        Medico();
        Medico(int is, string nom, string esp, string t);

        int getId()const;
        string getNombre() const;
        string getEsp()const;
        string getTurno() const;
        string toString()const;
};

//Constructor por default
Medico::Medico(){
	id=0;
    nombre="";
    especialidad="";
    turno="";
}

//Constructor cuando las variables se reciben
Medico::Medico(int is, string nom, string esp, string t){
	id=is;
    nombre=nom;
    especialidad=esp;
    turno=t;

}

//Getters de la clase
int Medico::getId()const{
    return id;
}

string Medico::getNombre()const{
    return nombre;
}

string Medico::getEsp() const{
    return especialidad;
}

string Medico::getTurno() const{
    return turno;
}

//Definir un metodo para imprimir los getters y agregar funcionalidad
string Medico::toString()const{
    stringstream aux;
    aux << "Medico: "<< "\n"<<nombre << " - "<< id << " con especialidad: " << especialidad << " del Turno: " << turno << "\n";
    return aux.str();
}


//Establecer la clase labial con herencia de producto, con la diferencia de la variable color
class Enfermero: public Personal{
    protected:
        string area;
		string turno;

    public:

        Enfermero();
        Enfermero(int is, string nom, string a, string t);

        int getId()const;
        string getNombre() const;
        string getArea()const;
        string getTurno() const;
        string toString()const;
};

//Constructor por default
Enfermero::Enfermero(){
	id=0;
    nombre="";
    area="";
    turno="";
}

//Constructor con valores dados por el usuario
Enfermero::Enfermero(int is, string nom, string a, string t){
	id=is;
    nombre=nom;
    area=a;
    turno=t;
}

//Getters de la clase
int Enfermero::getId()const{
    return id;
}

string Enfermero::getNombre()const{
    return nombre;
}

string Enfermero::getArea() const{
    return area;
}

string Enfermero::getTurno() const{
    return turno;
}


string Enfermero::toString()const{
    stringstream aux;
    aux << "Enfermero: " << "\n"
    << nombre << "-"<< id << " se encuentra en el area de " << turno << " en el turno " << area << "\n";
    return aux.str();
}


//Definir clase sombras con herencia de la clase producto pero con la variable tonos
class Practicantes: public Personal{
    protected:
        float numHoras;

    public:

        Practicantes();
        Practicantes(int is, string nom, float nHras);

        string getNombre() const;
        float getHrs();
		string toString()const;
};

//Constructor por default
Practicantes::Practicantes(){
	id=0;
    nombre="";
	numHoras=0.0;
}

//Constructor recibiendo valores
Practicantes::Practicantes(int is, string nom, float nHras){
    id=is;
    nombre=nom;
    numHoras=nHras;
}

//Getters de la nueva clase
string Practicantes::getNombre()const{
    return nombre;
}


float Practicantes::getHrs(){
    return numHoras;
}

//Metodo para imprimir los getters de la clase
string Practicantes::toString()const{
    stringstream aux;
    aux << "Practicante:" << "\n"<< nombre << " - "<< id << " tiene un total de " << numHoras << " horas acumuladas " << "\n";
    return aux.str();
}

//Terminar la clase con herencia ff+
#endif

