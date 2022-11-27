//
//  main.cpp
//  TheStockPurchaseMaxProblem
//
//  Created by nebil on 11/25/22.
//

#include <iostream>


using namespace std;
void  exhaustive_Search_Approach(int fund, int companyies[4][2]);
int The_Dynamic_Programming_Approach(int companyies[5][2], int numberComp, int fund);

int main(int argc, const char * argv[]) {
    cout << "====================================================================" << endl;
    cout << " " << endl;
    cout << "The_Dynamic_Programming_Approach" << endl;
    int companyiesx[4][2] = {{1, 2}, {2, 3}, {5, 6}, {6,7}};
    cout << " " << endl;

    cout << "Companies is {{1, 2}, {2, 3}, {5, 6}, {6,7}} and fund 10" << endl;
    
    exhaustive_Search_Approach(10, companyiesx);
    
    
    cout << " " << endl;
    cout << "====================================================================" << endl;
    cout << "The_Dynamic_Programming_Approach" << endl;
    cout << " " << endl;
     int companyies[5][2] = {{1, 1}, {3, 2}, {5, 3}, {6, 4}, {3,5}};
     int fund = 20;
     int totalCompanyies = 5;
    cout << "Compayies is {{1, 1}, {3, 2}, {5, 3}, {6, 4}, {3,5}} and fund 20 "<< endl;
    cout << "" << endl;
   
    cout <<"Five company stock and fund 20, you can buy " << The_Dynamic_Programming_Approach(companyies, totalCompanyies, fund ) << " stock "<<endl;
    cout << " " << endl;
    cout << "====================================================================" << endl;


    
    return 0;
}

void  exhaustive_Search_Approach(int fund, int companyies[4][2])
{
    
    
    int tempFund = fund;
    
    int tempStock = 0;
    int tempNum  = 0;
    
    int stock = companyies[0][1];
    
    
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
   
   
 
    int countNMaxStockPurchase = 0;
    for (int i = 0 ; i < 4; i++) {
        
        while (companyies[i][1] <= fund) {
            
            fund = fund - companyies[i][1];
            countNMaxStockPurchase = countNMaxStockPurchase + 1;
            cout << "price of stock  " << companyies[i][1] << endl ;
        
        }
        
        
        
    }
    
    
    cout << "you can buy " << countNMaxStockPurchase << " with " << tempFund << endl;
    

}



int The_Dynamic_Programming_Approach(int companyies[5][2], int numberComp, int fund ) {
    
    if (fund  == 0 ) {
        return  0;
    }

    int numberStockCanBuy  = INT_MAX;
    
    for (int i = 0 ; i < numberComp; i++) {

        
        
        if ( companyies[i][1] <= fund ) {
            
            
          //  cout << "kiziltepe " << companyies[i][1]  << endl;
            
            int sub_result =  1 + The_Dynamic_Programming_Approach(companyies, numberComp, fund -  companyies[i][1]);
            
            
            if (sub_result < numberStockCanBuy) {
                
                numberStockCanBuy = sub_result;
            }
        }
    }

    return  numberStockCanBuy;
}
























































