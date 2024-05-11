// Q4-> WAP for finding the volume of the cylinder by taking radius and height as input.
#include<iostream>
using namespace std;
int main(){
    float r;
    float h;
    cout<<"enter radius";
    cin>>r;
    cout<<"enter height";
    cin>>h;
    float vol = 3.14*r*r*h;
    cout<<"volume of cylinder is :"<<vol;
}