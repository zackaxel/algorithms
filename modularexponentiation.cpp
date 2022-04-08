//
//  main.cpp
//  Problem 4- Assignment 2- Cop 3530
//
//  Created by Zack Axel on 3/1/22.
//

#include <iostream>
#include <vector>

std::vector<int> BinaryK(int k);

int ModularExpo(int a, int K, int n, int k);

int main() {

    int a;
    int k;
    int n;
    
    
    std::cout << "Please enter a" << std::endl;
    std::cin >> a;
    
    std::cout << "Please enter k" <<std::endl;
    std::cin >> k;
    
    std::cout << "Please enter n" <<std::endl;
    std::cin >> n;
    
    std::vector<int> BinaryK(int k);
    
    std::vector<int> K = BinaryK(k);
    
    
    
    int ModularExpo(int a, std::vector<int> K, int n, int k);
    
    int result = ModularExpo(a, K, n, k);
    
    for(int i = 0; i < K.size(); i++){
        
        
                    K[i];
        std::cout<< K[i] << std::endl;
    }
    
    std::cout << result <<std::endl;
    
    
    
    
    

    
    return 0;
    
    
}



std::vector<int> BinaryK(int k){
 
    int tmp;
    
    std::vector<int> vectK = {0};

    tmp = k;
    
    int i = 0;
    while (tmp > 0){
    
        vectK.push_back(tmp % 2);
        tmp = (tmp - vectK[i]) / 2;
        i++;
        
    }
    return vectK;
    
    

}


int ModularExpo(int a, std::vector<int> K, int n, int k){
    
    int b;
    int A;
    
    
    
    
    
    std:: vector<int> vectK;
    
    
    
    if (n == 1){
        return 0;}
    b = 1;
    if (k == 0){
        
        
        return b;
    }
    A = a;
    if (K[0] == 1){
        b = a; }
    for(int i = 1; i < K.size() - 1; i++){
        
        A = A*A % n;
        if (K[i] == 1){
            b = A * b % n;
            
      
        }
        
        
    }
    
    
    return b;
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
}


