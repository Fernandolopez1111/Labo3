#include<iostream>

using namespace std;

int main (){
    string palabra ;

    cout << " Digite una palabra:  ";
    cin >> palabra;

    if (palabra.front()== palabra.back())
    {
        cout << "La letra del inicio y final son las mismas letras";
    }
    else
    {
        cout << "La letra del inicio y la del final son difrentes";
    
    }
    


}