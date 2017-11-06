#include<iostream>
using namespace std;

class ShoppingCart
{

	public:
	int calculateprice(int quantity,int price)
	{
		return quantity*price;
	}
	void usecase4(int quantity)
	{
		
		cout<<"Buy 2 get 1 offer ";
		cout<<"Colgate quantity="<<quantity<<" price=10\n";
		int quotient=quantity/3;
		int remainder=quantity%3;
		int total=calculateprice(quotient,20)+calculateprice(remainder,10);
		cout<<"Total ="<<total<<endl;
	}
};
int main()
{
	ShoppingCart shoppingcart;
	int quantity;
	cout<<"Enter colgate quantity you want to buy\n";
	cin>>quantity;
	shoppingcart.usecase4(quantity);
	return 0;
}
