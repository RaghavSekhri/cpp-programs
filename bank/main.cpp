#include <iostream>

using namespace std;

class Bank
{
  protected:
      int account[3]={1001,1002,1003};
      string name[3]={"Sharanjit","Raghav","Riya"};
      int balance[3]={10000,20000,30000};
      int pin[3]={1111,2222,3333};
};
class Atm : public Bank
{
public:
    int useracc,i,flag=0,currentuser;

    void start()
    {
        cout<<"Welcome to HDFC Bank"<<"\n";
        cout<<"Enter your account number "<<"\n";
        cin>>useracc;
        checkUserExist(useracc);
    }
    void checkUserExist(int x)
    {
        for(i=0;i<3;i++)
        {
            if(x==account[i])
            {
                currentuser=i;
                flag=1;
            }
        }
        if(flag==1)
        {
            cout<<"Welcome User : "<<name[currentuser]<<endl;
            task();
        }
        else
        {
          cout<<"User doesn't exist, Try Again";
        }
    }
    void task()
    {
        int task;
        cout<<"Press 1 : Balance Inquiry "<<endl;
        cout<<"Press 2 : cash Withdrawal "<<endl;
        cout<<"Press 3 : Pin Change "<<endl;
        cin>>task;
        switch(task)
        {
        case 1:
            balance1();
            break;
        case 2:
            cash();
            break;
        case 3:
            pin1();
            break;
        default:
            cout<<"Invalid Choice"<<"\n";
        }
    }
   void balance1()
    {
        cout<<"Your Account balance is "<<balance[currentuser]<<"\n";
        again();
    }
    void cash()
    {
        checkpin();
    }
    void pin1()
    {
        pinchange();
    }
    void checkpin()
    {
        int pin2,cash1=0;
        cout<<"Enter your pin : ";
        cin>>pin2;
        if(pin2==pin[currentuser])
        {
            cout<<"Enter the amount of cash you wish to withdrawal : ";
        cin>>cash1;
        if(cash1<=balance[currentuser])
        {
            cout<<"The remaining balance in your account is "<<balance[currentuser]-cash1<<"\n";
        }
        else
            {
                cout<<"No enough Balance"<<"\n";
            }
        }
        else
            {
                cout<<"Pin invalid";
            }
            again();
    }
    void pinchange()
    {
        int pininsert,newpin,newpin2;
        cout<<"Insert your previous pin : ";
        cin>>pininsert;
        if(pininsert==pin[currentuser])
        {
            cout<<"Insert new pin: ";
            cin>>newpin;
            cout<<"Confirm pin: ";
            cin>>newpin2;
            if(newpin2==newpin)
            {
                cout<<"Your pin has been changed from "<<pin[currentuser]<<" to "<<newpin;
                pin[currentuser]=newpin;
            }
            else
            {
                cout<<"Both pins do not matches";
            }
        }
        else
        {
            cout<<"Invalid Pin";
        }

        again();
        }
    void again()
    {
        int wish;
        cout<<"If you wish to go to main menu, Press : 4\n";
        cout<<"If you wish to end this process here, Press : 5\n";
        cin>>wish;
        switch(wish)
        {
        case 4:
            start();
            break;
        case 5:
            cout<<"Thanks for visiting HDFC ATM ";
            break;
        default:
            cout<<"Invalid choice\n";
        }
    }
};
int main()
{
    Atm obj;
    obj.start();
    return 0;
}
