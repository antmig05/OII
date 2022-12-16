#include <iostream>
#include <fstream>
#include <vector>
#include <utility>
#include <bits/stdc++.h>

using namespace std;

// input data
int N, i;
vector<int> D;

int main() {
//  uncomment the following lines if you want to read/write from files
//  ifstream cin("input.txt");
//  ofstream cout("output.txt");

    cin >> N;
    D.resize(N);
    for (int i=0; i<N; i++)
        cin >> D[i];
    
    // insert your code here
    sort(D.begin(),D.end());
    i=0;
    while(i<N)
    {
        if(D[i]==D[i+1])
        {
            cout<<("Impossible");
            return 0;
        }
        i++;
    }
    
    cout << "Ok"; // print the result
    return 0;
}