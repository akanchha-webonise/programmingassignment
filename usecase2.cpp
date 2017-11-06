#include<iostream>
using namespace std;

class ShoppingCart
{

	public:
	int calculateprice(int quantity,int price)
	{
		return quantity*price;
	}
	void usecase2()
	{
		cout<<"Colgate quantity=10 price=10\n";
		cout<<"Total price= "<<calculateprice(10,10)<<endl;
	}
};

int main()
{
	ShoppingCart shoppingcart;
	shoppingcart.usecase2();
	return 0;
}
