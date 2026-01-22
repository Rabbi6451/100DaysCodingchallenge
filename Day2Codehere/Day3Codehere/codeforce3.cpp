#include<iostream>
using namespace std;

int main(){
    double a,b;
    cin>>a>>b;

    double k=floor(a/b);
    double y=ceil(a/b);
    double z=round(a/b);

    cout<<"floor "<< a << " / " << b<< " = "<< k<<"\n";
    cout<<"ceil "<< a << " / " << b<< " = "<< y<<"\n";
    cout<<"round "<< a << " / " << b<< " = "<< z;
}