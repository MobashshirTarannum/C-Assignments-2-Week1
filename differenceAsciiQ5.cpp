//Q5-> WAP to find the difference between ASCII of two characters ,take them as input.
#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"enter first charecter";
    cin>>ch;
    char ch1;
    cout<<"enter second charecter";
    cin>>ch1;
    int dif =((int)ch-(int)ch1);
    cout<<dif;
}