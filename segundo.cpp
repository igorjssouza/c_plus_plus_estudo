#include <iostream>

using namespace std;

int main(){
    int inteiro;
    inteiro = 5.2;
    cout << inteiro << endl;

    float real;
    real=5.2e99;
    cout << real << endl;

    double real2;
    real2 =2.2e307;
    cout << real2 << endl;

    bool booleano;
    booleano = false;
    cout<< booleano<< endl;

    char letra;
    letra = 'b';
    cout<<letra<<endl;

    string palavra;

    palavra="palavra cantada";
    cout<<palavra<<endl;

    int idade;
    cout<<"Qual sua idade?"<<endl;
    cin>>idade;
    cout<< "Idade: "<< idade<< " anos " <<endl;

    
    return 0;
}