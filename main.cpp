//
//  main.cpp
//  TheStockPurchaseMaxProblem
//
//  Created by nebil on 11/25/22.
//

#include <iostream>


using namespace std;
void  exhaustive_Search_Approach(int fund, int companyies[4][2]);

int main(int argc, const char * argv[]) {
    // insert code here...
   
    
    
  
    int companyies[4][2] = {{1, 2}, {3, 3}, {5, 6}, {6, 7} };
    exhaustive_Search_Approach(10, companyies);
    
    
    
    return 0;
}

void  exhaustive_Search_Approach(int fund, int companyies[4][2])
{
    
    
    
 //     int companyies[4][2] = {{1, 2}, {3, 3}, {5, 6}, {6, 7} };
    
    int tempStock = 0;
    int tempNum  = 0;
    
    int stock = companyies[0][1];
    
    cout <<" stock  " <<  stock << endl;
    
    cout << "hello exha" << endl;
    for (int i = 0 ; i<3; i++) {
        
        
        for (int j  = 0 ;  j < 3 - i ; j++) {
            
        if (companyies[j][1]  <   (companyies[j + 1][1]) ){
               
            tempStock = companyies[j][1];
            tempNum =   companyies[j][0];
            
            companyies[j][1]  = (companyies[j + 1][1]);
            companyies[j][0]  = (companyies[j + 1][0]);
            
            (companyies[j + 1][1]) = tempStock;
            (companyies[j + 1][0]) = tempNum;
            
            }
        }
        
    }
   
   
   //   7  ,    6 ,  3  ,  2
  
    
    //     int companyies[4][2] = {{1, 2}, {3, 3}, {5, 6}, {6, 7} };

    
    
    for (int i = 0 ; i < 4; i++) {
        
        while (companyies[i][1] <= fund) {
            
            fund = fund - companyies[i][1];
            
            cout << "it issss " << companyies[i][1] << endl ;
        
        }
        
        
        
    }
    
    

}
