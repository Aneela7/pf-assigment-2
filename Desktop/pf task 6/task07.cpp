#include <iostream>
using namespace std;
int main() {
        int total;
    float priceA = 50.0; 
    float priceB = 30.0; 
    float priceC = 20.0;
    float qA,qB,qC;
    int pM;
    cout<<"Enter the quantity of product A: ";
    cin>>qA;
    cout<<"Enter the quantity of product B: ";
    cin>>qB;
    cout<<"Enter the quantity of product C: ";
    cin>>qC;
    total=(priceA*qA)+(priceB*qB)+(priceC*qC);
    cout<<"Total Cost: $"<<total<<endl;
    cout << "Select a pM (1 for Credit Card, 2 for PayPal, 3 for Cash): ";
    cin >> pM;
  float finalTotal=(total > 200)?total*0.9:total;
float shipping = (finalTotal<150)?15:0;
    float totalWithShipping = finalTotal + shipping;

    float transactionFee = (pM == 1) ? totalWithShipping*0.02:
      (pM == 2) ? totalWithShipping*0.03:0;
                           
    float totalAfterPayment = totalWithShipping+transactionFee;
    
    cout << "Total after applying transaction fee: $" << totalAfterPayment << endl;
    int customerType;
cout<<"Enter customer type (1 for Regular, 2 for VIP): ";
cin>> customerType;

float finalAmount = (customerType == 2) ? totalWithShipping * 0.95 : totalWithShipping;
cout << "Total after customer discount: $" << finalAmount << endl;
    string couponCode;
cout << "Enter a coupon code (if any): ";
cin >> couponCode;
float couponDiscount = (couponCode == "SAVE10") ?10.0:0.0;
float totalAfterCoupon = finalAmount - couponDiscount;
cout <<"Total after applying coupon: $"<<totalAfterCoupon<<endl;
}