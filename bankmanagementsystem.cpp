#include <iostream>
#include <cctype>
using namespace std;
struct{
    string logo = "--------------------------------\n\n\n\n\n              BANK\n\n           MANAGEMENT\n\n             SYSTEM\n\n\n\n\n--------------------------------\n";
    string subtitle = "Welcome to our banking system\nPlease follow the menu:\n";
    string creator = "Made by: Drini Pollozhani\nSchool: Yahya Kemal College\n";
    string menu = "\n\n\n\n\nMain Menu\n\n\n1: New Account\n2: Deposit Amount\n3: Withdraw amount\n4: Balance enquiry\n5: All account holder list\n6: Close an account\n7: Modify an account\n8: Exit\n";

} welcome;
struct{
    char type[999];//type is char because u are inputing either C or S and that cant be an integer
    int input,number,balance[999];
    string name[999];
    string checking[999];

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
            cin>>account.name[account.number];
            cout<<"\nEnter the type of account (C/S): ";
            cin>>account.type[account.number];
            cout<<"\nEnter starting amount: ";
            cin>>account.balance[account.number];
            cout<<"\n\nYour account "<<account.name[account.number]<<" has been created successfully";

        }
        else if(account.input==2){
        	int x,search;
        	char a;
            cout<<"Enter account number: ";
            cin>>account.number;
            cout<<account.name[account.number]<<" enter how much you would like to deposit: ";
            cin>>x;
            account.balance[account.number]+=x;
            cout<<"Would you like a receipt?(Y/N): ";
            cin>>a;
            if(toupper(a)=='Y'){
            	cout<<"Your old balance: "<<account.balance[account.number]-x<<endl<<"Your new balance: "<<account.balance[account.number]<<endl<< "You added: "<<x<<endl<<"Thank you, have a nice day :)";
				
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
            cout<<account.name[account.number]<<" enter how much you would like to withdraw: ";
            cin>>y;
            account.balance[account.number]-=y;
            cout<<"Would you like a receipt?(Y/N): ";
            cin>>b;
            if(toupper(b)=='Y'){
            	cout<<"Your old balance: "<<account.balance[account.number]+y<<endl<<"Your new balance: "<<account.balance[account.number]<<endl<< "You withdrew: "<<y<<endl<<"Thank you, have a nice day :)";
			
			}
			else if(toupper(b)=='N'){
				cout<<"Thank you, have a nice day :)";
				
			}
        }
        else if(account.input==4){
            cout<<"Enter account number: ";
            cin>>account.number;
            cout<<"Your balance is: "<<account.balance[account.number];
        }
        else if(account.input==5){
        	int password;
        	cout<<"Enter bank admin password: ";
        	cin>>password;
	        	if(password==1234){
				
		            cout<<"Showing all accounts: \nName:	Balance:	Account type:\n";
		            string out;
		            if(account.type[account.number]=='c'||'C'){
		            	account.checking[account.number]="Checking";
					}
					else if(account.type[account.number]=='s'||'S'){
						account.checking[account.number]="Savings";
					}
		            for(int i = 0; i<999; i++){
		            	if(account.balance[i]!=0){
						
		            		cout<<account.name[i]<<" "<<account.balance[i]<<" "<<account.checking[account.number]<<endl;
						}
						else{
							cout<<"";
						}
					}
		            
		        }
				
				else{
					cout<<"Wrong passcode.";
				}
			}
        else if(account.input==6){
        	char yn;
            cout<<"Enter account number: ";
            cin>>account.number;
            cout<<account.name[account.number]<<" are you sure? This is irreversible.(Y/N)";
            cin>>yn;
            if(toupper(yn)=='Y'){
            account.name[account.number]="";
            account.balance[account.number]=0;
            account.type[account.number]=' ';
    		}
    		else if(toupper(yn)=='N'){
    			cout<<"Cancelled";
			}
            else{
            	cout<<"Please enter Y for yes or N for no.";
            	return 1;
			}
        }
        else if(account.input==7){
            cout<<"Enter account number: ";
            cin>>account.number;
            if(account.type[account.number]=='c'||'C'){
            	account.checking[account.number]="Checking";
			}
			else if(account.type[account.number]=='s'||'S'){
				account.checking[account.number]="Savings";
			}
            cout<<"Enter new account name: (old account name is "<<account.name[account.number]<<")";
            cin>>account.name[account.number];
            cout<<"Enter new account type: (old account type is "<<account.checking[account.number]<<" )";
            cin>>account.type[account.number];
            
        }
        else if(account.input==8){
            cout<<"Thank you, have a nice day!";
            break;
 	    }
	}


}
