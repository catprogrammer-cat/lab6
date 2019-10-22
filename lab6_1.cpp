#include <iostream>

using namespace std;

int main()
{
    
    int quantity = 14;

    int sum = 0, average;
    int quantity_odd = 0;
    int array[quantity];

    for(int i = 0; i <= quantity; i++){
        cout << "Enter " << i << " element";
        cin >> array[i];
        if(array[i] % 2 != 0){
            sum += array[i];
            quantity_odd++;
        }
        
    }
    average = sum / quantity_odd;
    cout << "average of odd elements is " << average;

    return 0;
}
