#include <bits/stdc++.h>

using namespace std;

int main() 
{
    
    int checking_ac_balance=10000,saving_ac_balance=10000;
    
    while(1)
    {
        cout<<"Please select your account type\n";
        cout<<"Checking - 1\n";
        cout<<"Saving - 2\n";
        cout<<"Exit - 3\n";
        int t=0;
        cin>>t;
        
        if(t==1)
        {
        
            vector<string> c,d;
            
            while(1)
            {
                
            
                cout<<"Please select option\n";
                cout<<"Credit - 1\n";
                cout<<"Debit - 2\n";
                cout<<"Print transactions list - 3\n";
                cout<<"To Go back - 4\n";
                
                int o;
                cin>>o;
                
                if(o==1)
                {
                    int amount;
                    cout<<"Enter amount : ";
                    cin>>amount;

                    checking_ac_balance+=amount;
                
                    char s[20];
                    time_t t = time(0);
                    strftime(s, 20, "%d-%m-%Y", localtime(&t));
                    string ss=s;
                    string temp=ss+" Credit "+to_string(amount);
                    
                    c.push_back(temp);
                }
                else if(o==2)
                {
                    int amount;
                    cout<<"Enter amount : ";
                    cin>>amount;
                    
                    checking_ac_balance-=amount;
                    
                    char s[20];
                    time_t t = time(0);
                    strftime(s, 20, "%d-%m-%Y", localtime(&t));
                    string ss=s;
                    string temp=ss+" Debit "+ to_string(amount);
                    
                    d.push_back(temp);
                }
                else if(o==3)
                {
                    cout<<"Checking Account Transactions\n";
                    
                    for(int i=0;i<c.size();i++)
                        cout<<c[i]<<endl;
                    
                    for(int i=0;i<d.size();i++)
                        cout<<d[i]<<endl;
                    
                    cout<<"Final balance = "<<checking_ac_balance<<endl;
                }
                else
                    break;
            }
        
        }
        else if(t==2)
        {
            vector<string> c,d;
            
            while(1)
            {
            
                cout<<"Please select option\n";
                cout<<"Credit - 1\n";
                cout<<"Debit - 2\n";
                cout<<"Print transaction list - 3\n"; 
                cout<<"To go back - 4\n";
                
                int o,amount;
                cin>>o;
                
                if(o==1)
                {
                    cout<<"Enter amount\n";
                    cin>>amount;
                    
                    saving_ac_balance+=amount;
                    char s[20];
                    time_t t = time(0);
                    strftime(s, 20, "%d-%m-%Y", localtime(&t));
                    string ss=s;
                    string temp=ss+" Credit "+to_string(amount);  
                    c.push_back(temp);
                }
                else if(o==2)
                {
                    cout<<"Enter amount\n";
                    cin>>amount;
                    
                    saving_ac_balance-=amount;
                    char s[20];
                    time_t t = time(0);
                    strftime(s, 20, "%d-%m-%Y", localtime(&t));
                    string ss=s;
                    string temp=ss+" Debit "+to_string(amount); 
                    d.push_back(temp);
                }
                else if(o==3)
                {
                    cout<<"Saving Account\n";
                    for(int i=0;i<c.size();i++)
                        cout<<c[i]<<endl;
                    
                    for(int i=0;i<d.size();i++)
                        cout<<d[i]<<endl;
                    
                    cout<<"Final balance ="<<saving_ac_balance<<endl;    
                }
                else
                {
                    cout<<endl;
                    break;
                }
                
            }
        }
        else
            return 0;
    
    }
   
}