#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double  a;
    double k=3.141592653;
    
    cin>>a;

    double ans=k*a*a;

    cout<<fixed<<setprecision(9);
    cout<<ans;

}