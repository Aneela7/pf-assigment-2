#include<iostream>
using namespace std;
int main(){
    float priceA=50;
    float priceB=30;
    float priceC=20;
    float qA,qB,qC;
    cout<<"Enter the quantity of productA:";
    cin>>qA;
    cout<<"Enter the quantity of productB:";
    cin>>qB;
    cout<<"Enter the quantity of productC:";
    cin>>qC;
    float total=(priceA*qA)+(priceB*qB)+(priceC*qC);
    float Final_total=(total>200)?total*0.9:total;
    cout<<"total after discount:$"<<Final_total<<endl;
    return 0;

}