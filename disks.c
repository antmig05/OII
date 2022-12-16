#include <stdio.h>
#include <assert.h>

// input data
long long A, B, T;

int main() {
//  uncomment the following lines if you want to read/write from files
     //freopen("input.txt", "r", stdin);
     //freopen("output.txt", "w", stdout);

    assert(3 == scanf("%lld %lld %lld", &A, &B, &T));
    
    // insert your code here
    long long int Day,stacco,nostacco;
    Day=T/24;
    stacco=B-A;
    nostacco=24-stacco;
    long long int conta=(Day*(stacco+nostacco))+nostacco;
    long long int contam=Day*stacco;
    while(conta<T){
        conta++;
        contam++;
    }
    printf("%lld\n", contam); // print the result
    return 0;
}