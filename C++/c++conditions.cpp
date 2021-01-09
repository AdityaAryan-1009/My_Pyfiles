#include<iostream>
using namespace std;
int main(){
    
   // If else statement
   // code for telling  which no. is highest out of 3
   int a,b,c;
   cout<<"Enter the first no. "<<endl;
   cin>>a;
   cout<<"Enter the second no. "<<endl;
   cin>>b;
   cout<<"Enter the third no. "<<endl;
   cin>>c;
   if(a>b){
       if(a>c){
            cout<<a<<" is the largest no."<<endl;
       }
       else{
            cout<<c<<" is the largest no."<<endl; 
       }
   }
   else{
       if(b>c){
           cout<<b<<" is the largest no."<<endl;
       }
       else{
            cout<<c<<" is trhe largest no."<<endl; 
       }
   }

   // To check whether a no. is odd or even
    int a;
    cout<<"Enter the number : "<<endl;
    cin>>a;
    if(a%2==0){
        cout<<"Even"<<endl;
    }
    else{
        cout<<"Odd"<<endl;
    }
   

    // To check if a triangle is scalene, isosceles or equilateral
    int a,b,c;
    cout<<"Enter the length of the first side of the triangle - ";
    cin>>a;
    cout<<"Enter the length of the second side of the triangle - ";
    cin>>b;
    cout<<"Enter the length of the third side of the triangle - ";
    cin>>c;
    if(a==b && b==c ){
        cout<<"equilateral triangle";
    }
    else if(a==b || b==c || a==c ){
        cout<<"isosceless triangle";
    }
    else{
        cout<<"scalene triangle";
    }
    
    //To check if the given alphabet is  a vowel or consonanat
    char a;
    int Lowercase , Uppercase;
    cout<<"Enter the alphabet - ";
    cin>>a;
    Lowercase= (a=='a' || a=='e' || a=='i' || a=='o' || a=='u' );
    Uppercase= ( a=='A' || a=='E' || a=='I' || a=='O' || a=='U');
    if(Lowercase ||Uppercase ){
        cout<<"Vowel";
    }
    else{
        cout<<"Consonant";
    }
     return 0;
}