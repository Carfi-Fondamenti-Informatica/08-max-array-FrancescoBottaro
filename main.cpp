#include <iostream>
#include "lib.h"
using namespace std;
int main() {
    float sequenza [n];
    int n;
    cin >>n;
   
    for (int i = 0; i < n; i++)
    {
        cin >> sequenza [i];
    }
    cout<< Stampa_max (sequenza, n);
    return 0;
}
