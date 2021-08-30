#include<iostream>

using namespace std;

int main(){
    string dna;
    cin>>dna;

    int i,max=0,cnt=1;

    int n = dna.size();

    for(i=0;i<n;i++)
    {
        if(dna[i]==dna[i+1])
        {
            cnt++;
        }
        else{
            if(max<cnt)
                max=cnt;
            cnt=1;
        }
    }

    cout<<max;
    return 0;
}