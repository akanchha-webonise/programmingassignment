#include<iostream>
#include<stdlib.h>
using namespace std;

class ShoppingCart
{	
	public:
		int colgatequantity,closeupquantity;
	ShoppingCart()
	{
		colgatequantity=0;
		closeupquantity=0;
	}
	public:

	void listallItems()
	{
		cout<<"Items present are \n 1.Colgate\n 2.CloseUp\n";
	}

	int calculateprice(int quantity,int price)
	{
		return quantity*price;
	}

	int calculateoffer(int quantity,int price)
	{
		int quotient=quantity/3;
		int remainder=quantity%3;
		int total=calculateprice(quotient,20)+calculateprice(remainder,10);
		return total;
	}

	void addItems()
	{
		int addquantity;
		int choiceofuser;		
		do {
			
			cout<<"\n\nPress 1 to add colgate\n";
			cout<<"Press 2 to add closeup\n";
			cout<<"Press 3 to remove Items or Checkout or Exit\n";
			
			cin>>choiceofuser;
			if(choiceofuser==1)
			{
				cout<<"Enter the quantity of colgate you want to purchase\n";
				cin>>addquantity;
				colgatequantity=addquantity;
			}
			if(choiceofuser==2)
			{
				cout<<"Enter the quantity of closeup you want to purchase\n";
				cin>>addquantity;
				closeupquantity=addquantity;
			}
			
		}while(choiceofuser!=0 && choiceofuser<=2);
		
	}		

	int removeItems()
	{
		int option,removequantity;
		if(colgatequantity==0 && closeupquantity==0)
		 { 
			   cout<<"First add Items in Cart\n";	
				return 0;
		}			
		do {
		cout<<"\nPress 1 to remove colgate\n";
		cout<<"Press 2 to remove closeup\n";
		cout<<"Press 3 to add items or Checkout\n";
		cin>>option;
		if(option==1)
		{
			cout<<"Enter the quantity of colgate you want to remove\n";
			cin>>removequantity;
			if(colgatequantity==0)
			{	cout<<"Nothing to remove!\n";
				return 0;
			}
			colgatequantity-=removequantity;
			cout<<"\nColgate left in cart\n"<<colgatequantity;
		}
		if(option==2)
		{
			cout<<"Enter the quantity of closeup you want to remove\n";	
			cin>>removequantity;
			if(closeupquantity==0)
			{	cout<<"Nothing to remove!\n";
				return 0;
			}
			closeupquantity-=removequantity;
			cout<<"\nCloseUp left in cart\n"<<closeupquantity;
		}
		}while(option!=0 && option<=2);
		
	}

	int checkout()
	{
		int offer;	
		if(colgatequantity==0 && closeupquantity==0)
		 { 
			   cout<<"Cart Empty\n";	
				return 0;
		}	
		cout<<"Buy 2 Get 1 offer is going on purchase of colgate\n Press 1 to avail it\n Press 0 to avoid\n";
		cin>>offer;
		if(offer==1)
			cout<<"Price to pay after discount\n "<<"For Colgate "<<calculateoffer(colgatequantity,10)<<"\nFor CloseUp "<<calculateprice(closeupquantity,5)<<"\nTotal ="<<calculateoffer(colgatequantity,10)+calculateprice(closeupquantity,15);
		if(offer==2)
			cout<<"Price to pay \n"<<"For CloseUp "<<calculateprice(closeupquantity,5)<<"\nFor Colgate "<<calculateprice(colgatequantity,10)<<"Total= "<<calculateprice(colgatequantity,10)+calculateprice(closeupquantity,15);
	}
};

int main()
{
	ShoppingCart shoppingcart;
	shoppingcart.listallItems(); 
	int userchoice;
	do
	{
		
		cout<<"\n\nPress 1 to add items\n";
		cout<<"Press 2 to remove items\n";
		cout<<"Press 3 to checkout\n";
		cout<<"Press 4 to exit\n";
		cin>>userchoice;
		if(userchoice==1)
			shoppingcart.addItems();
		else if(userchoice==2)
			shoppingcart.removeItems();
		else if(userchoice==3)
			shoppingcart.checkout();
		else 
			exit(0);
	}while(userchoice!=0 && userchoice<=4);
	
	return 0;
}
