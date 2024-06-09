#include <iostream>

using namespace std;
class Biz{
private:
    float buyingPrice;
    float transportCost;
    float sellingPrice;
public:
    void input(){
    cout<< "Enter  buying price: ";
    cin >> buyingPrice;
    cout<< "Enter transport cost: ";
    cin >> transportCost;
    cout<<"Enter selling price: ";
    cin>> sellingPrice;
    }
    void calculate(){
    float totalCost = buyingPrice + transportCost;
    float profitOrLoss = sellingPrice - totalCost;

if(profitOrLoss > 0){
    cout <<"Profit: "<< profitOrLoss<<endl;
}
else if(profitOrLoss < 0){
    cout<<"Loss: "<< profitOrLoss <<endl;
}
else{
    cout<< "No profit or loss: "<< profitOrLoss <<endl;
}
    }

void output(){
cout<< "Buying price: "<< buyingPrice << endl;
cout<<"Transport cost: " << transportCost << endl;
cout<<"Selling price: "<< sellingPrice << endl;
}
    };
int main()
{
    Biz item;
    item.input();
    item.calculate();
    item.output();

    return 0;
}
