#include <iostream>

using namespace std;

int main()
{
    
    int quantity = 14;

    int sum = 0;
    int quantity_even = 0;
    int array[quantity];

    for(int i = 0; i <= quantity; i++){
        cout << "Enter " << i << " element ";
        cin >> array[i];
        if(array[i] % 2 == 0 && array[i] != 0){
            sum += array[i];
            quantity_even++;
        }
        
    }
    cout << "sum is " << sum << endl;
    cout << "quantity of even elements is " << quantity_even;
    return 0;
}
//input:  4 4 2 0 0 0 0 0 0 0 0 0 0 0 0 
//result: sum is 10                                                                                                                
//        quantity of even elements is 3 
