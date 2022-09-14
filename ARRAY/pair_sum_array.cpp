#include<bits/stdc++.h>
using namespace std;

bool pairsum(int arr[],int n,int k){
    for(int i=0;i<n-1;i++){
      
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==k){
                cout<<i<<" "<<j<<endl;
                return 1;
            }
        }
    }
    return 0;
}

int main(){
int arr[]={12,14,25,27,31,1,3,5,8,9,11};
int k=58;
cout<<pairsum(arr,11,k)<<endl;


return 0;
}
