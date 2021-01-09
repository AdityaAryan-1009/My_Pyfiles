#include<bits/stdc++.h>
using namespace std;
// function for printing sum till n
int sumtill(int n){
    int ans =  0;
    for(int i=1;i<=n;i++){
        ans+=i;
    }
    return ans; 
}

// Function for telling if three number are pythagorean triplet or not
bool py_tri(int x,int y, int z){
    int a= max(x,max(y,z));
    int b,c;
    if(a==x){
        b=y;
        c=z;
    }
    else if(a==y){
        b=x;
        c=z;
    }
    else{
        b=x;
        c=y;
    }

    if(a*a == b*b+c*c){
        return true;
    }
    else {
        return false;
    }
}

// Function to covert binary to decimal
int btod(int x){
    int ac=0;
    int i= 1;
    while(x>0){
        int ld=x%10;
        ac += ld*i;
        i*=2;
        x/=10;
    }
    return ac;
}

// Function to convert octel to decimal
int OcteltoDecimal(int n){
    int ans = 0;
    int i=0;
    while(n>0){
        int ld=n%10;
        ans += ld*i;
        i+=1;
        n/=10;
    }
    return ans;
}

// Function to convert Hexadecimal to decimal
int HexadecimaltoDecimal(string n){
    int a=0;
    int x=1;
    int s= n.size();
    for(int i=s-1;i>=0;i--){
        if(n[i]>='0' && n[i]<='9'){
            a+=x*(n[i]-'0');
        }
        else if(n[i]>='A' && n[i]<='F'){
            a+=x*(n[i]-'A' +10);
        }
        x*=16;
    }
    return a;
}

// Function to convert decimal to binary
int DecimaltoBinary(int n){
    ans=0;
    int x=1;
    while(n>=0){
        /*
        could not understand after it 
        */
    }
}
int main(){
    int n;
    cin>>n;
    cout<<DecimaltoBinary(n)<<endl;

    return 0;
}