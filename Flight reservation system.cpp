#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;

int glob=0;

class d_booking
{
protected:
    int pnr;
    char f_d[10],toja[7],tojd[7];
    int doj,day,month,year;
    int choice,src,dest;
    char slash_dummy;
public:
    void d_pnr()
    {
        glob++;
        pnr=glob;
    }
   int j_detail()
    {
        cout << "\nEnter DateOfJourney(DD/MM/YY)." << "Please enter a valid date." <<  endl;
        cin >> day>>slash_dummy>>month>>slash_dummy>>year;
        cout << "\n \1.Delhi(1) \t\2.Hyderabad(2) \t\3.Ahemdabad(3) \t\4.Kolkata(4)" << endl << endl;
        cout << "\tEnter Source" << endl;
        cin >> src;
        cout << "\tEnter destination" << endl;
        cin >> dest;
        if((src==1 && dest==2) || (src==2 && dest==1))
        {
            cout<<"\t\t Flights Found"<<endl<<endl;
            cout<<"Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout<<"1.Air India(1)\t08:00\t\t11:05\t\tRs5000\t\tRefundable\n";
            cout<<"2.Indigo(2)\t10:00\t\t12:20\t\tRs4000\t\tRefundable\n";
            cout<<"3.Vistara(3)\t13:00\t\t15:30\t\tRs8000\t\tRefundable\n";
        }

        else if((src==1 && dest==3) || (src==3 && dest==1))
        {
            cout<<"\t\t Flights Found"<<endl<<endl;
            cout<<"Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout<<"1.Air India(1)\t08:00\t\t11:05\t\tRs5500\t\tRefundable\n";
            cout<<"2.Indigo(2)\t10:00\t\t12:20\t\tRs4500\t\tRefundable\n";
            cout<<"3.Vistara(3)\t13:00\t\t15:30\t\tRs8500\t\tRefundable\n";
        }

        else if((src==1 && dest==4) || (src==4 && dest==1))
        {
            cout<<"\t\t Flights Found"<<endl<<endl;
            cout<<"Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout<<"1.Air India(1)\t08:00\t\t11:05\t\tRs7000\t\tRefundable\n";
            cout<<"2.Indigo(2)\t10:00\t\t12:20\t\tRs4200\t\tRefundable\n";
            cout<<"3.Vistara(3)\t13:00\t\t15:30\t\tRs6000\t\tRefundable\n";
        }

        else if((src==2 && dest==3) || (src==3 && dest==2))
        {
            cout<<"\t\t Flights Found"<<endl<<endl;
            cout<<"Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout<<"1.Air India(1)\t08:00\t\t11:05\t\tRs5000\t\tRefundable\n";
            cout<<"2.Indigo(2)\t10:00\t\t12:20\t\tRs4005\t\tRefundable\n";
            cout<<"3.Vistara(3)\t13:00\t\t15:30\t\tRs8050\t\tRefundable\n";
        }

        else if((src==2 && dest==4) || (src==4 && dest==2))
        {
            cout<<"\t\t Flights Found"<<endl<<endl;
            cout<<"Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout<<"1.Air India(1)\t08:00\t\t11:05\t\tRs5300\t\tRefundable\n";
            cout<<"2.Indigo(2)\t10:00\t\t12:20\t\tRs4000\t\tRefundable\n";
            cout<<"3.Vistara(3)\t13:00\t\t15:30\t\tRs4550\t\tRefundable\n";
        }

        else if((src==3 && dest==4) || (src==4 && dest==3))
        {
            cout<<"\t\t Flights Found"<<endl<<endl;
            cout<<"Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout<<"1.Air India(1)\t08:00\t\t11:05\t\tRs2000\t\tRefundable\n";
            cout<<"2.Indigo(2)\t10:00\t\t12:20\t\tRs4300\t\tRefundable\n";
            cout<<"3.Vistara(3)\t13:00\t\t15:30\t\tRs6969\t\tRefundable\n";
        }

        else if(src==dest)
        {
            cout << "\nSource and destination can't be same.\nTry again\n\n\n" << endl;
            return j_detail();
        }
        else
        {
            cout <<"\nWrong input entered\nTry again\n\n\n" << endl;
            return j_detail();
        }
    }

int select_flight()
    {   cout << "\nEnter your choice" << endl;
        cin >> choice;
        switch(choice)
        {
          case 1:
                cout << "\nFlight selected:"<<endl;
                cout << "Air India"<<endl;
                strcpy(f_d,"Air India");
                cout << "Departure Time : 08:00"<<endl;
                cout<<"Arrival Time: 11:05"<<endl;
                strcpy(tojd,"8:00");
                strcpy(toja,"11:05");
                break;
          case 2:
                cout << "\nFlight selected:"<<endl;
                cout << "Indigo"<<endl;
                strcpy(f_d,"Indigo");
                cout << "Departure Time : 10:00"<<endl;
                cout<<"Arrival Time: 12:20"<<endl;
                strcpy(tojd,"10:00");
                strcpy(toja,"12:20");
                break;
          case 3:
                cout << "\nFlight selected:" << endl;
                cout << "Vistara" << endl;
                strcpy(f_d,"Vistara");
                cout << "Departure Time : 13:00" << endl;
                cout<<"Arrival Time: 15:30" << endl;
                strcpy(tojd,"13:00");
                strcpy(toja,"15:30");
                break;
          default:
                cout << "Wrong input entered.\nTry again" << endl;
                return select_flight();
        }
    }
};

class passenger: public d_booking
{
protected:
char f_name[20],l_name[20],email[50];
int age,gender;
long int c_no;

public:
void p_detail(int x)
{
 j_detail();
 select_flight();

 cout<<"\n\n\t ENTER THE PASSENGER DETAILS: "<<endl;
 cout<<"Enter the First name: "<<endl;
 cin>>f_name;
 cout<<"Enter the Last name: "<<endl;
 cin>>l_name;

}
int gender_check()
{
cout<<"\n\n Select Your Gender: "<<endl;
cout<<"\n\n Select \1.MALE(1)  \2.FEMALE(2)  \3.Others(3)"<<endl;
cin>>gender;
if(gender>3)
{
    cout<<"Wrong Input enter\n\n Try again"<<endl;
    return gender_check();
   }
}
void more_details()
       {
        cout << "Age:";
        cin >> age;
        cout << "Email Id:";
        cin >> email;
        cout << "Contact no.(10 digits):";
        cin >> c_no;
        cout << "\n\nDetails Entered:\n";
        cout << "Name:" << f_name << " " << l_name << endl;
        cout << "Gender:" << gender << endl;
        cout << "Age:" << age << endl;
        cout << "Email id:" << email << endl;
        cout << "Contact No.:" << c_no << endl;
    }

    int getpnr()
    {
        return pnr;
    }

    void disp()
    {
         cout<<"PNR:" << pnr << endl;
         cout<<"Flight:" << f_d << endl;
         cout<<"Name:" << f_name << " " << l_name << endl;
         cout<<"DOJ:" <<day<<slash_dummy<<month<<slash_dummy<<year<<endl;
         cout<<"Departure Time:" << tojd << endl;
         cout<<"Arrival Time:" << toja;
    }
};

class payment
{
 protected:
 long int choice1,bank,card,date,cvv,user_id;
    char password[15];

    public:
    void pay_detail()
    {
    cout<<"\n\n\tHow Would You like to pay?:  "<<endl;
    cout<<"\n\1.Debit Card(1) \n\2.Credit Card(2) \n\3.Net Banking(3) "<<endl;
    cout<<"\n\n\tEnter Your Choice: "<<endl;
    cin>>choice1;

    switch(choice1)
    {
        case 1:
        cout<<"\n\nEnter Card number: "<<endl;
        cin>>card;
        cout<<"\n\nEnter Expiry Date: "<<endl;
        cin>>date;
        cout<<"\n\nEnter your CVV number "<<endl;
        cin>>cvv;
        cout<<"\n\nTransaction sucessful "<<endl;
        break;

        case 2:
        cout<<"\n\nEnter Card number: "<<endl;
        cin>>card;
        cout<<"\n\nEnter Expiry Date: "<<endl;
        cin>>date;
        cout<<"\n\nEnter your PIN "<<endl;
        cin>>cvv;
        cout<<"\n\nTransaction sucessful "<<endl;
        break;

        case 3:
        cout<<"\n\nKindly Choose Your Respective Bank: 1.State Bank Of India(1)\n\n 2.ICIC Bank(2)\n\n 3.HDFC Bank(3)\n\n"<<endl;
        cout<<"\n\nselect your bank: "<<endl;
        cin>>bank;
        cout << "\nYou have selected:" << endl;
        cout << "\nEnter user id:";
        cin >> user_id;
        cout << "\nEnter password:";
        cin >> password;
        cout << "\nTransaction Successful\n";
         break;
         default:
         cout<<"Wrong Input// Please Enter again\n"<<endl;
         return pay_detail();
    }
  }

};

//main frame work
void createfile (passenger p)//file creation for booking
{
ofstream fin("domestic.txt",ios::binary|ios::app);  //ifstream is an input file stream. It is a special kind of an istream that reads in data from a data file. ofstream is an output file stream.
 fin.write((char*)&p,sizeof(p));//writing to file
 fin.close();//closing file
}

void cancelticket(int x)//function to cancel ticket
{
    passenger p;
    int f=0;
    ifstream fout("domestic.txt",ios::binary|ios::app);//for reading file
    ofstream fin("domestic1.txt",ios::binary|ios::app);//for writing a new file
    fout.read((char*)&p,sizeof(p));//reading file
    while(fout)
    {
      if(p.getpnr()!=x)//checking pnr
      fin.write((char *)&p,sizeof(p));//writing to file
      else
        {
            p.disp();//display details
            cout<<"\nYour Above Ticket is Being cancelled:\n"<<"Amount refunded: Rs 1000\n";
            f++;//incrementing f if pnr found
        }
        fout.read((char *)&p,sizeof(p));//reading another record from file

    }
    if(f==0)//if f==0,pnr not found
     cout<<"Ticket not found\n";
   fout.close();//closing file
   fin.close();//closing file
   remove("domestic.txt");//deleting old file
   rename("domestic1.txt","domestic.txt");//renaming new file
}

void checkticket(int x)//function to check pnr or ticket
{
   passenger p;
   int f=0;
   ifstream fout("domestic.txt",ios::binary);//opening file
   fout.read((char *)&p,sizeof(p));//reading file
   while(fout)
   {
     if(p.getpnr()==x)//checking pnr
     {
      p.disp();//display details
      cout<<"\nYour ticket"<<endl;
      f++;//incrementing f if pnr found
      break;
     }
     fout.read((char *)&p,sizeof(p));//reading another record from the same file

   }
   fout.close();//closing file
   if(f==0)//if f==0, pnr not found
   cout<<"Ticket not found"<<endl;
}


int main()
{

    class d_booking d1;
    class passenger p1;
    class payment p2;
    int ch,ch1,n;
    char input;
    do
    {
    	system("CLS");
        cout<<"WELCOME TO FLIGHT RESERVATION SYSTEM"<<endl<<endl;
        cout<<"\tBook Your Flight Tickets at affordable Prices!"<<endl;

        cout<<"\t\t Press 1 Flight Booking             \t"<<endl;
        cout<<"\t\t Press 2 for Ticket Cancellation    \t"<<endl;
        cout<<"\t\t Press 3 To check your ticket       \t"<<endl;
        cout<<"\t\t Press 4 to exit                    \t"<<endl;

        cout<<"Please Enter Your Choice"<<endl;
        cin>>ch;

      switch(ch)
      {
          case 1:
              system("CLS");
              cout << "\n\n\1.Domestic Fights(1)" << endl;
              cout << "\nPlease enter your option" << endl;
              cin >> ch1;
              system("CLS");
              switch(ch1)
              {
                   case 1:
                        p1.d_pnr();
                        p1.p_detail(1);
                        p1.gender_check();
                        p1.more_details();
                        p2.pay_detail();
                        p1.disp();
                        createfile(p1);
                        break;

                   default:
                    cout << "Wrong input entered\nTry again\n\n\n" << endl;
                    return main();
              }
          break;
          case 2:

              system("CLS");
              cout << "\1.Domestic Fights(1) " << endl;
                 cout << "\nPlease enter your option" << endl;
                 cin >> ch1;
                 system("CLS");
                  if(ch1==1)
                {
                   cout << "Please enter your PNR no.:" << endl;
                   cin>>n;
                   cancelticket(n);
                }

               else
               {
                   cout << "Wrong input entered\nTry again\n\n\n";
                   return main();
               }
               break;
          case 3:
          system("CLS");
                  cout << "\1.Domestic Fights(1)" << endl;
                  cout << "\nPlease enter your option" << endl;
                  cin >> ch1;
                  system("CLS");
                  if(ch1==1)
                  {
                  cout << "Please enter your PNR no.:" << endl;
                  cin>>n;
                  checkticket(n);
                  }

                   else
               {
                   cout << "Wrong input entered.\nTry again\n\n\n";
                   return main();
               }
               break;
            case 4:
			system("CLS");
			cout<<"Thanks for your Visit, we will be looking forward for your safe and happy journey";
			return 0;
          default:
            cout << "Wrong input entered\nTry again.\n\n\n\n" << endl;
            return main();
      }
    cout<<"\n\n\nDo you wish to continue:(y/Y)" << endl;
    cin >> input;
  }while(input=='Y' || input=='y');
return 0;
}

