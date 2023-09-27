#include<iostream>
using namespace std;

void pattern1(int n){
 for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<< "*";
            }
        cout<<"\n";
    }
    cout<< endl;

}
void pattern2(int n){

for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
                cout<< "*";
        }
        cout<<"\n";
    }
    cout<< endl;
}

void pattern3(int n){
for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
                cout<< "*";
        }
        cout<<"\n";
    }
    cout<< endl;
}

void pattern4(int n){
for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
                cout<< j;
        }
        cout<<"\n";
    }
    cout<< endl;
}
void pattern5(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
                cout<< i;
        }
        cout<<"\n";
    }
    cout<< endl;
}
void pattern6(int n){
for(int i=1;i<=n;i++){
    for(int j=1;j<=n-i+1;j++){
        cout<< j;
    }
    cout<<endl;
}
cout<<endl;
}
void pattern7(int n){
 for (int i=0;i<n;i++){
    for(int j=0; j<n-i-1;j++){
        cout<<" ";
    }
    for(int j=0;j<2*i+1;j++){
        cout<<"*";
    }
    for(int j=0; j<n-i-1;j++){
        cout<<" ";
    }
    cout<< endl;
    }
    cout<< endl;
 }

void pattern8(int n){

for(int i=0;i<n;i++){
    for(int j=0;j<i;j++){
        cout<< " ";
    }
    for(int j=0;j<2*n-(2*i+1);j++){
        cout<< "*";
    }
    for(int j=0;j<i;j++){
        cout<< " ";
}
cout<< endl;
}

}

void pattern9(int n){


 for(int i=0;i<n;i++){
 for(int j=0;j<n-i-1;j++){
    cout<<" ";
 }
 for(int j=0;j<2*i+1;j++){
    cout<< "*";
 }
 for(int j=0;j<n-i-1;j++){
    cout<<" ";
 }
 cout<< endl;
}
 for(int i=0;i<n;i++){
 for(int j=0;j<i;j++){
    cout<<" ";
 }
 for(int j=0;j<2*n-(2*i+1);j++){
    cout<< "*";
 }
 for(int j=0;j<i;j++){
    cout<<" ";
 }
 cout<<endl;
 }
}

void pattern10(int n){
  for(int i=0;i<=2*n;i++){
    int stars=i;
    if(i>n){
        stars=2*n-i;
    }
        for(int j=0;j<=stars;j++){
            cout<<"*";
        }

    cout<<endl;
  }
}
void pattern11(int n){
int c;
for (int i=0;i<n+1;i++){
    if (i%2==0){
        c=1;
    }
    else{
        c=0;
    }
    for (int j=0;j<i;j++){
        cout<< c;
        c=1-c;
    }
    cout<<endl;
}
cout<<endl;
}

void pattern12(int n){
    int space=2*(n-1);
for(int i=1;i<=n;i++){
    for(int j=1;j<i;j++){
        cout<<j;
    }
    for(int j=1;j<=space;j++){
        cout<<" ";
    }
    for(int j=i-1;j>=1;j--){
        cout<<j;
    }
    cout<<endl;
    space-=2;
}
}
void pattern14(int n){
for(int i=0;i<n;i++){
    for(char j='A';j<='A'+i;j++){
        cout<<j<<" ";
    }
    cout<<endl;
}
cout<<endl;
}

void pattern15(int n){
for (int i=1;i<=n;i++){
    for(char j='A';j<='A'+(n-i-1);j++){
        cout<< j<<" ";
    }
    cout<<endl;
}
cout<<endl;
}

void pattern16(int n){
    char ch='A';
for(int i=0;i<n;i++){
    for(int j=0;j<i;j++){
        cout<<ch;
    }
    ch='A'+i;
    cout<<endl;
}
cout<<endl;
}


int main(){
int n=5;
pattern1(n);
pattern2(n);
pattern3(n);
pattern4(n);
pattern5(n);
pattern6(n);
pattern7(n);
pattern8(n);
pattern9(n);
pattern10(n);
pattern11(n);
pattern12(n);
pattern14(n);
pattern15(n);
pattern16(n);
}

