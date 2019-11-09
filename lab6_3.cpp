#include <iostream>
#include <cstdlib> // using random function
#include <ctime>

using namespace std;

void fill_randomly_array(int array[],int quantity){
    srand ( time(0) );
    for(int i = 0; i < quantity; i++){
        array[i] = rand() % 10 + 1;
    }
}
void print_array(int array[],int quantity){
    for(int i=0;i<quantity;i++){
        cout << "[" << array[i] << "]";
    }
}
int quantity_even_element_array(int array[],int quantity){
    int quantity_even_element = 0;
    for(int i=0;i < quantity;i++){
        if(array[i] % 2 == 0){
            quantity_even_element++;
        }    
    } 
    return quantity_even_element;
}
int sum_even_element_array(int array[],int quantity){
    int sum = 0;
    for(int i=0;i < quantity;i++){
        if(array[i] % 2 == 0){
            sum+=array[i];
        } 
    }
    return sum;
}



int main()
{
    int array[12];
    
    fill_randomly_array(array,12);
    print_array(array,12);
    
    cout << "\nQuantity of even element of array: " << quantity_even_element_array(array,12) << endl;
    cout << "Sum of even element of array: " << sum_even_element_array(array,12) << endl;
   
    return 0;
}
