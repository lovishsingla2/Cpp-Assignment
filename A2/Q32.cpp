#include <iostream>
#include <iomanip>
using namespace std;

int main( ) {
    cout << fixed << setprecision(2);
    cout <<"Please enter 0 to indicate USD->CAD conversion, or enter 1 to indicate CAD->USD conversion: \n";
    int conversion;
    const double conversion_rate {1.32};
    cin >> conversion;
    switch (conversion) {
        //usd to cad calc
    case 0:
        cout <<"Please enter the amount of USD dollars: \n";
        double USD;
        cin >> USD;
        cout <<"They can be converted to "<< USD * conversion_rate <<" CAD.\n";
    break;
    //cad to usd calc
    case 1:
        cout <<"Please enter the amount of CAD dollars: \n";
        double CAD;
        cin >> CAD;
        cout <<"They can be converted to "<< CAD / conversion_rate <<" USD.\n";
        break;
        default:
        cout <<"Sorry invalid option" <<endl;
    }
    
    return 0;
}
