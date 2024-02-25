#include<bits/stdc++.h>
using namespace std;

int main(){

    int a= 10;
    int b= 20;

    int temp=0;

    temp=a;
    a=b;
    b=temp;

    cout<<a<<endl<<b<<endl;
       
    swap(a,b);

 cout<<"---------"<<endl<<a<<endl<<b;


}