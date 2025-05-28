#include <iostream>
#include <math.h>
using namespace std;

void add(int n, float* x, float* y){
    for (int i=0; i<n; i++){
        y[i] += x[i];
    }
}

int main(void){
    int N = 1<<20;
    
    float* x = new float[N];
    float* y = new float[N];
    for(int i=0; i<N; i++){
        x[i] = 1.0f;
        y[i] = 2.0f;
    }

    float maxError = 0.0f;
    for (int i=0; i<N; i++){
        maxError = fmax(maxError,fabs(y[i]-3.0f))
        if (maxError > 0)
            cout << "Max Error: " << maxError;
    }

    // Run kernel on 1M elements on the CPU
    add(N, x, y);
    
    delete [] x;
    delete [] y;
    return 0;
}