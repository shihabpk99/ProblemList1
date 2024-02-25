#include<bits/stdc++.h>
using namespace std;

int main(){

cout<<"Enter any capital letter: ";
char x;
cin>>x;
cout<<"Small letter: "<<(char)tolower(x)<<endl;

cout<<"Enter any small letter: ";
char y;
cin>>y;
cout<<"Capital letter: "<<(char)toupper(y)<<endl;

cout<<"Enter any capital letter: ";
char a;
cin>>a;
cout<<"Small letter: "<< (char) (a+32) <<endl;

cout<<"Enter any small letter: ";
char b;
cin>>b;
cout<<"Small letter: "<< (char) (b-32) <<endl;

}