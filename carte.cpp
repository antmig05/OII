#include <fstream>
#include <iostream>
#include <vector>

using namespace std;

int scarta(int C, vector<bool> L, vector<bool> D, vector<bool> N){
    int conta=0;
    for(int i=0;i<C;i++){
        if(L[i]+D[i]+N[i]!=1){
            conta++;
        }
    }
    return conta;
}

