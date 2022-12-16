#include <stdio.h>
#include <assert.h>

// constraints
#define MAXN 100000

// input data
long long N, i;
long long S[MAXN], P[MAXN];

int main() {
//  uncomment the following lines if you want to read/write from files
//  freopen("input.txt", "r", stdin);
//  freopen("output.txt", "w", stdout);
    long long sum1=0,sum2=0;
    assert(1 == scanf("%lld", &N));
    for(i=0; i<N; i++) {
        assert(1 == scanf("%lld", &S[i]));
        sum1=sum1+S[i];
        assert(1 == scanf("%lld", &P[i]));
        sum2=sum2+P[i];
    }

    // insert your code here
    double max=0,fin1,fin2;
    long long in;
    for(i=0;i<N;i++){
        fin1=sum1-S[i];
        fin2=sum2-P[i];
        if(max<fin1/fin2){
            max=fin1/fin2;
            in=i;
            if(max==1)
                break;
        }
    }
    printf("%lld\n", in); // print the result
    return 0;
}