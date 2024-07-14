// The basic concept of selection sort is that we take the smallest valued no. and swap it with the no. at first index this way we sort using selection sort.

#include<iostream>
using namespace std;

void selectionSort(int arr[],int n){
    
    for(int i=0;i<=(n-2);i++){
        int min=i;
        for(int j=i;j<=n-1;j++){
            if(arr[j]<arr[min])
            swap(arr[min],arr[j]);
        }

    }

}

int main(){
    
    int n;
    cin>>n;
    int arr[n];
  
    
    // size of command tells how many bits have been occupied and for one integral value it is 4 bits thatst why we are dividing by 4;
for(int i=0;i<n ;i++) cin>>arr[i];

selectionSort(arr,n);

for(int i=0;i<=n-1;i++)
    cout<<arr[i]<<" ";

return 0;


}