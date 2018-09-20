#include <iostream>
#include <iomanip>
using namespace std;

//Media 2

int main() {
 
    double a,b,c,MEDIA;
    cin >> fixed >> setprecision(1);
    cin>>a>>b>>c;
    MEDIA = ((a * 2) + (b * 3) + ( c * 5) ) / (2+3+5);
    cout << fixed << setprecision(1);
    cout << "MEDIA = " << MEDIA << endl;
 
    return 0;
}