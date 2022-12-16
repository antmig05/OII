#include <stdio.h>
#include <assert.h>

// constraints
#define MAXN 100000

// input data
int N, M, i;
int P[MAXN], C[MAXN];

int main() {
//  uncomment the following lines if you want to read/write from files
//  freopen("input.txt", "r", stdin);
//  freopen("output.txt", "w", stdout);

    assert(2 == scanf("%d %d", &N, &M));
    for(i=0; i<N; i++)
        assert(1 == scanf("%d", &P[i]));
    for(i=0; i<N; i++)
        assert(1 == scanf("%d", &C[i]));

    // insert your code here
    int conta=0;
    for(int i=0;i<N;i++){
        if(M>=P[i]){
            conta++;
            M=M-P[i];
        }
        else{
            M=M+C[i];
        }
    }
    printf("%d %d\n", conta, M); // print the result
    return 0;
}