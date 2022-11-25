#include<iostream>
#include<iomanip>

using namespace std;

float commission(float bal){
    float commission= (bal*2.99)/100;
    return commission;
}

int main()
{

    while(1){
       
    float day;
    float balance;
    float total;

        cout<< "\nPlease Enter Day 01 to 30 :";
        cin>>day;
        cout<<"Enter initial balance: " <<"";
        cin>>balance;

        cout<< "\n";

        total= balance+commission(balance);

        for(int i=1; i<=day; i++){
            total= total+commission(balance);
            cout<< "day  "<<i<<setw(8)<< "   balnace is:  "<< total<<" $"<<endl;
        }
            cout<<"\n";
            cout<< " After " <<day<< " Day's total Balance will be : "<<total <<" $"<<endl;
            cout<<" In BDT your balance is = "<<total*100<< " TK"<<endl;

    }
                

    return 0;

}