#include <iostream>
#include <string>
#include<stdlib.h>//use to clear console
using namespace std;
class TickTakToe
{
  private:
   string a[3][3];
   int r;
   int co;
   string p1;
   string p2;
  public:
  TickTakToe()
  {
    r=0;
    co=0;
    p1="0";
    p2="0";
    for(int j=0 ; j<3 ; j++)
    {
      for(int i=0 ; i<3; i++)
      {
        a[j][i]="-";
      }
    }
  }
   void setpl1(string pl1)
   {
    p1=pl1;
   }
     void setpl2(string pl2)
   {
    p2=pl2;
   }
  void rco()
  {
    cout<<"\nEnter row and column between (0-2)."<<endl;
    cout<<"Enter Number of row : ";
    cin>>r;
    cout<<"Enter Number of column : ";
    cin>>co;
  }
  bool check()
  {
     if (r>=0 && r<3 && co>=0 && co<3 && a[r][co]!="-")
    {
      cout<<"\n\t\t       ---- Already Exist .---- ";
      return false;
    }
     else if(r>=0 && r<3 && co>=0 && co<3 && a[r][co]=="-")
    {
      return true;
    }
   else
   {
      return false;
   }
   
  }
  void displayboard(string b)
  { 
    system("CLS");
    cout<<"\n\n\n";
    cout<<"                      _____________________________          "<<endl;
    cout<<"                      |                           |            "<<endl;
    cout<<"                      |*Welcome to Tick-Tack Toe* |             "<<endl;
    cout<<"                      |___________________________|            \n"<<endl;
    
    
    cout<<"\t\t\t________________________"<<endl;
    for(int j=0 ; j<3 ; j++)
    {
      cout<<"\t\t\t";
      for(int i=0 ; i<3 ; i++)
      {
        if(r==j && co==i)
        {
          a[j][i]=b;
          cout<<"|   "<<a[j][i]<<"  |";
        }     
        else if(r!=j || co!=i)
        {
         cout<<"|   "<<a[j][i]<<"  |";
        }  
      }
      cout<<endl;
      cout<<"\t\t\t|______||______||______|"<<endl;
    }
  }
  void displaywhat()
    {
        string a="-";
    for(int i=0 ; i<15 ; i++)
    {
        if(i%2==0)
        {
            a="O";
             cout<<"\n Player  1 ('O') "<<p1<<" : "<<endl;
            rco();
            if(check()!=true)
            {
                cout<<"\n\t\t\t----Invalid number , Try Again plz.----"<<endl;
                i--;
            }
            else
            {
              
              displayboard(a);
              
              if(winner()==true)
              {
                break;
              }
            }
        }
        else if(i%2!=0)
        {
            a="X";
            cout<<"\nPlayer 2 ('X') "<<p2<<" : "<<endl;
            rco();
            if(check()!=true)
            {
                cout<<"\n\t\t----Invalid number , Try Again .---- "<<endl;
                i--;
            }
            else
            {    
                displayboard(a);
                if(winner()==true)
                {
                   break;
                }
            }
        }
    }
   }
   bool winner()
   {
    for(int i=0 ; i<3 ; i++)
    {
       if(a[0][i]=="X" && a[1][i]=="X" && a[2][i]=="X" )
    {
        cout<<"\n\t\t-----Player 2  "<<p2<<"  ('X') is Winner .----- "<<endl;
        return true;
    }
    else if(a[i][0]=="X" && a[i][1]=="X" && a[i][2]=="X" )
    {
        cout<<"\n\t\t----Player 2  "<<p2<<"  ('X') is Winner .----- "<<endl;
          return true;
    }
    }

     for(int i=0 ; i<3 ; i++)
    {
       if(a[0][i]=="O" && a[1][i]=="O" && a[2][i]=="O" )
    {
        cout<<"\n\t\t-----Player 1  "<<p1<<"  ('O') is Winner .----- "<<endl;
         return true;
    }
    else if(a[i][0]=="O" && a[i][1]=="O" && a[i][2]=="O" )
    {
        cout<<"\n\t\t-----Player 1  "<<p1<<"  ('O') is Winner .----- "<<endl;
         return true;
    }
    }
   if(a[0][0]=="X" && a[1][1]=="X" && a[2][2]=="X" )
   {
     cout<<"\n\t\t-----Player 2 "<<p2<<"  ('X') is Winner .----- "<<endl;
      return true;

   }
   else if(a[0][2]=="X" && a[1][1]=="X" && a[2][0]=="X" )
   {
     cout<<"\n\t\t-----Player 2  "<<p2<<"  ('X') is Winner .----- "<<endl;
      return true;
   }
   else if(a[0][0]=="O" && a[1][1]=="O" && a[2][2]=="O" )
   {
     cout<<"\n\t\t-----Player 1  "<<p1<<"  ('O') is Winner .----- "<<endl;
     return true;
   }
   else if(a[0][2]=="O" && a[1][1]=="O" && a[2][0]=="O" )
   {
     cout<<"\n\t\t-----Player 1  "<<p1<<"  ('O') is Winner .----- "<<endl;
     return true;
   }
   else
   {
    bool s=true;
    for(int j=0 ; j<3 ; j++)
    {
    for(int i=0 ; i<3 ; i++)
    {
       if(a[j][i]=="-")
       {
        s=false;
       }
    }
    }
    if(s==true)
    {
        cout<<"\n\t\t\t -----    DRAW  -----"<<endl;
    }
    return s;
   }
   }
};
int main()
{
    char check;
    string pl1 , pl2;
    do
    {  
    system("CLS");
    cout<<"\n\n\n";
    cout<<"                     _____________________________          "<<endl;
    cout<<"                     |                           |            "<<endl;
    cout<<"                     |*Welcome to Tick-Tack Toe* |             "<<endl;
    cout<<"                     |___________________________|            \n"<<endl;
    TickTakToe t;
    cout<<"Player 1 : O  "<<endl;
    cout<<"Player 2 : X  "<<endl;
    cout<<"Press Enter . "<<endl;
    cin.ignore();
    cout<<"\nEnter name of Player 1 : ";
    getline(cin , pl1);
    t.setpl1(pl1);
    cout<<"Press Enter . "<<endl;
    cin.ignore();
    cout<<"Enter name of Player 2 : ";
    getline(cin , pl2);
    t.setpl2(pl2);
    string a="-";
    t.displayboard(a);
   t. displaywhat();
   cout<<"\n\n Do You Want to Play Again(y) or exit(n) ?    \n   (y/n) : ";
   cin>>check;
   } while (check=='y' || check=='Y');  
    return 0;
}