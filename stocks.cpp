#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

// input data
int N;
vector<int> V, S;

int main() {
//  uncomment the following lines if you want to read/write from files
//  ifstream cin("input.txt");
//  ofstream cout("output.txt");

    cin >> N;
    V.resize(N);
    S.resize(N);
    for (int i=0; i<N; i++)
        cin >> V[i];
    for (int i=0; i<N; i++)
        cin >> S[i];

    // insert your code here
    int max=0,s=0,s2=0;
    for(int i=0;i<N;i++){
        if(S[i]==1){
            if(V[i]>=max){
                s=s+V[i];
                max=V[i];
            }
            else {
                i--;
                if(s>s2){
                    s2=s;
                }
                s=0;
                max=0;
            }
        }
        else {
            
            if(s>s2){
                s2=s;
            }
            s=0;
            max=0;
        }
    }
    if(s>s2){
        s2=s;
    }
    cout << s2 << endl; // print the result
    return 0;
}