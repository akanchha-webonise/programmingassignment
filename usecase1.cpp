#include<iostream>
using namespace std;

class ShoppingCart
{

	public:
	int calculateprice(int quantity,int price)
	{
		return quantity*price;
	}
	void usecase1()
	{
		cout<<"Colgate quantity=1 price=10\n";
		cout<<"Total price= "<<calculateprice(1,10)<<endl;
	}
};

int main()
{
	ShoppingCart shoppingcart;
	shoppingcart.usecase1();
	return 0;
}
