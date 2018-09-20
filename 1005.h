#include <iostream>
#include <iomanip>
 
using namespace std;


// Media
int main() {
    double a,b,MEDIA;
    cin >> fixed >> setprecision(1);
    cin>>a>>b;
    MEDIA = ((a * 3.5) + (b * 7.5)) / (3.5 + 7.5);
    cout << fixed << setprecision(5);
    cout << "MEDIA = " << MEDIA << endl;
    
    return 0;
}