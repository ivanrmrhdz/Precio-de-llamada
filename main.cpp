//Carlos Ivan Romero Hernandez RH18030

//librerias necesarias para el programa

#include <iostream>
#include <windows.h>
#include <iomanip>

//acortar std::
using namespace std;

//DEclaracion de funciones
void l();//Limpia pantalla
void f();//Mensaje final del programa
float total(float min );//Calcula el total a pagar


int main(int argc, char** argv) {
	
	system("Color 3F");//Color de texto y fondo en consola
	
    float min;//Almacena los minutos que dura la llamada

	
	//Mensaje de inicio del programa
	cout<<"*******************************************"<<endl;
	cout<<"**                                       **"<<endl;
	cout<<"**        Bienvenido a TELEFONICA!       **"<<endl;
	cout<<"**                                       **"<<endl;
	cout<<"*******************************************"<<endl;
	l();
	
	
   	//Ciclo para autenticar si hay datos incorrectos	
	do{
	 
	//Se pide valores al usuario	
    
	cout<<"Ingrese el total de minutos por llamada: "<<endl;
    cin>>min;   
    l();
    //Comprobar si es un tipo de dato incorrecto 
    while(cin.fail()){
    	
    	cin.clear();
    	
    	cin.ignore(1000,'\n');
    	
    	cout<<"El dato ingresado no es correcto"<<endl;
        
    	
    	l();

        
	}
    		
	}while(min<1); //si el numero es menor que uno se repite do, si es mayor continua con la ejecucion
	
	
	//Condiciones para determinar el precio de la llamada
	if(min<=10){
		
		
		//Se informa la forma de cobro
		cout<<"El total se calculara con un  precio de $0.05 por minuto"<<endl;
		cout<<" "<<endl;
		cout<<" "<<endl;
		//Muestra el resultado
        cout<<"EL total a pagar por su llamada es de: $"<<total(min)<< fixed << setprecision(3)<<endl;//Llama a la funcion, envía los minutos y recive el return...
        
		f();//El final del programa
	}else if(min<=15){
		
		//Se informa la forma de cobro
		cout<<"El total se calculara con un  precio de $0.08 por minuto"<<endl;
		cout<<" "<<endl;
		cout<<" "<<endl;
		//Muestra el resultado
        cout<<"EL total a pagar por su llamada es de: $"<<total(min)<< fixed << setprecision(3)<<endl;//Llama a la funcion, envía los minutos y recive el return... 
        
		f();//El final del programa
	}else{
		
		//Se informa la forma de cobro
		cout<<"El total se calculara con un  precio de $0.10 por minuto"<<endl;
		cout<<" "<<endl;
		cout<<" "<<endl;
		//Muestra el resultado
        cout<<"EL total a pagar por su llamada es de: $"<<total(min)<< fixed << setprecision(3)<<endl;//Llama a la funcion, envía los minutos y recive el return...
        
        f();//El final del programa
		
	}
	
	system("pause");
}

//Acciones para limpiar la pantalla
void l(){
	cout<<" "<<endl;
	system("pause");
	system("cls");
}

//Funcion que calcula el total a pagar
float total (float min)//Recive los minutos de duracion de la llamada 
{
	
	//Usa las mismas condiciones de la funcion main para determinar el precio y lo procesa según corresponda
	if(min<=10){
		
		return min*0.05;	
				
	}else if(min<=15){
     	return min*0.08;	

	}else{
		return min*0.10;	
	}
	
}

//Contenido que se muestra al finalizar la muestra de resultados
void f(){
	
	l();
	cout<<"*******************************************"<<endl;
	cout<<"**                                       **"<<endl;
	cout<<"**  Gracias por usar nuestros servicios  **"<<endl;
	cout<<"**                                       **"<<endl;
	cout<<"*******************************************"<<endl;
	
}

