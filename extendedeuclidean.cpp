//
//  main.cpp
//  Assignment23053Axel
//
//  Created by Zack Axel on 2/16/22.
//

#include <iostream>


void eea_function (int a, int b, int *t1 , int *s1);






int main() {
    
    
    int integer_num1 = 100;
    
    int integer_num2 = 10;
    
    if (integer_num1 < 0 ){
        integer_num1 = abs(integer_num1);}
    
    if(integer_num2 < 0 ){
        integer_num2 = abs(integer_num2);}
    
    int t = 0;
    
    int s = 0;
    
    eea_function (integer_num1, integer_num2, &t, &s);
    
    std::cout << t<< std::endl;
    
    
    std::cout << s<< std::endl;
    
    
    
    return 0;
}

void eea_function (int a, int b, int *t1 , int *s1){
    
    
    int q;
    
   int s = 0;
    
   int old_s = 1;
  
    int t = 1;
    
    int old_t = 0;
    
    int r = b;
    
    int old_r = a;
    
    while (r != 0) {
         
        q = old_r / (r);
        
       int temp = r;
        
        
        r = old_r - q*r;
        
        old_r = temp;
        
        temp = s;
        
        s = old_s - q*s;
        
        old_s = temp;
        
        temp = t;
        
        
        t = old_t - (q*t);
        
        old_t = temp;
        
    }
    std::cout << "GCD = " << old_r <<std::endl;
    
    *s1 = s;
    *t1 = t;
    
}



