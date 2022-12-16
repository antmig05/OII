#include <stdio.h>
#include <assert.h>
#include <stdlib.h>

// constraints
#define MAXN 100000
int ordina(const void *pa,const void *pb){
    int a=*(int*)pa;
    int b=*(int*)pb;
    return (a-b);
}
// input data
int N1, N2, i;
int ID1[MAXN], ID2[MAXN];

int main() {
//  uncomment the following lines if you want to read/write from files
//  freopen("input.txt", "r", stdin);
//  freopen("output.txt", "w", stdout);

    assert(2 == scanf("%d %d", &N1, &N2));
    for(i=0; i<N1; i++)
        assert(1 == scanf("%d", &ID1[i]));
    for(i=0; i<N2; i++)
        assert(1 == scanf("%d", &ID2[i]));

    // insert your code here
    qsort(ID2,N2,sizeof(int),ordina);
    int co=0;
    for(int i=0;i<N1;i++){
        int  x=0,j=N2-1,m,pos=-1;
        
        do { 
	        m = (x + j)/2;
	        if(ID2[m] == ID1[i])  
		        pos = m;
	        else if (ID2[m] < ID1[i])
		        x = m + 1;
	        else
		        j = m - 1;
        } while(x <= j && pos == -1);
        if(pos!=-1)
            co++;
    }
    printf("%d\n", co); // print the result
    return 0;
}