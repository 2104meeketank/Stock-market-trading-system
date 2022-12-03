#include <iostream>
#include <iomanip>
//#include "MeeketAirlinesHeader.h"
#define size 100
using namespace std;
//Adding structure and declaring it as public and private
class airlines
{
public:
	airlines();
	void main_menu();
	void make_reservation();
	void cancel_reservation();
	void search_passenger();
	void change_reservation();
	void PrivacyPolicy();
	void print_list();
	void print_report();


private:
	struct node
	{
		string fname, lname, ID, phone_num, menu, PlaceIn, PlaceOut;
		string BorDate;
		int reserve_num, seat_num;


		node *next;

	};

	node *start;

	node *temp, *temp2;

}meeketairlines;

int reserve = 999;
int seat[size];
void seat_fill()
{
	for (int i = 0; i < size; i++)
	{
		seat[i] = 0;
	}
}

bool taken=false;
bool seat_no(int y)
{

        for (int i = 0; i < size; i++ )
        {
                if( seat[i] == -1 )
                {
				taken=true;
  	                 cout << "The seat is taken already. \n";
                        cout << "Please choose another seat number from below."<<endl;

				int j = 1;
				while ( j < size+1 )
				{
					if ( seat[j-1] == -1)
					j++;
					else
					{
						cout <<"|" << j << "|";
						if ( j%10 == 0 )
						cout << endl;
						j++;
					}

                }
		}

        }

}

void menu()
{
char choice;

do{
cout <<"\t \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd \n";
cout <<"\t Make Reservation    ------ [1] \n";
cout <<"\t \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd \n";
cout <<"\t Cancel Reservation  ------ [2] \n ";
cout <<"\t \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd \n";
cout <<"\t Search Passenger    ------ [3] \n";
cout <<"\t \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd \n";
cout <<"\t Change Reservation  ------ [4] \n";
cout <<"\t \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd \n";
cout <<"\t Print a list        ------ [5] \n";
cout <<"\t \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd \n";
cout <<"\t Print status Report ------ [6] \n ";
cout <<"\t \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd \n";
cout <<"\t Quit                ------ [7] \n ";
cout <<"\t \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd \n";
cout <<"\t Privacy Policy      ------ [8] \n ";
cout <<"\t \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd \n";
cout <<"   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n";
cout <<"\t       (C) MEEKET KETAN TANK \n ";
cout <<"   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n";

cout <<"   Option : ";

	cin >> choice;
	choice = ((int)(choice)-48);

	switch (choice)
	{
	case 1: system("CLS"); meeketairlines.make_reservation();
					break;
	case 2: system("CLS"); meeketairlines.cancel_reservation();
					break;
	case 3: system("CLS"); meeketairlines.search_passenger();
					break;
	case 4: system("CLS"); meeketairlines.change_reservation();
					break;
	case 5: system("CLS"); meeketairlines.print_list();
	//cout<<"We are currently into its development sorry for the inconvenience caused";
					break;
	case 6: system("CLS"); meeketairlines.print_report();

					break;
	case 7: cout << "\n\nThank you come again\n\n\n";
					break;
    case 8:  system("CLS"); meeketairlines.PrivacyPolicy();
        break;
	default: cout<<"\t\tPLEASE DO NOT SPAM !!! \n\n";
		break;


	}	// Ending case loop.


	cout<<"\n   PROCESS COMPLETED...\n\n";

	cin.get();
	if(cin.get()=='\n')
		system("CLS");


    cout<<"\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd"<<endl;
	cout << "\t    WELCOME TO MEEKET AIRLINE RESERVATION SYSTEM \n";
	cout<<"   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n"<<endl;
	cout<<"   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd MENU OPTIONS \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n"<<endl;

 }while(choice != 7 );

}

//************************************************************************
void airlines::PrivacyPolicy()
{
	cout<<endl;
	cout<<"\t\t\t\tWELCOME TO THE CODE"<<endl;
	cout<<endl;
	cout<<" This code is written and acknowledged by MEEKET K TANK for the educational purpose"<<endl;
	cout<<" if you like to copy any of the function or the code from the particular page you may"<<endl;
	cout<<" you may contact us freely"<<endl;
	cout<<endl;
	cout<<" There are no contributions in this particular program"<<endl;
	cout<<" Glad to have you here...\n THANK YOU!"<<endl;

}

//************************************************************************
airlines::airlines()
{
	start = NULL;
}

//*************************************************************************
//This is the code for booking tiket
void airlines:: make_reservation()
{
	int meal_choice, x;


	temp = new node;

	cout<<"\n\n   Enter First Name of person: ";
	cin>>temp->fname;
	cout<<"   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n";
	cout<<"   Enter Last Name of Person: ";
	cin>>temp->lname;
	cout<<"   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n";
	cout<<"   Place at right now: ";
	cin>>temp->PlaceIn;
	cout<<"   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n";
	cout<<"   Place you would like to visit: ";
	cin>>temp->PlaceOut;
	cout<<"   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n";
	cout<<"   Enter Boarding date: ";
	cin>>temp->BorDate;
	cout<<"   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n";
	cout<<"   Enter ID of the person: ";
	cin>>temp->ID;
	cout<<"   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n";
	cout<<"   Enter Phone Number of Person: ";
	cin>>temp->phone_num;
	cout<<"   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n";

	do{
            cout<<endl;
            cout<<"     Seat number seating on the flight"<<endl;
            cout<<endl;
	    int j = 1;
            while ( j < size+1 )
				{
					if ( seat[j-1] == -1)
					j++;
					else
					{
						cout <<"|" << j << "|";
						if ( j%10 == 0 )
						cout << endl;
						j++;
					}

                }
                cout<<endl;
	cout << "   Please Enter the Seat Number (1-100): ";

		cin>>x;
		while(x>size){
		cout<<"   Try again:: ";
		cin >>x;
		}

	cout<<"   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n";
		if((seat[x-1])>-1)
		taken = false;
		else
		seat_no(x);
	seat[x-1] = -1;
	temp->seat_num = x;

	}while(taken==true);


//******************************************************************************
//This is the code for adding meal into the ticket

		cout << "   Please Enter Your Menu Preference from below: \n\n";
		cout << "      Jain     ..... '1'\n";
		cout << "      Veg     ..... '2'\n";
		cout << "      Non-Veg ..... '3'\n";
		cout << "      No meal ..... '4'\n\n";

		cout <<"   Your Choice :: ";
		cin >> meal_choice;

		while(meal_choice>4 || meal_choice<1){
		cout<<"   Try Again:: ";
		cin>>meal_choice;
		}

		if (meal_choice == 1)
		temp->menu = "Jain";

		else if (meal_choice == 2)
		temp->menu = "Veg";

		else if (meal_choice == 2)
		temp->menu = "Non-Veg";

		else
		temp->menu = "No meal";




	reserve++;
	temp->reserve_num=reserve;
	cout <<"\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n";
	cout <<"   YOUR RESERVATION NUMBER IS :: " << reserve << "\n";
	cout <<"   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n";

	temp->next = NULL;

	if(start == NULL)
		start = temp;
	else
	{
		temp2 = start;
		while (temp2->next != NULL)
		{
			temp2 = temp2->next;
		}
		temp2->next = temp;
	}
	cout <<"\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n";
	cout << "               Ticket cost " << "Rs 20000/-" << endl;
	cout <<"   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n";



}
//********************************************************************************************
//This is the code for ticket cancellation
int cancel=0;
void airlines:: cancel_reservation()
{	int num;
	cout << "Please Enter your reservation Number here: ";
	cin >> num;

		node *cur = start;
		if(cur!=NULL)
		{

		if ( start->reserve_num == num )
		{
			node *del = start;
			start = start->next;
			delete del;
			seat[0] = 0;
			cancel++;
			return;
		}
		else
		{
			node *pre, *cur;
			pre = start;
			cur = start->next;
			while(cur != NULL)
			{
				if ( cur->reserve_num == num )
						break;
				pre = cur;
				cur = cur->next;
			}
			seat[cur->seat_num-1] = 0;
			if (cur != NULL )
			pre->next = cur->next;

		}

	cancel++;


		}
		else
		{
		cout<<"!!! *** Nothing to delete or invalid entry *** !!! \n"<<endl;
		}

}
//********************************************************************************************
//This is the code for searching the passenger
void airlines:: search_passenger()
{
		string fakename;
		cout << "Please enter your first name here: ";
		cin >> fakename;

		node *cur = start;
		while (cur != NULL)
		{
			if (cur->fname == fakename)
			{
				cout << "First Name : " << cur->fname << endl;
				cout << "Last Name : " << cur->lname << endl;
				cout<<  "Place at: "<<cur->PlaceIn<<endl;
				cout<<  "Place want to visit: "<<cur->PlaceOut<<endl;
				cout<<  "Boarding date: "<<cur->BorDate<<endl;
				cout << "ID: " << cur->ID << endl;
				cout << "Phone number: " << cur->phone_num << endl;
				cout << "Seat Number: " << cur->seat_num << endl;
				cout << "Reservation No. " << cur->reserve_num<< endl;
				cout << "Ticket cost: " << "Rs 20000/-" << endl;
				return;
			}	cur = cur->next;
		}	cout << " Sorry!!! NOT FOUND \n\n";

}

//********************************************************************************************
//This is the code for changing the seat
void airlines:: change_reservation()
{
	int option , next_seat;
	cout << " Please enter your seat number: ";
	cin >> option;
	node *cur;
	cur = start;

	while(cur != NULL)
	{
		if ( cur->seat_num == option )
			break;
		cur = cur->next;
	}
	cout << "Please choose another seat number from below.";
	cout<<endl;
		int j = 1;
		while ( j < size+1 )
		{
			if ( seat[j-1] == -1)
			j++;
			else
			{
			cout <<"| " << j << "|";
			if ( j%10 == 0 )
			cout << endl;
			j++;
			}
		}
	cin >> next_seat;
	seat[cur->seat_num-1]=0;
	cur->seat_num = next_seat;
	seat[next_seat-1] = -1;

}

//********************************************************************************************
//This is the code for printing the list
void airlines:: print_list()
{
	temp=start;
	if(temp == NULL)
	cout<<" End of lists"<<endl;
	else
	{	int cnt = 1;
		cout << "\tNumber\t First Name\t Last Name\t Place at \t Place want to visit\t Boarding date\t ID\t";
		cout << "Phone Number\t Seat Number\t Reservation No\t Menu\n";

		while(temp != NULL)
		{
			cout << "\t" << cnt <<setw(15);
			cout << temp->fname <<setw(15);
			cout << temp->lname << setw(15);
			cout<< temp->PlaceIn<<setw(20);
			cout<< temp->PlaceOut<<setw(15);
			cout<< temp->BorDate<<setw(15);
			cout << temp->ID << setw(15);
			cout << temp->phone_num <<setw(15);
			cout << temp->seat_num <<setw(15);
			cout << temp->reserve_num <<setw(15);
			cout << temp->menu << "\n";

			temp=temp->next;
			cnt++;
		}
		cout << "\n\n";

	}
}
//********************************************************************************************
//This is the code for printing the report
void airlines:: print_report()
{	int count = 0;
	for (int i =0; i < size; i++ )
	{
		if (seat[i] == -1)
			count++;
	}
	cout<<"The number of reserved seats are: " << count <<endl;
	cout<<"The number of cancellations are: " << cancel <<endl;
}

//********************************************************************************************
// This is the main code
int main()
{
	system("CLS");
	cout<<"\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd"<<endl;
	cout << "\t    WELCOME TO MEEKET AIRLINE RESERVATION SYSTEM \n";
	cout<<"   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n"<<endl;
	cout<<"   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd MENU OPTIONS \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n"<<endl;



	menu();
	seat_fill();

	return 0;


}
