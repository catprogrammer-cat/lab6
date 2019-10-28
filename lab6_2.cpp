#include <iostream> 

using namespace std; 
int main() { 
  
   int a[] = {100, 9, 1, 3, 1000};
   int largest, pos; // 'lagest' discription below , varible 'pos' - of element 
   largest = a[0]; // requere to find largest element(his value and pos) 
                   // also this varible will have result after loop work          
   for(int i=0; i<=4; i++) {
      if(a[i]>largest) { 
         largest = a[i];
         pos = i;
      }
   }
    //before manipulation   
    cout << "arr = ";
    for(int i=0; i<=4; i++)
        cout << "[" <<  a[i] << "]";
    cout << endl;
    a[pos] = a[0];
    a[0] = largest;
    //after manipulation 
    cout << "arr = ";
    for(int i=0; i<=4; i++)
        cout << "[" <<  a[i] << "]";
    cout << endl;
   return 0; 
}
//result: arr = [100][9][1][3][1000]                                                   
//		  arr = [1000][9][1][3][100] 
