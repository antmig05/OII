#include <cassert>
#include <iostream>
#include <utility>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
int presta(int N, int C, vector<int> P){
    int conta=0,amici=0;
    
    sort(P.begin(),P.end());
    for(int i=N-1;i>0;i--){
        
        if(conta<C){
            conta=conta+P[i];
            amici++;
        }
        else
        return amici;
    }
    
}

