#include<bits/stdc++.h>
using namespace std;

int main(){

cout<<"Enter three digits: ";
int x;
cin>>x;
cout<<"Sum of first & last digit= "<<(x/100)+(x%10)<<endl;

cout<<"Squar of first digit= "<<(x/100)*(x/100)<<endl;
cout<<"Squar of last digit= "<<(x%10)*(x%10)<<endl;

cout<<"Reverse of this num= "<<(x%10)<<(x-(x/100)*100)/10<<(x/100)<<endl;

cout<<"Quotient of "<<x<<"/3= "<<x/3 <<endl;
cout<<"Reminder of "<<x<<"/3= "<<x-(x/3)*3<<endl;

}