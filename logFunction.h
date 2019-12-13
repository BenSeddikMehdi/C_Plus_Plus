//
// Created by El Mehdi Benseddik on 12/11/2019.
//

#ifndef CPLUSPLUS_LOGFUNCTION_H
#define CPLUSPLUS_LOGFUNCTION_H

#include <cmath>
using namespace std;
#define print(msg) (cout << msg << endl)

#define N 48
#define fs 48000


double Corr[2*N] ;

double sineWave[N] = {0}, shiftedSine[N] = {0};

void createSineWaves(double sine[], int k) {
    for (int i = k; i < N; ++i) {
        sine[i] = sin(2*M_PI*2000*i/fs);
    }
}

int corr(const double x[], const double y[]){

    int  k = 0;
    for (int l = -N; l < N; ++l) {
        k = l + N;
        Corr[k] = 0;
        for (int m = 0; m < N; ++m) {
            if((l+m) < 0 || (l+m) >=N)
                continue;
            else
                Corr[k] += x[m]*y[l+m];
        }
    }
    return 0;
}

#endif //CPLUSPLUS_LOGFUNCTION_H
