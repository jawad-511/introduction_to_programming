#include <iostream>
using namespace std;


int main()
{
    int totalSales;
    float commission;
    cout << "Enter The Total Sales\n";
    cin >> totalSales;

    if(totalSales == 1000000)
    {
        commission = totalSales * 0.01;
        cout << commission;
    }

    else if(totalSales > 500000 && totalSales < 1000000)
    {
        commission = totalSales * 0.02;
        cout << commission;
    }

    else if(totalSales > 100000 && totalSales < 500000)
    {
        commission = totalSales * 0.03;
        cout << commission;
    }

    else if(totalSales > 50000 && totalSales < 100000)
    {
        commission = totalSales * 0.05;
        cout << commission;
    }
    else{
        cout << "Percentage is 0%\n";
    }
    

    return 0;
}