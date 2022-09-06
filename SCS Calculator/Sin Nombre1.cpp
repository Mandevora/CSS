#include <iostream>

using namespace std;

class preparatoria{
	public:
	int smc; //seleccion de menu en clases
	
	void s_dos(){
	float a, b, c, x, y, z;
	float resultado;
	float radian = 57.29;
	
	cout<<"\nPorfavor seleccione el tema a ver:"<<endl;
	cout<<"Areas, Volumenes y Perimetros   [1]"<<endl;
	cout<<"Convercion de radianes a grados [2]"<<endl;
	cin>>smc;
	
	switch(smc){
		case 1: //Areas, volumenes y perimetros
			cout<<"\nQue desea hacer?"<<endl;
			cout<<"Calcular el area de una figura         [1]"<<endl;
			cout<<"Calcular el perimetro de una figura    [2]"<<endl;
			cout<<"Calcular el volumen de una figura      [3]"<<endl;
			cin>>smc;
			
			switch(smc){
				case 1:
					cout<<"\nSeleccione el tipo de figura con el que desea trabajar:"<<endl;
					cout<<"Triangulo  [1]"<<endl;
					cout<<"Rectangulo [2]"<<endl;
					cout<<"Cuadrado   [3]"<<endl;
					cout<<"Pentagono  [4]"<<endl;
					cout<<"Exagono    [5]"<<endl;
					cout<<"Como funciona?"<<endl;
					cin>>smc;
					
					switch (smc){
						case 1://triangulo
							cout<<"__________________________________________"<<endl;
							cout<<"\nIntrodusca el valor de la base (b): ";
							cin>>x;
							cout<<"\nIntrodusca el valor de la altura (h): ";
							cin>>y;
							resultado = x * y / 2;
							cout<<"\nEl area es: "<<resultado<<"cm"<<endl;
							//formula:
							cout<<"\n\nFormula:"<<endl;
							cout<<"A = b . h"<<endl;
							cout<<"---------"<<endl;
							cout<<"    2    "<<endl;
							cout<<"\nFormula sustituida:"<<endl;
							cout<<"A = "<<x<<" . "<<y<<endl;
							cout<<"---------"<<endl;
							cout<<"    2    "<<endl;
							cout<<"\nA = "<<resultado<<"cm"<<endl;
							cout<<"__________________________________________"<<endl;
						break;
						
						case 2://rectangulo
							cout<<"__________________________________________"<<endl;
							cout<<"Introdusca el valor de la base (b): ";
							cin>>x;
							cout<<"\nIntrodusca el valor de la altura (h): ";
							cin>>y;
							resultado = x * y;
							cout<<"\nEl area es: "<<resultado<<"cm"<<endl;
							//formula:
							cout<<"\n\nFormula:"<<endl;
							cout<<"A = b . h"<<endl;
							cout<<"\nFormula sustituida:"<<endl;
							cout<<"A = "<<x<<" . "<<y<<endl;
							cout<<"\nA = "<<resultado<<"cm"<<endl;
							cout<<"__________________________________________"<<endl;
						break;
						
						case 3://cuadrado
							cout<<"______________________________________________________________"<<endl;
							cout<<"Introdusca el valor de uno de los lados de la figura (l): ";
							cin>>x;
							resultado = x * 4;
							cout<<"\nEl area es: "<<resultado<<"cm"<<endl;
							//formula:
							cout<<"\n\nFormula:"<<endl;
							cout<<"A = l . l"<<endl;
							cout<<"\nFormula sustituida:"<<endl;
							cout<<"A = "<<x<<" . "<<x<<endl;
							cout<<"\nA = "<<resultado<<"cm"<<endl;
							cout<<"______________________________________________________________"<<endl;
						break;
						
						case 4:
							cout<<"______________________________________________________________"<<endl;
							cout<<"Introdusca el valor de uno de los lados de la figura (l): ";
							cin>>x;
							cout<<"\nIntrodusca el valor del apotema (a): ";
							cin>>y;
							a = x * y;
							resultado = ((x*5) * y) / 2;
							cout<<"\nEl area es: "<<resultado<<"cm"<<endl;
							//formula
							cout<<"\n\nFormula:"<<endl;
							cout<<"A = P . a"<<endl;
							cout<<"---------"<<endl;
							cout<<"    2    "<<endl;
							cout<<"\nFormula sustituida:"<<endl;
							cout<<"P = l . 5"<<endl;
							cout<<"P = "<<x<<" . "<<y<<endl;
							cout<<"P = "<<a<<"cm"<<endl;
							cout<<"\nA = "<<a<<" . "<<y<<endl;
							cout<<"----------"<<endl;
							cout<<"     2    "<<endl;
							cout<<"\nA = "<<resultado<<"cm"<<endl;
							cout<<"______________________________________________________________"<<endl;
						break;
					}
				break;
				
				case 2:
					
				break;
			}
		break;
		
		case 2:	//convercion de radianes a grados
			cout<<"\nQue desea hacer?"<<endl;
			cout<<"Convertir radianes a grados [1]"<<endl;
			cout<<"Convertir grados a radianes [2]"<<endl;
			cout<<"Como funciona?              [3]"<<endl;
			cin>>smc;
			
			switch (smc){
				case 1:
					cout<<"\nDigite el numero de radianes que posee: ";
					cin>>x;
					resultado = x * radian / 1;
					cout<<"\n\nEl resultado es: "<<resultado<<endl;
				break;
				case 2:
					cout<<"\nDigite el numero de grados que posee: ";
					cin>>x;
					resultado = x / radian;
					cout<<"\n\nEl resultado es: "<<resultado<<endl;			
				break;
				
				case 3:
					cout<<"__________________________________________________________________"<<endl;
					cout<<"\nPara convertir radianes a grados, utilizaremos la"<<endl;
					cout<<"siguiente formula: x * 57.29 / 1"<<endl;
					cout<<"\nDe forma simplificada, X representa el valor que nosotros"<<endl;
					cout<<"convertiremos a grados, y 57.29 es el valor de un radian."<<endl;
					cout<<"\nPor lo que, si el ejercicio nos pide convertir 39.68 rad. a grados"<<endl;
					cout<<"sustituiremos la formula de esta forma: 39.68 * 57.29 / 1"<<endl;
					
					cout<<"Para convertir grados a radianes, utilizaremos la"<<endl;
					cout<<"siguiente formula: x / 57.29"<<endl;
					cout<<"\nDe igual forma como en el anterior ejercicio, 57.29 es el valor"<<endl;
					cout<<"de un radian."<<endl;
					cout<<"\nPor lo que, si el ejercicio nos pide convertir 79.67 grados a radianes,"<<endl;
					cout<<"sustituiremos la formula de esta forma: 79.67 / 57.29"<<endl;
					cout<<"__________________________________________________________________"<<endl;
				break;
			}
		break;
	}
}

	
};

int main(){
	int sm; //seleccion de menu
	
	
	//menu principal
	cout<<"Calculadora para preparatoria"<<endl;
	cout<<"Porfavor seleccione su semestre:"<<endl;
	cout<<"Primer semestre    [1]"<<endl;
	cout<<"Segundo semestre   [2]"<<endl;
	cout<<"Tercer semestre    [3]"<<endl;
	cout<<"Cuarto semestre    [4]"<<endl;
	cin>>sm;
	
	switch (sm){
		case 1:
			
		break;
		
		case 2:
			preparatoria primer_semestre;
			primer_semestre.s_dos();
		break;
	}
	
		
	return 0;
}
