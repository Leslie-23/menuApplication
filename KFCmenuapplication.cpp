#include <iostream>
using namespace std;

int main() {
	int a=1;
	int option,menuoption,paymethod,payoption,order1,order2,order3,order4,order5;
		while (a==1){
			cout << "KFC APPLICATION\n WELCOME TO THE KENTUCKY FRIED CHICKEN 'ORDER-A-MEAL' APPLICATION" << endl;
			cout << "________________________________\n";
			cout << "\n ENTER OPTIONS\n_______________\n " << endl;
			cout << "1. MENU" << endl;
			cout << "2. MAKE PAYMENT" << endl;
			cout << "3. EXIT APPLICATION" << endl;
			cout << "_______________" << endl;
			cout << "Please enter Option" << endl;
			cin >> option;
			
			switch(option){
				case 1:
					cout << "MENU\n 1. STREET WISE #1\n 2. STREET WISE #2\n 3. STREET WISE #3\n 4. ORDINARY MENU\n 5. OUR BEST DEALS\n     AT KFC WE DON'T 'CHICKEN' WITH OUR PRICES\n";
					cin>> menuoption;
	                if(menuoption==1){
	                	cout<< "WELCOME TO OUR STREET WISE #1 DEALS\n 1. single piece chicken: $5.99\n 2. chicken quads and tenders: $8.25\n 3. chicken nuggets: $12.00\n";
						cin>> order1;
						if(order1==1){
							cout<<"1. SINGLE PIECE CHICKEN @ $5.99\n";
						} else if(order1==2){
							cout<<"2. CHICKEN QUADS AND TENDERS @ $8.25\n";
						} else if(order1==3){
							cout<<"3. CHICKEN NUGGETS @ $12.00\n";
						} else {
							cout<<"INVALID OPTION? be sure to choose an option in the menu list\n";
						}	                	
					} else if(menuoption==2){
						cout<< "WELCOME TO OUR STREET WISE #2 DEALS\n 1. duo chicken pack: $19.50\n 2. chicken burgers: $5.25\n 3. beef burgers: $6.50\n";
						cin>> order2;
						if(order2==1){
							cout<< "1. DUO CHICKEN PACK @ $19.50\n";
						} else if(order2==2){
							cout<< "2. CHICKEN BURGERS @ $5.25\n";
						} else if(order2==3){
							cout<< "3. BEEF BURGERS @ $6.50\n";
						} else{
							cout<<"INVALID OPTION? be sure to choose an option in the menu list\n";
						}
					} else if(menuoption==3){
						cout<< "WELCOME TO OUR STREET WISE #3 DEALS\n 1. triple chicken pack: $9.00\n 2. large chicken bucket: $25.00\n 3. coleslaw pack: $11.00\n";
						cin>> order3;
						if(order3==1){
							cout<< "1. TRIPLE CHICKEN PACK @ $9.00\n";
						} else if(order3==2){
							cout<< "2. LARGE CHICKEN BUCKET @ $25.00\n";
						} else if(order3=3){
							cout<< "3. COLESLAW @ $11.00\n";
						} else {
							cout<< "INVALID OPTION? be sure to choose an option in the menu list\n";
						}
					} else if (menuoption==4){
						cout<< "WELCOME TO OUR ORDINARY DEALS\n 1. basic chicken( four piece): $17.00\n 2. fried rice with chicken thighs: $16.00\n 3. chicken and veggies mix pack: $14.95\n 4. chicken falafels: $13.25\n";
						cin>> order4;
						if(order4==1){
							cout<< "1. BASIC CHICKEN (FOUR PIECE) @ $17.00\n";
						} else if (order4==2){
							cout<< "2. FRIED RICE WITH CHICKEN THIGHS @ $16.00\n";
						} else if(order4==3){
							cout<< "3. CHICKEN AND VEGGIES MIX PACK @ $14.95\n";
						} else if(order4==4){
							cout<< "4. CHICKEN FALAFELS @ $13.25\n";
						} else {
							cout<< "INVALID OPTION? be sure to choose an option in the menu list\n";
						}
					} else if (menuoption==5){
						cout<< "WELCOME TO OUR BEST DEALS\n 1. family chicken bucket(10% off): $28.25\n 2. family nugget pack(15% off): $15.25\n 3. chicken quads(party pack): $32.00\n";
						cin>> order5;
						if (order5==1){
							cout<< "1. FAMILY CHICKEN BUCKET (10% off) @ $28.25\n";
						} else if(order5==2){
							cout<< "2. FAMILY NUGGET PACK (15% off) @ $15.25\n";
						} else if(order5==3){
							cout<< "3. CHICKEN QUADS(PARTY PACK) @ $32.00\n";
						} else{
							cout<< "INVALID OPTION? be sure to choose an option in the menu list\n";
						}
					} else {
						cout <<"INVALID OPTION? CHOOSE ANOTHER OPTION FROM THE ABOVE MENU LIST" << endl;
					}
				case 2:
					cout << "MAKE PAYMENT\n CHOOSE YOUR PAYMENT OPTION\n 1. MOBILE MONEY \n 2. VISA CARD \n 3. MASTER CARD \n 4. FLUTTERWAVE \n";
					cin>> paymethod;
					if(paymethod==1){
						cout<< "You have selected the MOBLIE MONEY OPTION(for cedis only)\n enter the NETWORK you would like to use\n 1. AIRTELTIGO\n 2. MTN\n 3. VODAPHONE\n";
						cin>> payoption;
						if(payoption==1){
							cout<< "AIRTELTIGO\n send the total order amount to the MOBILE MONEY CODE 112195\n";
						} else if(payoption==2){
							cout<< "MTN\n send the order amount to the MOBLIE MONEY CODE 123654\n";
						} else if(payoption==3){
							cout<< "VODAPHONE\n send the order amount to the MOBILE MONEY CODE 254147\n";
						} else{
							cout <<"INVALID OPTION CHOSEN? be sure to choose an option from the menu list above\n";
						}
					} else if(paymethod==2){
						cout<< "You have selected the VISA CARD OPTION(for both local and foreign currency payment)\n";
						cout<< "pay using the VISA CARD to our bank account\n ACCOUNT NUMBER: 11425789336\n ACCOUNT NAME: KFC .co\n";
					} else if(paymethod==3){
						cout<< "You have selected the MASTER CARD OPTION(for both local and foreign currency payment)\n";
						cout<< "pay using your MASTER CARD to our bank account\n ACCOUNT NUMBER: 11525789336\n ACCOUNT NAME: KFC .co\n";
					} else if(paymethod==4){
						cout<< "You have selected the FLUTTERWAVE OPTION(for worldwide transactions)\n";
						cout<< "pay using the FLUTTERWAVE app to our bank account\n ACCOUNT NUMBER: 11625789336\n ACCOUNT NAME: KFC .co\n";
					} else{
						cout<< "INVALID OPTION CHOSEN? be sure to choose an option from the menu list above\n";
					}
				case 3:
					cout << "EXITING.......... \n\n enter 0 to end and close the program and 1 if you choose to continue " <<endl;
					cin>> a ; //if a is not equal to 1 the whole code loops
						break;
			}
					
			}
	return 0;
}
