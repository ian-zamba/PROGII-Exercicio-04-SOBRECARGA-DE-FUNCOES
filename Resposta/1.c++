#include <stdio.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <cmath>
using namespace std;
#define PI 3.14

char Escolha();
void PegarDados(double& n1, double& n2, char escolha);
double CalcArea(double n1);
double CalcArea(double n1, double n2);

int main(void) {

    char escolha;
    char continuar;
    do{
        double n1 = 0, n2 = 0;

        escolha = Escolha();

        PegarDados(n1, n2, escolha);

        if(n2 < 0){
            if(escolha == 'f'){
                cout << "Area: " << CalcArea(n1) * PI << "\n";
            }else {
                cout << "Area: " << CalcArea(n1) << "\n";
            }
        }else {
            cout << "Area: " << CalcArea(n1,n2) << "\n";
        }

        cout << "Deseja continuar? s / n\n";
        getchar();
        continuar = getch();
        cout << "\n";
    }while(continuar == 's');

    return 0;
}


char Escolha(){

    char escolha;

    cout << "Informe a Figura a ser calculada a area:\n";
    cout << "a. Triangulo\n";
    cout << "b. Quadrado\n";
    cout << "c. Losango\n";
    cout << "d. retangulo\n";
    cout << "e. trapezio\n";
    cout << "f. circulo\n";

    cin >> escolha;

    return escolha;
}

void PegarDados(double& n1, double& n2, char escolha){

    if(escolha == 'a'){
        cout << "informe a base do triangulo: ";
        cin >> n1;
        cout << "informe a altura do triangulo: ";
        cin >> n2;
    }else if(escolha == 'b'){
        cout << "informe o lado do quadrado: ";
        cin >> n1;
        n2 = -1;
    }else if(escolha == 'c'){
        cout << "informe a diagonal maior do losango: ";
        cin >> n1;
        cout << "informe a diagonal menor do losango: ";
        cin >> n2;
    }else if(escolha == 'd'){
        int aux;
        cout << "informe a base do retangulo: ";
        cin >> aux;
        n1 = aux * 2;
        cout << "informe a altura do retangulo: ";
        cin >> n2;
    }else if(escolha == 'e'){
        double aux;
        cout << "informe a base maior do trapezio: ";
        cin >> aux;
        n1 += aux;
        cout << "informe a base menor do trapezio: ";
        cin >> aux;
        n1 += aux;
        cout << "informe a altura do trapezio: ";
        cin >> n2;
    }else if(escolha == 'f'){
        double aux;
        cout << "informe o raio do circulo: ";
        cin >> aux;
        n1 = aux;
        n2 = -1;        
    }

}

double CalcArea(double n1){
    return pow(n1, 2);
}

double CalcArea(double n1, double n2){
    return n1*n2/2;
}

/*
                 .eeeeeeeee
                .$$$$$$$$P"
               .$$$$$$$$P
              z$$$$$$$$P
             z$$$$$$$$"
            z$$$$$$$$"
           d$$$$$$$$"
          d$$$$$$$$"
        .d$$$$$$$P
       .$$$$$$$$P
      .$$$$$$$$$.........
     .$$$$$$$$$$$$$$$$$$"
    z$$$$$$$$$$$$$$$$$P"
   -**********$$$$$$$P
             d$$$$$$"
           .d$$$$$$"
          .$$$$$$P"
         z$$$$$$P
        d$$$$$$"
      .d$$$$$$"
     .$$$$$$$"
    z$$$$$$$beeeeee
   d$$$$$$$$$$$$$*
  ^""""""""$$$$$"
          d$$$*
         d$$$"
        d$$*
       d$P"
     .$$"
    .$P"
   .$"
  .P"
 ."
/"

ZAMBA
*/