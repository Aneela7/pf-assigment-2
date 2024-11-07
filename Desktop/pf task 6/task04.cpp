#include<iostream>
using namespace std;
int main(){
    double priceA=50,priceB=30,priceC=20;
    int qA,qB,qC;
    cout<<"Enter a quantity of product of A:";
    cin>>qA;
    cout<<"Enter a quantity of product of B:";
    cin>>qB;
    cout<<"Enter a quantity of product of C:";
    cin>>qC;
      double total = (priceA*qA)+(priceB*qB) + (priceC*qC);
   double finalTotal=(total > 200)?total*0.9:total;
    double shipping = (finalTotal<150)?15:0;
    double totalWithShipping = finalTotal + shipping;
    int loyaltyPoints = (totalWithShipping>300) ? 50 : 20;
   cout << "Total after discount and shipping: $" << totalWithShipping <<endl;
    cout << "Loyalty points earned: " << loyaltyPoints <<endl;

    return 0;
}