#include<iostream>
using namespace std;
int main(){
    /*
    Types of loop :-
    1. For loop
    2.  While loop
    3. do...While loop
    */

    /*
    Operators in C++
    1. Arithmetic operator     (+,-,*,/,%,++,--)
    2. Relational operator     (==,!=,<,>,<=,>=)
    3. Logical operator        (&&,||,!)
    4. Bitwise operator        (&,|,^,~,<<,>>)
    5. Assignment operator     (=,+=,-=,*=,/=)
    6. Miscellaneous operator  (sizeof(),casting[eg -int(1.222) => 4],Comma[,])

    Precedence of Operator
    It is like BODMAS and tells which operator would be used first

    Associativity
    It tells which operator would be used if precedence is same
    */
    
    // program to find the sum of natural numbers till n.
    int n;
    int sum=0;
    cout<<"Enter a natural number -";
    cin>>n;
    for(int counter=1; counter<=n;counter++){
        sum=sum+counter;
    }
    cout<<sum;

    // Program to print multiplication table till 10
    int a;
    int counter = 1;
    cout<<"Enter a no. - ";
    cin>>a;
    do{
        cout<<a<<" * "<<counter<<" = "<<a*counter<<endl;
        counter++;
    }while(counter<=10);

    // progam to add only positive no.
    int n;
    int sum = 0;
    cout<<"Enter a number - ";
    cin>>n;
    while(n>0){
        sum=sum+n;
        cout<<"Enter a number - ";
        cin>>n;
    }
    cout<<"Sorry you entered a negative number"<<endl;
    cout<<"Here is the sum of previous no. you entered -"<<sum;
 
    // Write a program to print all odd numbers till n
    int  n;
    cout<<"Enter the number -";
    cin>>n;
    for(int i=0;i<=n;i++){
        if(i%2==0){
            continue;
        }
        else{
            cout<<i<<endl;
        }
    }

    // Write a program to check if a number is prime or not
    int n;
    cout<<"Enter a number -";
    cin>>n;
    int i=2;
    for(i;i<n;i++){
        if(n%i==0){
            cout<<"non-prime";
            break;
        }
    }
    if(i==n){
        cout<<"prime";
    }
    
    // Write a program to print all prime numbers in a given range
    int a,b;
    cout<<"Enter the start number of range - ";
    cin>>a;
    cout<<"Enter the end number of range - ";
    cin>>b;
    for(a;a<b;a++){
        int i=2;
        for(i;i<a;i++){
        if(a%i==0){
             break;
            }
        }
     if(i==a){
         cout<<a<<endl;
     }
    }

    // Switch statement
    // Write a program for simple calculator
    int a,b;
    cout<<"Enter the first number -";
    cin>>a;
    cout<<"Enter the second number -";
    cin>>b;
    char o;
    cout<<"Enter the operator -";
    cin>>o;
    switch (o){
    case '+':
        cout<<"Sum is :"<<a+b;
        break;
    case '-':
        cout<<"Difference is :"<<a-b;
        break;
    case '*':
        cout<<"Product is :"<<a*b;
        break;
    case '/':
        cout<<"Qustient is :"<<a/b<<endl;
        cout<<"Remainder is :"<<a%b;
        break;
    case '^':
        cout<<"square of first no. is :"<<a*a;
        cout<<"square of second no. is :"<<b*b;
        break;
    default:
        cout<<"Sorry learning more...";
    }

    // Write a program to tell whether an alphabet is vowel or consonent
    char a;
    cout<<"Enter the alphabet(IN SMALL LETTERS) - ";
    cin>>a;
    switch(a){
    case 'a':
        cout<<"vowel";
        break;
    case 'e':
        cout<<"vowel";
        break;
    case 'i':
        cout<<"vowel";
        break;
    case 'o':
        cout<<"vowel";
        break;
    case 'u':
        cout<<"vowel";
        break;
    default:
        cout<<"Consonent";
    }
    return 0;
} 