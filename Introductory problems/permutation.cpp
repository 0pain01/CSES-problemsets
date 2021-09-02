#include<iostream>

using namespace std;

int main(){
    int n;
    cin>>n;

        int i=0;
        if(n==2 || n==3)
            cout<<"NO SOLUTION";
        else{
            while((n-i-1)>0){
            cout<<n-1-i<<" ";
            i=i+2;
        }
        i=0;
        while((n-i)>0){
            cout<<n-i<<" ";
            i=i+2;
        }
        }
    return 0;

}