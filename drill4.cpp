#include "std_lib_facilities.h"

int main () 
{
    double inp;
    double value=0;
    string unit;
    int sum=0;
    vector<double> avalues;
 ////////////////////////////////////////////////////////////////////////////////////////// 
    while (cin >> inp >> unit)
    {


        if (unit == "m")

            inp=inp;

        else 
        if (unit== "cm")

            inp = inp/100;

        else 
        if (unit== "in")

            inp = inp*0.3048;

        else 
        if (unit== "ft")

           inp=inp*0.254;

        else {
            cout << "illegal representation of unit"<<endl;
            }

        avalues.push_back(inp);
        sum=sum+inp;

    }
 //////////////////////////////////////////////////////////////////////////////////////////   

    double min=0;
    
    for(int i=1; i<avalues.size();++i)
    {
        if(avalues[i]<avalues[min])
        {
            min=avalues[i];
        }
    }

    double max=0;

    for(int i=1; i<avalues.size();++i)
    {
        if(avalues[i]>avalues[max])
        {
            max=avalues[i];
        }
    }

   
 ////////////////////////////////////////////////////////////////////////////////////////// 
    cout << "all the values in the vector: "<<endl;
    sort(avalues);

    for (int i = 0; i < avalues.size(); ++i)
    cout << avalues[i] << "m, ";
    cout<<"sum of values: "<<sum<<" m"<<endl;
    cout<<"the greatest value is: "<<max<<" m"<<endl;
    cout<<"the smallest value is: "<<min<<" m"<<endl;
    
    return 0;
}