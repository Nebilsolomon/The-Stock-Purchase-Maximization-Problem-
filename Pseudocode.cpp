

void  exhaustive_Search_Approach(int fund, int companyies[4][2]):

    
    
    int tempFund = fund;
    int tempStock = 0;
    int tempNum  = 0;
    
    int stock = companyies[0][1];
    
    
    for (int i = 0 ; i<3; i++):
        
        
        for (int j  = 0 ;  j < 3 - i ; j++):
            
        if (companyies[j][1]  <   (companyies[j + 1][1]) ):
               
            tempStock = companyies[j][1];
            tempNum =   companyies[j][0];
            
            companyies[j][1]  = (companyies[j + 1][1]);
            companyies[j][0]  = (companyies[j + 1][0]);
            
            (companyies[j + 1][1]) = tempStock;
            (companyies[j + 1][0]) = tempNum;
            

   
 


    int countNMaxStockPurchase = 0;
    for (int i = 0 ; i < 4; i++):
        
        while (companyies[i][1] <= fund):
            
            fund = fund - companyies[i][1];
            countNMaxStockPurchase = countNMaxStockPurchase + 1;
        
        
        
        
        
    



int The_Dynamic_Programming_Approach(int companyies[5][2], int numberComp, int fund ):
    
    if (fund  equel  0 ):
        return  0;
    

    int numberStockCanBuy  = INT_MAX;
    
    for (int i = 0 ; i < numberComp; i++):

        
        
        if ( companyies[i][1] <= fund ):
            
            
          //  cout << "kiziltepe " << companyies[i][1]  << endl;
            
            int sub_result =  1 + The_Dynamic_Programming_Approach(companyies, numberComp, fund -  companyies[i][1]);
            
            
            if (sub_result < numberStockCanBuy):
                
                numberStockCanBuy = sub_result;

    return  numberStockCanBuy;




 /*
 
  Mathematically_Analyze_Aech_Pseudocode

   Exhaustive_Search_Approach
 
  Complexity = O(7n^2 + 1 + 2n^) = o(n^2) effeciency
  

  
   The_Dynamic_Programming_Approach
  
  Complexity =    O(3 + 4n + 1) = o(n) effeciency
  
  
 */
 
 
    
  
