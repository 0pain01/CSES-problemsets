#include<iostream>

using namespace std;

int main(){
    int n,i=0;
    cin>>n;
    int size=n;
    long arr[n];

    while(n--){
        cin>>arr[i];
        i++;
    }

    long res=0;

    for(int i=0;i<size-1;i++){
        if(arr[i]>arr[i+1]){
            res=res+arr[i]-arr[i+1];
            arr[i+1]=arr[i];
        }       
    }

    cout<<res;

    return 0;
    
}