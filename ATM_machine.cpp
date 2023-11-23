#include<iostream>
using namespace std;

class ATM{
    private:
        int balance,pincode,success;
    public:
        ATM(int balance,int pin){
            balance = balance;
            pincode = pin;
        }
        void deposit(int amount){
        }
        int getbalance()
        {
            return balance;
        }
        int withdraw(int amount,int pin)
        {
            if(pin!=pincode)
            {
                return false;
            }
            if (amount>balance)
            {
                return false;
            }
            balance = balance - amount;
            return true;
        }
        void deposit(int amount)
        {
            balance = balance+amount;
        }
        int transfer(int amount, ATM receiver,int pin)
        {
            if(pin != pincode)
            {
                return false;
            }
            success = withdraw(amount,pin);
            if(success)
            {
                receiver.deposit(amount);
            }
            else
            {
                return false;
            }
        }

};

main()
{
    ATM atm(1000,1234);
    int ch,success,amount,op,pin;
    do{
        cout<<"1.View Balance"<<endl;
        cout<<"2.Cash Withdraw"<<endl;
        cout<<"3.Cash Deposit"<<endl;
        cout<<"4.Cash Transfer"<<endl;
        cout<<"5.Exit"<<endl;
        cout<<"Enter your choice"<<endl;
        cin>>ch;

        switch(ch)
        {
            case 1:
                cout<<"Your Balance :"<<atm.getbalance();
                break;
            case 2:
                cout<<"Enter the amount to withdraw :"<<endl;
                success= atm.withdraw(amount,1234);
                if(success)
                {
                    cout<<"Amount withdrawn successfully";
                }
                else
                {
                    cout<<"Insufficient Balance..."<<endl;
                }
                break;
            case 3:
                cout<<"Enter the Amount to Deposit: ";
                cin>>amount;
                atm.deposit(amount);
                cout<<"Amount deposited successfully"<<endl;
                break;
            case 4:
                cout<<"Enter the Amount to Transfer :";
                cin>>amount;
                cout<<"Enter Pin Code";
                cin>>pin;
                success=atm.transfer(amount,atm,pin);
                if(success)
                {
                    cout<<"Transfer Successfully....."<<endl;
                }
                else
                {
                    cout<<"Transfer Failed..."<<endl;
                }
                break;
            case 5:
                cout<<"Thanks for using ATM"<<endl;
                exit(1);
                break;
            default:
                cout<<"Invalid choice"<<endl;

        }
        cout<<"\nDo you want to try another transaction [Yes / No]: ";
        cin>>op;
        // while(op =='y'||op=='Y')
    }while(op =='y'||op=='Y');

    //cout<<"Your Balance is :"<<atm.getbalance();
}