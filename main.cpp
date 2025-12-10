#include <iostream>
#include <vector>
using namespace std;
void ordina(int N, vector<int> & v)
{
    int i, j, t;
    i=0;
    while(i<=N-1)
    {
        j=0;
        while(j<=N-2)
        {
            if(v[j]>v[j+1])
            {
                t=v[j];
                v[j]=v[j+1];
                v[j+1]=t;
            }
        }
    }
}
void contenutoVett(int N, vector<int> & v)
{
    int i;
    i=0;
    while(i<=N-1)
    {
       cout<<"Il "<<i+1<<"° numero del vettore è "<<v[i]<<endl;
        i=i+1;
    }
}
int main() {
    int N, i;
    N=3;
    vector<int> v, w;
    while(i<=N-1)
    {
        v[i]=random()%(N*10+1);
        w[i]=random()%(N*10+1);
        i=i+1;
    }
    ordina(N, v);
    ordina(N, w);
    contenutoVett(N, v);
    contenutoVett(N, w);
}

//LEGGERE LE ISTRUZIONI NEL FILE README.md
