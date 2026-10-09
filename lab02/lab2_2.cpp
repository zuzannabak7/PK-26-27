/*
Napisz program, który wczytuje dwie liczby w wybranej precyzji a następnie oblicza i wypisuje wyniki działań (suma, różnica, iloczyn i iloraz) z dokładnością do 12 miejsca po przecinku.

Wyjście:

Wybierz precyzję:
[1] pojedyncza precyzja
[2] podwójna precyzja
Wybór: 1
Podaj a: 1
Podaj b: 3
Suma: 4.000000000000
Różnica: -2.000000000000
Iloczyn: 3.000000000000
Iloraz: 0.333333343267


Wybierz precyzję:
[1] pojedyncza precyzja
[2] podwójna precyzja
Wybór: 2
Podaj a: 1
Podaj b: 3
Suma: 4.000000000000
Różnica: -2.000000000000
Iloczyn: 3.000000000000
Iloraz: 0.333333333333


Wybierz precyzję:
[1] pojedyncza precyzja
[2] podwójna precyzja
Wybór: 1
Podaj a: 0.12345
Podaj b: 10000000
Suma: 10000000.000000000000
Różnica: -10000000.000000000000
Iloczyn: 1234500.000000000000
Iloraz: 0.000000012345


Wybierz precyzję:
[1] pojedyncza precyzja
[2] podwójna precyzja
Wybór: 3
Niepoprawny wybór

*/


#include <iostream>

using namespace std;

int main(){

    cout << "Wybierz precyzję: " <<endl; 
    cout << "[1] pojedyncza precyzja" <<endl;
    cout << "[2] podwójna precyzja" <<endl;

    int w;
    cin >> w;
    cout << "Wybór: "<< w << endl; 


    if (w==1){
        float a,b;
        cout << "Podaj a: " << endl;
        cin >> a;
        cout << "Podaj a: " << a << endl;

        cout << "Podaj b: " << endl;
        cin >> b;
        cout << "Podaj b: " << b << endl;


    }


    else if (w==2){
        double a,b;
        cout << "Podaj a: " << endl;
        cin >> a;
        1
        

        cout << "Podaj b: " << endl;
        cin >> b;
        cout << "Podaj b: " << b << endl;

    }


    else{
        cout <<"Wybór: " << w << endl;
        cout << "Niepoprawny wybór" << endl;
    }




    return 0;
}

