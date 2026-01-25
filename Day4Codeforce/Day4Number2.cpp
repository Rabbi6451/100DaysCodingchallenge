#include<iostream>
using namespace std;

int main(){
    int sum=0;
   int ages[8]={1,2,3,4,5,6,7,8};
   int length=sizeof(ages)/sizeof(ages[0]);
   for(int num : ages){
    sum+=num;
   }
   int avg=sum/length;
   cout<<"Average of array is "<<avg<<"Length of array is "<<length;
   
}