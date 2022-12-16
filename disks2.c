#include <stdio.h>
#include <assert.h>

// constraints
#define MAXN 100000

// input data
int N, T, i;
int A[MAXN], B[MAXN];

int main() {
//  uncomment the following lines if you want to read/write from files
//  freopen("input.txt", "r", stdin);
//  freopen("output.txt", "w", stdout);

    assert(2 == scanf("%d%d", &N, &T));
    for(i = 0; i < N; i++) {
        assert(2 == scanf("%d%d", &A[i], &B[i]));
    }

    // insert your code here
    int notte;
    for(i=0;i<N-1;i++)
    {
        notte=24-(B[i]-A[i+1]);
        if(notte>=T)
        {
            printf("%d",i);
            return 0;
        }
    }
    printf("%d", -1); // print the result
    
}
