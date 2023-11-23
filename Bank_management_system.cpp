#include<iostream>

using namespace std;

int main()
{
    char start_val;
    float onlineShopping(void);
    cout<<"Please press S to start Shopping"<<endl;
    cin>>start_val;
    
    if(start_val == 'S' || start_val == 's')
    {
        float Total_amount = onlineShopping();
    }
    else
    {
        cout<<"Please choose the right key.,Press 's' "<<endl;
    }
}

float onlineShopping()
{
    char ch;

    cout<<"**************Welcome to Online Shopping************"<<endl;
    cout<<"**************Please Follow the Instruction*********"<<endl;
    
    cout<<"(1) Please Enter m to order Mobile Phone"<<endl;
    cout<<"(2) Please Enter l to order Laptops"<<endl;
    cout<<"(3) Please Enter h to order HeadPhone"<<endl;
    cout<<"(4) Please Enter I to order IPad"<<endl;
    cout<<"(5) Please Enter M to order Mouse"<<endl;
    cout<<"(6) Please Enter k to order Keyboard"<<endl;
    cout<<"(7) Please Enter w to order Smart Watch"<<endl;
    cout<<"(8) Please Enter e to order Earpods"<<endl;
    cout<<"(9) Please Enter p to order Pendrive"<<endl;

    cin>>ch;

    if(ch=='m')
    {
        cout<<"Mobile Details"<<endl;
        cout<<"(1) Apple => Price :400000"<<endl;
        cout<<"(2) Samsung => Price: 350000"<<endl;
        cout<<"(3) Xiaomi => Price: 300000"<<endl;
        cout<<"(4) Huwaei => Price: 450000"<<endl;
        int choice;
        cout<<"Enter your Choice:"<<endl;
        cin>>choice;


    }
}
