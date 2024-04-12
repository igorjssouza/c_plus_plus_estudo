#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int a=5, b=2;

    int soma=a+b;
    cout << "Soma: "<<soma<<endl;
    // cout << "Soma: "<<a+b<<endl;
    int sub=a-b;
    cout<<"subtracao: "<<sub<<endl;

    int mult=a*b;
    cout<<"mutiplicacao: " << mult << endl;

    int quocdiv =a/b;
    cout<<"quociente da divisao: "<<quocdiv<<endl;

    int restodadivi=a%b;
    cout<<"resto da divisao: "<<restodadivi<<endl;

    float div=(float)a/(float)b;
    cout<<"divisao: "<<div<<endl;

    float pot = pow(a,b);
    cout<<"Potencia: "<< pot <<endl;

    //Incremento e decremento

    cout<< "a antigo " << a << endl;
    // a = a +1;
    // a+=1;
    // a++;
    // a+=3;
    // a=a-1;
    // a-=1;
    // a--;
    // a-=4;
    a*=3;
    cout<< "a novo " << a << endl;

    return 0;
}