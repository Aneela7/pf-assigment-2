#include<iostream>
using namespace std;
int main(){
    float priceA=50;
    float priceB=30;
    float priceC=20;
    int qA,qB,qC;
    cout<<"Enter the quantity of productA:";
    cin>>qA;
    cout<<"Enter the quantity of productB:";
    cin>>qB;
    cout<<"Enter a quantity of product C:";
    cin>>qC;
    float total=(priceA*qA)+(priceB*qB)+(priceC*qC);
    float finalTotal=(total>200)?total*0.9:total;
    float shipping = (finalTotal<150)?15:0;
    cout<<"Total after discount and shipping:$"<<finalTotal+shipping<<endl;
    return 0;




}