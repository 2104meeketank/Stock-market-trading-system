#include<iostream>
#include<conio.h>
//#include<graphics.h>
using namespace std;
class welcome
{
    public:
        void welcomescreen()
        {
            cout<<"This is a simple project developed by Meeket Tank \nThis code is covered in Mozilla public license on Github"<<endl;
            cout<<"Owner details: "<<endl<<"College - MPSTME"<<endl<<"Program/Stream - MBA(Tech)(Computer)"<<endl;
            cout<<endl;
        }

};
class Trading
{
    public:
    string name = "No name found...", email = "No email found...", created, phone = "No number found...";
    string deletedtext, ustest, uspass, Username, Password ;
    string done1003, done1002, done1001;
    char ShareBuying;
    int price1001= 9000, price1002 = 8000, price1003 = 7000;
    int AdminSelection;
    int menuselection,age = 0,experience = 0, ShareCode, moretrade, balance = 0, SellShareCode;
    void menu()
    {
        cout<<"\xcd\xcd\xcd\xcd\xcd Welcome to Meeket Active Trading system \xcd\xcd\xcd\xcd\xcd"<<endl;
        cout<<endl;
        cout<<"Please select the service from below: \n1. Account Creation \n2. Purchase Trading \n3. Sell Trading \n4.Print account details \n5. Check Balance \n6. Delete account \n7. Admin Acess \n8. Privacy Policy "<<endl;
        cout<<endl;
        cout<<"\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd"<<endl;
        cout<<endl;
        cout<<"Enter here => ";
        cin>>menuselection;
        switch(menuselection)
        {
            case 1:
                if(created == "Your account has been successfully created.." )
                {
                    system("CLS");
                    cout<<"You have already registered..."<<endl;
                    backhome();
                }
                else
                {
                 system("CLS");Trading::Account_Creation();
                }
                break;
            case 2:
                system("CLS");Trading::PurchaseLiveTrade();
                break;
            case 3:
                system("CLS");Trading::SellLiveTrade();
                break;
            case 4:
                system("CLS");Trading::PrintAccountDetails();
                break;
            case 5:
                system("CLS");Trading::CheckBalance();
                break;
            case 6:
                system("CLS");Trading::DeleteAccount();
                break;
            case 8:
                system("CLS");Trading::PrivacyPolicy();
                break;
            case 7:
                system("CLS");Trading::Admin();
                break;
        }
    }
    void PrivacyPolicy()
    {
        cout<<"This code has been entirely developed by meeket tank from NMIMS - MPSTME - MBA(Tech)(Computer) - First year"<<endl;
        cout<<"the rights of this code are with Meeket and licensed with Mozirilla public license on Github \ncontact him for more details "<<endl;
        cout<<endl;
        backhome();
    }
    void PurchaseLiveTrade()
    {
        if(created == "Your account has been successfully created..")
        {
            admin:
            purchase:
          cout<<"MRF TYPRES - 1001 \xcd TATA INDUSTRIES - 1002 \xcd ADANI ENTERPRICES - 1003"<<endl;
          cout<<"Enter the code of the share you would like to buy (Enter the code): ";
          cin>>ShareCode;
          switch(ShareCode)
          {
          case 1001:
            cout<<"You have chosen for MRF TYPRES"<<endl;
            cout<<"Its share price is: "<<price1001<<endl<<"Would you like to buy it (Y/N): ";
            cin>>ShareBuying;
            if(ShareBuying == 'Y' || 'y')
            {
                done1001 = "Share purchased...";
                cout<<done1001<<endl;
            }
            else if(ShareBuying == 'N' || 'n')
            {
                cout<<"Share purchase canceled..."<<endl;
                goto purchase;
            }
            else
            {
               cout<<"You have entered a wrong input"<<endl;
            }
            cout<<"Would you like to buy more (1.Y/2.N): ";
            cin>>moretrade;
            switch(moretrade)
            {
            case 1:
                system("CLS");Trading::PurchaseLiveTrade();
                break;
            case 2:
                system("CLS");Trading::menu();
                break;
            default:
                cout<<"Wrong input...";
                break;
            }
          case 1002:
            cout<<"You have chosen for TATA INDUSTRIES"<<endl;
            cout<<"Its share price is: "<<price1002<<endl<<"Would you like to buy it(Y/N): ";
            cin>>ShareBuying;
            if(ShareBuying == 'y' || 'y' )
            {
                done1002 = "Share purchased...";
                cout<<done1002<<endl;
            }
            else if(ShareBuying == 'N' || 'n')
            {
                cout<<"Share purchase canceled..."<<endl;
                goto purchase;
            }
            else
            {
               cout<<"You have entered a wrong input"<<endl;
            }
            cout<<"Would you like to buy more (1.Y/2.N): ";
            cin>>moretrade;
            switch(moretrade)
            {
            case 1:
                system("CLS");Trading::PurchaseLiveTrade();
                break;
            case 2:
                system("CLS");Trading::menu();
                break;
            default:
                cout<<"Wrong input...";
                break;
            }
          case 1003:
            cout<<"You have chosen for ADANI ENTERPRICES"<<endl;
            cout<<"Its share price is: "<<price1003<<endl<<"Would you like to buy it(Y/N): ";
            cin>>ShareBuying;
            if(ShareBuying == 'Y' || 'y' )
            {
                done1003 = "Share purchased...";
                cout<<done1003<<endl;
            }
            else if(ShareBuying == 'N' || 'n')
            {
                cout<<"Share purchase canceled..."<<endl;
                goto purchase;
            }
            else
            {
               cout<<"You have entered a wrong input"<<endl;
            }
            cout<<"Would you like to buy more (1.Y/2.N): ";
            cin>>moretrade;
            switch(moretrade)
            {
            case 1:
                system("CLS");Trading::PurchaseLiveTrade();
                break;
            case 2:
                system("CLS");Trading::menu();break;
            default:
                cout<<"Wrong input...";break;
            }
          }
        }
        else if(AdminSelection == 1)
        {
            goto admin;
        }
        else
        {
            cout<<"Registration not found..."<<endl;
            //system("CLS");Trading::menu();
        }
        backhome();
    }
    void backhome()
    {
        gobackmenu:
        cout<<"Enter Y go back: ";
        char yes;
        cin>>yes;
        switch(yes)
        {
        case 'Y':
        case 'y':
            system("CLS");Trading::menu();
            break;
        default:
            cout<<"Wrong input entered...";
            goto gobackmenu;
        }

    }
    void Admin()
    {
        string Username = "Admin";
                string Password = "Admin";
                cout<<"Enter username: ";
                string ustest;
                cin>>ustest;
                cout<<"Enter password: ";
                string uspass;
                cin>>uspass;
                if(ustest == Username && uspass == Password)
                {
                    cout<<"What you want to do: "<<endl<<"1. Buy shares \n2. Sell shares";
                    cin>>AdminSelection;
                    if(AdminSelection == 1)
                    {
                        system("CLS");Trading::PurchaseLiveTrade();
                    }
                    else if(AdminSelection == 2)
                    {
                        system("CLS");Trading::SellLiveTrade();
                    }
                    else
                    {
                        cout<<"You have entered a wrong input";
                        Trading::backhome();
                    }
                }
                else
                {
                    cout<<"You are not an admin...";
                    cout<<endl;
                    system("CLS");Trading::menu();
                }
    }
    void SellLiveTrade()
    {
        //MRF shares sell
        if(created == "Your account has been successfully created..")
        {
            selltrade:
                cout<<"MRF TYPRES - 1001 \xcd TATA INDUSTRIES - 1002 \xcd ADANI ENTERPRICES - 1003"<<endl;
                cout<<"Enter the code of the share you would like to sell (Enter the code): ";
                cin>>SellShareCode;
                if(SellShareCode == 1001)
                {
                    cout<<"You have chosen for MRF TYRES, would you like to sell it(Y/N): ";
                    char selloption;
                    cin>>selloption;
                    if(selloption == 'Y' || 'y')
                    {
                        balance = balance - price1001;
                        cout<<"Shares sold"<<endl;
                        backhome();
                    }
                    else if(selloption == 'N' || 'n')
                    {
                        balance = balance;
                        cout<<"Your request for selling has been canceled...";
                        backhome();
                    }
                    else
                    {
                        cout<<"Wrong input entered...";
                        backhome();
                    }
                }
                //Tata share sell
                else if(SellShareCode == 1002)
                {
                    cout<<"You have chosen for TATA INDUSTRIES, would you like to sell it(Y/N): ";
                    char selloption;
                    cin>>selloption;
                    if(selloption == 'Y' || 'y')
                    {
                        balance = balance - price1002;
                        backhome();
                    }
                    else if(selloption == 'N' || 'n')
                    {
                        balance = balance;
                        cout<<"Your request for selling has been canceled..."<<endl;
                        backhome();
                    }
                    else
                    {
                        cout<<"Wrong input entered..."<<endl;
                        backhome();
                    }
                }

                //Adani enterprices shares sell
                else if(SellShareCode == 1003)
                {
                    cout<<"You have chosen for ADANI ENTERPRICES, would you like to sell it(Y/N): ";
                    char selloption;
                    cin>>selloption;
                    if(selloption == 'Y' || 'y')
                    {
                        balance = balance - price1003;

                        backhome();
                    }
                    else if(selloption == 'N' || 'n')
                    {
                        balance = balance;
                        cout<<"Your request for selling has been canceled...";
                        backhome();
                    }
                    else
                    {
                        cout<<"Wrong input entered...";
                        backhome();
                    }
                }
        }
        else if(AdminSelection == 2)
        {
            goto selltrade;
        }
        else
        {
            cout<<"Registration not found...";
            backhome();
        }

    }
    void Account_Creation()
    {
        cout<<"Enter your name: ";
        cin>>name;
        cout<<"Enter your email address: ";
        cin>>email;
        cout<<"Enter your phone number: ";
        cin>>phone;
        cout<<"Enter your age: ";
        cin>>age;
        if(age<18)
        {
            cout<<endl;
            cout<<"You are not eligible for trading as be India's government rules"<<endl;
            exit(EXIT_SUCCESS);
        }
        else
        {
            cout<<endl;
            cout<<"You are eligible to trade, you can continue..."<<endl;
        }
        cout<<"Enter your experience level in years \n1. 1-2 Years \n2. 2-5 Years \n3. 5+ Years: ";
        cin>>experience;
        created = "Your account has been successfully created..";
        cout<<endl<<created<<endl;
        //system("CLS");
        backhome();
    }
    void PrintAccountDetails()
    {
        cout<<endl<<"Name is: "<<name<<endl<<"Email is: "<<email<<endl<<"Phone number is: "<<phone<<endl<<"Age is: "<<age<<endl<<"Experience is: "<<experience<<endl<<endl;
        backhome();

    }
    void DeleteAccount()
    {
        name = "No name found...";
        email = "No email found...";
        phone = "No number found...";
        experience = 0;
        age = 0;
        deletedtext = "Account has been deleted";
        cout<<endl<<deletedtext<<endl<<endl;
        backhome();
    }
    void CheckBalance()
    {
        if (done1001 == "Share purchased...")
        {
            balance = balance + price1001;
        }
        if (done1002 == "Share purchased...")
        {
            balance = balance + price1002;
        }
        if(done1003 == "Share purchased...")
        {
            balance = balance + price1003;
        }
        else
        {
            balance = balance;
        }
        cout<<"Your current balance is: "<<balance;
        cout<<endl;
        backhome();
    }
};
int main()
{
    welcome welcome;
    Trading trading;
    cout<<"\xcd\xcd\xcd\xcd\xcd Welcome to Meeket Active Trading system \xcd\xcd\xcd\xcd\xcd"<<endl;
    cout<<endl;
    welcome.welcomescreen();
    //goto trading
    {
        gobackmenu:
        cout<<"Enter Y go back: ";
        char yes;
        cin>>yes;
        switch(yes)
        {
        case 'Y':
        case 'y':
            system("CLS");trading.menu();
            break;
        default:
            cout<<"Wrong input entered...";
            goto gobackmenu;
        }
    }

    //trading.menu();
}
