#include <iostream>

using namespace std;


class Usuario {
private:
    // atributos (data members)
    int v1;

public:
    // métodos (methods)
    //Constructor: metodo encargado de la incialización
    Usuario(){
        v1 = 5;
    }

    void suma(int v){
        v1 = v1 + 2*v + 3;
    }

    void print(void){
        cout<<v1<<endl;
    }
};

int add(int x, int y){
   int s;
   s = x + y;
   return s;
}

int main()
{
    cout << add(3,4) << endl;

    // TipoDato nVble;
    // int x, y;
    Usuario sebas, juan; //Instancia dje una clase: una variable de tipo clase -> Objeto

    juan.print();
    //sebas.inicializar();

    sebas.print();
    sebas.suma(3);
    sebas.print();

    // sebas.v1 = 6;
    // sebas.print();
    return 0;
}
