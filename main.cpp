#include <iostream>
#include "Personal.h"
#include "Hospital.h"
#include "Inventario.h"

using namespace std;


//Definir el menú principal como void
void menuPrincipal(){
    cout<<"Selecciona una opcion:"<<endl;
    cout<<"1.Agregar personal y/o inventario"<<endl;
    cout<<"2.Ver resumen de medicos disponibles"<<endl;
    cout<<"3.Ver resumen de enfermeros disponibles"<<endl;
    cout<<"4.Ver resumen de practicantes disponibles"<<endl;
    cout<<"5.Ver resumen de todo el personal"<<endl;
    cout<<"6.Ver lista de mobiliario disponible"<<endl;
    cout<<"7.Ver lista de insumos disponibles"<<endl;
    cout<<"8.Ver lista completa de inventario"<<endl;
    cout<<"9.Salir"<<endl;
}

//Definir el segundo menú para lo que se va a agregar
void menuAgregar(){
    cout<<"Que tipo de personal deseas agregar:"<<endl;
    cout<<"1.Practicante"<<endl;
    cout<<"2.Medico"<<endl;
    cout<<"3.Enfermero"<<endl;
    cout<<"4.Insumos"<<endl;
    cout<<"5.Mobiliario"<<endl;
}


//Definir el main
int main(int argc, char* argv[]){

	Hospital hosp;
	hosp.creaMed();
	hosp.creaEnf();
	hosp.creaPract();
	hosp.creaIns();
	hosp.creaMob();
	string nombret,areat,espet,turnot, tipoi;
	int idt,cantidadi;
	double precioi;
	float numhrst;


    int opcion = 0;
    int opciona=0;
    int opcionb=0;
    //Poner un while para que el menu se siga imprimiendo hasta que se seleccione salir
    while(opcion < 9 && opcion > -1){
        //Imprimir menu principal
		menuPrincipal();

        //Input para opciones del menu
		cin >> opcion;
        //Establecer un switch para que el menu tenga mayot funcionalidad
		switch(opcion){
            //Definir cada caso segun las opciones del menu principal
			case 2:

                hosp.showMed();

			break;

			case 3:
                hosp.showEnf();

			break;

			case 4:
                hosp.showPact();

			break;

			case 5:
                hosp.showEnf();
                hosp.showMed();
                hosp.showPact();

			break;

			case 6:
                hosp.showMob();

			break;

			case 7:
                hosp.showIns();

            break;

            case 8:
                hosp.showMob();
                hosp.showIns();

            break;

			case 1:
			    //Imprimir el menu para agregar articulos al inventario
			    menuAgregar();
			    //Input opcion de agregar
			    cin>>opciona;
                    //Switch para que el segundo menu funcione
                    switch(opciona){
                        //Establecer la opcion 1 y emplear el metodo de agregar
                        case 1:
                            cout<< "Cual es el ID del Practicante: \n " ;
                            cin >> idt;
                            cout<< "Nombre: \n " ;
                            cin >> nombret;
                            cout<< "Numero de horas:\n";
                            cin>> numhrst;
                            hosp.agregaPracticante(idt,nombret,numhrst);
                            cout<<"Practicante agregado con EXITO\n";
                           break;

                        //Establecer la opcion 2 y el metodo de agregar
                        case 2:
                            cout<< "Cual es el ID del medico: \n " ;
                            cin >> idt;
                            cout<< "Nombre: \n " ;
                            cin >> nombret;
                            cout<< "Especialidad: \n ";
                            cin>> espet;
                            cout<<"Turno: \n";
                            cin >> turnot;
                            cout<<"Medico agregado con EXITO\n";
                            hosp.agregaMedico(idt,nombret,espet,turnot);
                        break;

                        case 3:
                            cout<< "Cual es el ID del enfermero: \n " ;
                            cin >> idt;
                            cout<< "Nombre: \n " ;
                            cin >> nombret;
                            cout<< "Area: \n ";
                            cin>> areat;
                            cout<<"Turno: \n";
                            cin >> turnot;
                            cout<<"Enfermero agregado con EXITO\n";
                            hosp.agregaEnfermero(idt,nombret,areat,turnot);
                        break;

                        case 5:
                            cout<< "Que tipo de mobiliario desea agregar"<<endl;
                            cin >> tipoi;
                            cout<< "Cantidad: "<<endl;
                            cin >> cantidadi;
                            cout<< "Precio: "<<endl;
                            cin>> precioi;
                            hosp.agregaMobiliario(cantidadi,precioi,tipoi);
                            cout<<"Mobiliario agregado con EXITO\n";
                        break;

                        case 4:
                            cout<< "Que tipo de insumo desea agregar"<<endl;
                            cin >> tipoi;
                            cout<< "Cantidad: "<<endl;
                            cin >> cantidadi;
                            cout<< "Precio: "<<endl;
                            cin>> precioi;
                            hosp.agregaInsumo(cantidadi,precioi,tipoi);
                            cout<<"Insumo agregado con EXITO\n";
                        break;




                    }




		}
    }
}
