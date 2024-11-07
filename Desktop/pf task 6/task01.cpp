#include<iostream>
using namespace std;
int main(){
int total;
float priceA=50;
float priceB=30;
float priceC=20;
float qA,qB,qC;
cout<<"Enter the quantity of product A:";
cin>>qA;
cout<<"Enter a product of B:";
cin>>qB;
cout<<"Enter a product of C:";
cin>>qC;
total=(priceA*qA)+(priceB*qB)+(priceC*qC);
cout<<"total cost:$"<<total;
return 0;

}
