#include "Persona.cpp"
#include <iostream>
using namespace std;

class Cliente : Persona {
	private : string nit;
	public : double cui;
	Cliente (){
	}
	
	Cliente (string nom, string ape, string dir, string fn, int tel, string n, double n2) : Persona(nom,ape,dir,fn,tel){
		nit = n;
		cui = n2;
	}
	void setNit(string n){nit = n;}
	void setNombres(string nom){nombres = nom;}
	void setApellidos(string ape){apellidos = ape;}
	void setDireccion(string dir){direccion = dir;}
	void setfecha_nacimiento(string fn){fecha_nacimiento = fn;}
	void setcui(double n2){cui = n2;}
	void setTelefono(int tel){telefono = tel;}

	string getNit(){return nit;}
	string getNombres(){return nombres;}
	string getApellidos(){return apellidos;}
	string getDireccion(){return direccion;}
	string getfecha_nacimiento(){return fecha_nacimiento;}
	double getcui(){return cui;}
	int getTelefono(){return telefono;}
	void mostrar(){
		cout<<"______________"<<endl;
		cout<<nit<<","<<cui<<","<<nombres<<","<<apellidos<<","<<direccion<<","<<fecha_nacimiento<<","<<telefono<<endl;
	}
};