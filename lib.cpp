#include "lib.h"
float Stampa_max (float sequenza [],int n) {
    float max;

    max = sequenza[0];

    for (int c=1; c<n; c++)
        if (sequenza[c] > max)
        {
            max= sequenza[c] ;
        }
  
    return max;
}

