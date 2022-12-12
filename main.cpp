#include <iostream>
#include "lib.h"
using namespace std;
int main() {
    int n;
    cin >>n;
    float sequenza [n];
    for (int i = 0; i < n; i++)
    {
        cin >> sequenza [i];
    }
    cout<< Stampa_max (sequenza, n);
    return 0;
}
