#include <iostream>
#include <cmath>
#include <fstream>

using namespace std;

int main(){


fstream plik;
plik.open("lista_sadziedztwa.txt", std::ios::in | std::ios::out );
    
if( plik.good() == true )
{
    std::cout << "Uzyskano dostep do pliku!" << std::endl;
    //tu operacje na pliku
} else std::cout << "Dostep do pliku zostal zabroniony!" << std::endl;

std::string dane;
getline(plik, dane);
cout<<dane;


plik.close();
}
