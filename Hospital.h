//Iniciamos la definición del archivo hospital
#ifndef HOSPITAL_H
#define HOSPITAL_H

#include <iostream>

using namespace std;

#include "Personal.h"
#include "Inventario.h"

const int MAX = 100; //constante de tamaño de arreglos

//Clase hospital, composición clases definidas en personal e inventario
class Hospital{
    private:
        Medico med[MAX];
        Enfermero enf[MAX];
        Practicantes pract[MAX];
        Insumos insu[MAX];
        Mobiliario mob[MAX];
	
        int imed, ienf, ipract, ins, imob;
	
    public :
	Hospital();
	
	void creaMed();
	void creaPract();
	void creaEnf();
	void creaIns();
	void creaMob();
	
        void showMed();
	void showPact();
	void showEnf();
	void showInv();
	void showIns();
	void showMob();
	
       	void agregaMedico(int id,string nombre, string especialidad, string turno);
       	void agregaEnfermero(int id,string nombre, string turno, string area);
        void agregaPracticante(int id,string nombre, float numHrs);
        void agregaInsumo(int cantidad, double precio,string tipo);
        void agregaMobiliario(int cantidad, double precio,string tipo);

};

//Constructor
Hospital::Hospital(){
	imed = 0;
	ienf=0;
	ipract =0;
	ins=0;
	imob=0;
}

//Método para crear objetos de tipo médico
void Hospital::creaMed(){
	med[0]= Medico(1232, "Martha", "General","Mat");
	imed+=1;
	med[1]= Medico(2324, "Maria", "Pediatria","Noct");
	imed+=1;
	med[2]= Medico(5432, "Juan", "Oncologo","Mat");
}

//Método para crear objetos de tipo practicantes
void Hospital::creaPract(){
	pract[0]= Practicantes(234, "Estefania", 36.5);
	ipract += 1;
	pract[1]= Practicantes(124, "Alberto", 19.2);
	ipract += 1;
	pract[2]= Practicantes(214, "David", 52.3);
}

//Método para crear objetos de tipo enfermero
void Hospital::creaEnf(){
	enf[0] = Enfermero(8239, "Julio", "Mat", "Pediatria");
    	ienf += 1;
	enf[1] = Enfermero(1219, "Guadalupe", "Noct", "Urgencias");
   	ienf += 1;
	enf[2] = Enfermero(4312, "Humberto", "Mat", "Piso");
}

//Método para crear  objetos del tipo insumo
void Hospital::creaIns(){
	insu[0]= Insumos(2342,65,"Mascarillas");
	ins+=1;
	insu[1]= Insumos(23,1825,"Respiradores");
	ins+=1;
	insu[2]= Insumos(982,12,"Guantes");
}

//Metodo para crear objetos de tipo mobiliario
void Hospital::creaMob(){
	mob[0]= Mobiliario(4355,2344,"Camas");
	imob+=1;
	mob[1]= Mobiliario(123,18255,"Monitores");
}

//Método con un ciclo que recorre el arreglo e imprime cada objeto.
void Hospital::showEnf(){
	for(int i=0; i<=ienf ;i++){
		cout << enf[i].toString();
    }
}

//Método con un ciclo que recorre el arreglo e imprime cada objeto.
void Hospital::showMed(){
	for(int i=0; i<=imed;i++){
		cout << med[i].toString();
    }
}

//Método con un ciclo que recorre el arreglo e imprime cada objeto.
void Hospital::showPact(){
	for(int i=0; i<=ipract;i++){
		cout << pract[i].toString();
    }

}

//Ciclo que recorre el arreglo e imprime cada objeto
void Hospital::showIns(){
	for(int i=0; i<=ins ;i++){
		cout << insu[i].toString();
    }
}

//Ciclo que recorre el arreglo e imprime cada objeto.
void Hospital::showMob(){
	for(int i=0; i<=imob ;i++){
		cout << mob[i].toString();
    }
}

//Método para agregar objetos de tipo médico
void Hospital::agregaMedico(int id, string nombre, string especialidad, string turno){
	imed += 1;
	Medico aux(id, nombre, especialidad, turno);
	med[imed] = aux;
}

//Método para agregar objetos de tipo enfermero
void Hospital::agregaEnfermero(int id,string nombre, string turno, string area){
	ienf += 1;
	Enfermero aux(id, nombre, turno, area);
	enf[ienf] = aux;
}

//Método para agregar objetos de tipo practicante
void Hospital::agregaPracticante(int id, string nombre, float numHrs){
	ipract += 1;
	Practicantes aux(id, nombre, numHrs);
	pract[ipract] = aux;
}

//Método para agregar objetos de tipo insumo
void Hospital::agregaInsumo(int cantidad, double precio,string tipo){
	ins += 1;
	Insumos aux(cantidad,precio,tipo);
	insu[ins] = aux;
}

//Método para agregar objetos de tipo mobiliario
void Hospital::agregaMobiliario(int cantidad, double precio,string tipo){
	imob += 1;
	Mobiliario aux(cantidad,precio,tipo);
	mob[imob] = aux;
}


#endif // HOSPITAL_H_
