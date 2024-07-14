#include<iostream>
using namespace std;

void print7(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=(n-i+1);j++){
            cout<<" ";
        }
        for(int j=0;j<=(2*i+1);j++){
            cout<<"*";
        }
        for(int j=0;j<=(n-i+1);j++){
            cout<<" ";
        }
        cout<<endl;
    }

}
void print8(int n){
    for(int i=0;i<=n;i++){
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        for(int j=0;j<(2*n-2*i+1);j++){
            cout<<"*";
        }
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        cout<<endl;
    }

}
void print9(int n){
    for(int i=0;i<=n;i++){
        for(int j=0;j<(n-i+1);j++){
            cout<<" ";
        }
        for(int j=0;j<(2*i+1);j++){
            cout<<"*";
        }
        for(int j=0;j<(n-i+1);j++){
            cout<<" ";
        }
        cout<<endl;

    }
    for(int i=0;i<=n;i++){
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        for(int j=0;j<(2*n-2*i+1);j++){
            cout<<"*";
        }
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        cout<<endl;
    }
}
void print10(int n){
    for(int i=1;i<=(2*n-1);i++){
        int stars=i;
        if(i>n)
           stars=2*n-i;

        for(int j=1;j<=stars;j++){
            cout<<"*";
        }
        cout<<endl;

    }
}
void print11(int n){ 
    for(int i=0;i<=n;i++){
        int bol=false;
         if(i%2==0) bol=true;
        for(int j=0;j<=i;j++){
           
            
            cout<<bol;
            bol=1-bol;
        }
        cout<<endl;

    }
}
void print12(int n){
    for(int i=0;i<=n;i++){
        for(int j=0;j<i;j++){
            cout<<(j+1);
        }
        for(int j=0;j<(2*n-2*i+1);j++){
            cout<<" ";
        }
        for(int j=(i-1);j>=0;j--){
            cout<<(j+1);
        }
        cout<<endl;
    }
}
void print14(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<char(j+65);

        }
        cout<<endl;

    }
}
void print15(int n){
for(int i=0;i<n;i++){
        for(int j=0;j<=(n-i);j++){
            cout<<char(j+65);

        }
        cout<<endl;

    }

}
void print16(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<char(i+65);

        }
        cout<<endl;

    }
}
void print17(int n){
    for(int i=0;i<=n;i++){
        for(int j=0;j<=(n-i);j++){
            cout<<" ";

        }
        for(int j=0;j<=(2*i+1);j++){
            cout<<char(j+65);

        }
        for(int j=0;j<=(n-i);j++){
            cout<<" ";

        }
        cout<<endl;
    }
}
void print18(int n){
    for(int i=0;i<=n;i++){
        for(int j=0;j<=i;j++){
            cout<<char(65+(n-i+j))<<" ";

        }
        cout<<endl;
    }
}
void print19(int n){
   for(int i=0;i<=n;i++){
        for(int j=0;j<(n-i+1);j++){
            cout<<"*";
        }
        for(int j=0;j<(2*i+1);j++){
            cout<<" ";
        }
        for(int j=0;j<(n-i+1);j++){
            cout<<"*";
        }
        cout<<endl;

    }
    for(int i=0;i<=n;i++){
        for(int j=0;j<i;j++){
            cout<<"*";
        }
        for(int j=0;j<(2*n-2*i+1);j++){
            cout<<" ";
        }
        for(int j=0;j<i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
void print20(int n){
     for(int i=1;i<=(2*n-1);i++){
        int stars=i;
        if(i>n)
           stars=2*n-i;

        for(int j=1;j<=stars;j++){
            cout<<"*";
        }
        cout<<endl;

         for(int i=0;i<=n;i++){
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        for(int j=0;j<(2*n-2*i+1);j++){
            cout<<"*";
        }
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        cout<<endl;
    }

    

        

    }

}
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
       print19(n);

    }

}
