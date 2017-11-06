#include<iostream>
using namespace std;

class ShoppingCart
{

	public:
	int calculateprice(int quantity,int price)
	{
		return quantity*price;
	}
	void usecase5(int quantity)
	{
		
		cout<<"Colgate quantity="<<quantity<<" price=10\n Closeup quantity=2 price=15\n";
		int quotient=quantity/3;
		int remainder=quantity%3;
		int total=calculateprice(quotient,20)+calculateprice(remainder,10) + calculateprice(2,15);
		cout<<"Total ="<<total<<endl;
	}
};

int main()
{
	ShoppingCart shoppingcart;
	int quantity;
	cout<<"Enter colgate quantity you want to buy\n";
	cin>>quantity;
	shoppingcart.usecase5(quantity);
	return 0;
}
