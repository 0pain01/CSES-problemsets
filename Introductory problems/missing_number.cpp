#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    int n,i;
    cin>>n;

    int arr[n-1];

    for(i=0;i<n-1;i++){
        cin>>arr[i];
    }

    if(n==2){
        if(arr[0]==2)
            cout<<"1";
        if(arr[0]==1)
            cout<<"2";
    }
    else{
        sort(arr,arr+(n-1));


    for(i=0;i<n-2;i++){
        if((arr[i+1]-arr[i])>1){
            cout<<arr[i]+1;
            break;
        }
        if(i+1==n-2){
            cout<<arr[i+1]+1;
        }
    }

    }

    
    return 0;
}