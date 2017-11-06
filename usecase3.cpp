#include<iostream>
using namespace std;

class ShoppingCart
{

	public:
	int calculateprice(int quantity,int price)
	{
		return quantity*price;
	}
	void usecase3()
	{
		cout<<"Colgate quantity=10 price=5\n";
		int total=calculateprice(10,5);
		cout<<"Close up quantity=15 price=2\n";
		total+=calculateprice(15,2);
		cout<<"Total price= "<<total<<endl;
	}
};

int main()
{
	ShoppingCart shoppingcart;
	shoppingcart.usecase3();
	return 0;
}
