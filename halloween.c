/*
 * This template is valid both in C and in C++,
 * so you can expand it with code from both languages.
 * NOTE: it is recommended to use this even if you don't
 * understand the following code.
 */

#include <stdio.h>
#include <assert.h>

// constraints
#define MAXN 100000

// input data
int N, i;
int C[MAXN];
long long int M;

int main() {
//  uncomment the following lines if you want to read/write from files
//  freopen("input.txt", "r", stdin);
//  freopen("output.txt", "w", stdout);

    assert(2 == scanf("%d %lld", &N, &M));
    for(i=0; i<N; i++)
        assert(1 == scanf("%d", &C[i]));

    // insert your code here
    long long int conta=0;
        for(i=0;i<N;i++)
        {
            conta=conta+C[i];
            if(conta>=M)
            {
            printf("%d\n",i);
            return 0;
            }
        }
    long long int rest;
    rest=M%conta;
    conta=0;
    if(rest==0)
    {
        printf("%d\n",N-1);
        return 0;
    }
    else
    {
        for(i=0;i<N;i++)
        {
            conta=conta+C[i];
            if(conta>=rest)
            {
            printf("%d\n",i);
            return 0;
            }
        }
    }
     // print the result
    return 0;
}
