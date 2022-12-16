#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#define MAXN 100000

int ordina(const void *pa,const void *pb)
{
    int a=*(int*)pa;
    int b=*(int*)pb;
    return (a-b);
}
int trova(int N, int P[]) 
{
    int i,el;
    for(i=0;i<2*N-1;i++)
    {
        if(P[i]!=P[i+1])
        {
            el=P[i];
        }
        else
            i++;
	}
    return el;
}

int P[2 * MAXN];
int main() {
    FILE *fr, *fw;
    int N, i;
    fr = fopen("input.txt", "r");
    fw = fopen("output.txt", "w");

    assert(1 == fscanf(fr, "%d", &N));
    for(i=0; i<2*N-1; i++)
        assert(1 == fscanf(fr, "%d", &P[i]));
    qsort(P,2*N-1,sizeof(int),ordina);
    fprintf(fw, "%d\n", trova(N, P));
    fclose(fr);
    fclose(fw);
    return 0;
}