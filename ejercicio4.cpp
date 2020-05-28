#include<iostream>

using namespace std;

int main (){
     string palabra;

     cout << "digite una palabra : ";
     cin >> palabra;

     if ( (palabra.size()%2)==0)
     {
         cout << "la palabra es par";
     } 
     else
     {
        cout << "la palabra es impar";
     }

     if (palabra.length()>10)
     {
          cout << " ,la palabra tiene mas de 10 letras";
     }
     else
     {
         cout << " ,la palabra tiene menos de 10 letras";
     }
     
     
}