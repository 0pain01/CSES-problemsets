#include<iostream>
#include<vector>

using namespace std;

int main(){
    long n;
    cin>>n;

    cout<<n<<" ";

    while(n!=1 && n>0){
        if(n%2==0){
            n=n/2;
            cout<<n<<" ";
        }
        else {
            n=(3*n)+1;
            cout<<n<<" ";
        }
    }

    return 0;
}