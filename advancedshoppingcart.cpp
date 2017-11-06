#include<iostream>
#include<stdlib.h>
using namespace std;

class ShoppingCart
{	
	public:
		int colgateQuantity,closeupQuantity;
	ShoppingCart()
	{
		colgateQuantity=0;
		closeupQuantity=0;
	}
	public:

	//List all the items
	void listallItems()
	{
		cout<<"Items present are \n 1.Colgate\n 2.CloseUp\n";
	}
	
	//Calculate Price
	int calculatePrice(int quantity,int price)
	{
		return quantity*price;
	}
	
	//Function to calculate Discount
	int calculateOffer(int quantity,int price)
	{
		int quotient=quantity/3;
		int remainder=quantity%3;
		int total=calculatePrice(quotient,20)+calculatePrice(remainder,10);
		return total;
	}
	

	//To add items in cart
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
				colgateQuantity+=addquantity;
				cout<<"\nColgate in cart\n"<<colgateQuantity;
			}
			if(choiceofuser==2)
			{
				cout<<"Enter the quantity of closeup you want to purchase\n";
				cin>>addquantity;
				closeupQuantity+=addquantity;
				cout<<"\nCloseUp in cart\n"<<closeupQuantity;
			}
			
		}while(choiceofuser!=0 && choiceofuser<=2);
		
	}
	
			
	// to remove items from cart
	int removeItems()
	{
		int option,removeQuantity;
		if(colgateQuantity==0 && closeupQuantity==0)
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
			cin>>removeQuantity;
			if(colgateQuantity==0)
			{	cout<<"Nothing to remove!\n";
				return 0;
			}
			colgateQuantity-=removeQuantity;
			cout<<"\nColgate left in cart\n"<<colgateQuantity;
		}
		if(option==2)
		{
			cout<<"Enter the quantity of closeup you want to remove\n";	
			cin>>removeQuantity;
			if(closeupQuantity==0)
			{	cout<<"Nothing to remove!\n";
				return 0;
			}
			closeupQuantity-=removeQuantity;
			cout<<"\nCloseUp left in cart\n"<<closeupQuantity;
		}
		}while(option!=0 && option<=2);
		
	}

	//Tells user final price he has to pay
	int checkout()
	{
		int option;	
		if(colgateQuantity==0 && closeupQuantity==0)
		 { 
			   cout<<"Cart Empty\n";	
				return 0;
		}	
		cout<<"Buy 2 Get 1 offer is going on purchase of colgate\n Press 1 to avail it\n Press 0 to avoid\n";
		cin>>option;
		if(option==1)
			cout<<"Price to pay after discount\n "<<"For Colgate "<<calculateOffer(colgateQuantity,10)<<"\nFor CloseUp "<<calculatePrice(closeupQuantity,15)<<"\nTotal ="<<calculateOffer(colgateQuantity,10)+calculatePrice(closeupQuantity,15);
		if(option==2)
			cout<<"Price to pay \n"<<"For CloseUp "<<calculatePrice(closeupQuantity,15)<<"\nFor Colgate "<<calculatePrice(colgateQuantity,10)<<"Total= "<<calculatePrice(colgateQuantity,10)+calculatePrice(closeupQuantity,15);
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
