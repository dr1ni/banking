#include <iostream>

using namespace std;
struct{
    string logo = "--------------------------------\n\n\n\n\n              BANK\n\n           MANAGEMENT\n\n             SYSTEM\n\n\n\n\n--------------------------------\n";
    string subtitle = "Welcome to our banking system\nPlease follow the menu:\n";
    string creator = "Made by: Drini Pollozhani\nSchool: Yahya Kemal College\n";
    string menu = "\n\n\n\n\nMain Menu\n\n\n1: New Account\n2: Deposit Amount\n3: Withdraw amount\n4: Balance enquiry\n5: All account holder list\n6: Close an account\n7: Modify an account\n8: Exit\n";

} welcome;
struct{
    char type;//type is char because u are inputing either C or S and that cant be an integer
    int input,number,balance;
    string name;

}account;
int main(){
    cout<<welcome.logo<<welcome.subtitle<<welcome.creator;
    system("pause");
    while(true){
    cout<<welcome.menu;
    cin>>account.input;
    	if(account.input==1){
            cout<<"\n\n====NEW ACCOUNT ENTRY FORM====\n\nEnter the account number: ";
            cin>>account.number;//also here used cin instead of getline and also in the following few i changed getline with cin
            ///if u want to use getline u need one more command and its cin.get(); because otherwise it makes problems with consuming new lines
            cout<<"\nEnter the name of the account holder: ";
            cin>>account.name;
            cout<<"\nEnter the type of account (C/S): ";
            cin>>account.type;
            cout<<"\nEnter starting amount: ";
            cin>>account.balance;
            cout<<"\n\nYour account "<<account.name<<" has been created successfully";

        }
        else if(account.input==2){
        	int x;
        	char a;
            cout<<"Enter account number: ";
            cin>>account.number;
            cout<<account.name<<"Enter how much you would like to deposit: ";
            cin>>x;
            account.balance+=x;
            cout<<"Would you like a receipt?(Y/N): ";
            cin>>a;
            if(toupper(a)=='Y'){
            	cout<<"Your old balance: "<<account.balance-x<<endl<<"Your new balance: "<<account.balance<<endl<< "You added: "<<x<<endl<<"Thank you, have a nice day :)";
				
			}
			else if(toupper(a)=='N'){
				cout<<"Thank you, have a nice day :)";
				
			}
        }
        else if(account.input==3){
            int y;
        	char b;
            cout<<"Enter account number: ";
            cin>>account.number;
            cout<<account.name<<" enter how much you would like to withdraw: ";
            cin>>y;
            account.balance-=y;
            cout<<"Would you like a receipt?(Y/N): ";
            cin>>b;
            if(toupper(b)=='Y'){
            	cout<<"Your old balance: "<<account.balance+y<<endl<<"Your new balance: "<<account.balance<<endl<< "You withdrew: "<<y<<endl<<"Thank you, have a nice day :)";
			
			}
			else if(toupper(b)=='N'){
				cout<<"Thank you, have a nice day :)";
				
			}
        }
        else if(account.input==4){
            cout<<"Enter account number: ";
            cin>>account.number;
            cout<<"Your balance is: "<<account.balance;
        }
        else if(account.input==5){
            cout<<"Showing all accounts";
            break;
        }
        else if(account.input==6){
            cout<<"Closing acc";
            break;
        }
        else if(account.input==7){
            cout<<"Modifying acc";
            break;
        }
        else if(account.input==8){
            cout<<"Thank you, have a nice day!";
            break;
 	    }
	}


}
