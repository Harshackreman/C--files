#include<bits/stdc++.h>
using namespace std;

void reversingArray(int i,int n, int arr[]){
    if(i>=n/2)
return;
swap(arr[i],arr[n-i-1]);
return reversingArray(i+1,n,arr);
}

bool fxn(int i,string &s){

int n=s.size();
 if(i>= n/2) return true;
 if(s[i]!=s[n-1-i] ) return false;
 return fxn(i+1,s);


}

int main(){

   /* int n,i;
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++)
   cin>>arr[i];


reversingArray(0,n,arr);

for(int i=0;i<n;i++) cout<<arr[i]<<" ";*/
string s="tenet";
if(fxn(1,s)==1)
cout<<"Pallindrome";
else
cout<<"Not a pallindrome";



}