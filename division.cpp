#include<iostream>
#include<string>
using namespace std;

int main (void){
    int a,b;

    cout << "digite los numeros a dividir:"<<endl;
    cin >> a;
    cout << endl;
    cin >> b;

    if (a%b==0)
    {
        cout << "El numero"<< a << " es divisible entre b"<<endl; 
    }
    else
    {
        cout << "El numero" << a << " no es divisible entre b"<<endl;

    }
    
}