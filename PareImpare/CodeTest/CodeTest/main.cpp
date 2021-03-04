#include <iostream>

using namespace std;

int main()
{
    int Vector[100];
    int NumarCitit;
    int i;
    
    cout << "Introdu un numar (DE NUMAR VA DEPINDE DIMENSIUNEA VECTORULUI) : ";
    cin >> NumarCitit;
    
    for (i = 0; i < NumarCitit; i++)
    {
        cout << "introdu elemente in vector : ";
        cin >> Vector[i];
    }
    
    for (i = 0; i < NumarCitit; i++)
    {
        if (i % 2 == 1)
            cout << Vector[i] << " ";
            
    }
    
}
