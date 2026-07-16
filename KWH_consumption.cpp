#include<iostream> 
using namespace std;


int main() {
   
    int kWh;
    cout << "qual o consumo de energia em kWh?"; 
    cin >> kWh;

    if (kWh < 5) {
    
      cout << "Excellent";
      
    } if (kWh >= 5 && kWh < 10) {
    
        cout << "Good";
     
    } if (kWh >= 10 && kWh <= 15) {
    
        cout << "Fair";
    
    } if (kWh > 15) {
    
        cout << "Poor";
    
    }
    
   


}