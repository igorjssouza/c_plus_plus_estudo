#include <iostream>
using namespace std;


void inscrever(){
    cout<<"O Jesus esta ficando muito bom em petrofisica\nlogo logo ele comecara a fazer pocos\n";
}

int soma(int x, int y){
    int soma;
    soma = x+y;
    return soma;

}

int main(){
    inscrever();
    inscrever();
    inscrever();
    int s;

    s=soma(5,4);
    cout<<"soma: "<< s<<endl;
    


    return 0;
}