#include<iostream>
using namespace std;
int main(){
    int total;
    float priceA = 50;
    float priceB=30;
    float priceC=20;
    int qA,qB,qC;
    int PM;
    cout<<"Enter a quantity of product A:";
    cin>>qA;
    cout<<"Enter a quantity of product B:";
    cin>>qB;
    cout<<"Enter a quantity of product C:";
    cin>>qC;
    total=(priceA*qA)+(priceB*qB)+(priceC*qC);
    cout<<"Total cost:$"<<total<<endl;
    cout<<"select a pM(1 for credit card,2for paypal,3for case):";
     cin >> PM;
  float finalTotal=(total > 200)?total*0.9:total;
float shipping = (finalTotal<150)?15:0;
    float totalWithShipping = finalTotal + shipping;

    float transactionFee = (PM == 1) ? totalWithShipping*0.02:
                       (PM == 2) ? totalWithShipping*0.03:0;
                            
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
cout<<"Total after applying coupon: $"<<totalAfterCoupon<<endl;
int location;
cout<<"Enter your location (1, 2, or 3): ";
cin >> location;
float taxRate = (location==1) ? 0.05 :(location == 2) ? 0.10 : 0.08;
float totalWithTax = totalAfterCoupon * (1 + taxRate);
cout << "Total after applying sales tax: $" << totalWithTax <<endl;
cout << "Order Summary:\n";
cout << "Product A (" << qA << "): $"<<priceA*qA<<endl;
cout << "Product B (" << qB << "): $"<<priceB*qB<<endl;
cout << "Product C (" << qC << "): $"<<priceC*qC<<endl;
cout << "Subtotal: $" << total << endl;
cout << "Discount: $" << total - finalTotal << endl;
cout << "Shipping: $" << shipping << endl;
cout << "Transaction Fee: $" << transactionFee << endl;
cout << "Coupon Discount: $" << couponDiscount << endl;
cout << "Sales Tax: $" << totalWithTax - totalAfterCoupon << endl;
cout << "Total Amount to Pay: $" << totalWithTax << endl;
int stockA = 10, stockB = 5, stockC = 8;

if (qA>stockA) {
    cout<< "Sorry,You cannot order more than the available stock of Product A\n";
}
if (qB>stockB) {
    cout << "Sorry,You cannot order more than the available stock of Product B\n";
}
if (qC>stockC) {
    cout <<"Sorry,You cannot order more than the available stock of Product C\n";
}
return 0;
}