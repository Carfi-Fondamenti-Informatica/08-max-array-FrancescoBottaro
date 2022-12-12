int Stampa_max (int sequenza [],int n) {
    int max;

    max = sequenza[0];

    for (int c=1; c<n; c++)
        if (sequenza[c] > max)
        {
            max= sequenza[c] ;
        }
  
    return max;
}

