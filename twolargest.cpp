//
//  main.cpp
//  Problem 3 - Assignment 2
//
//  Created by Zack Axel on 3/2/22.
//

#include <iostream>
#include <vector>

using namespace std;

void TwoLargest(vector<int> A);





int main() {
    
    
    vector<int> A ;
    
    int size_list;
    
    cout << "What size list do you want?";
    cin >> size_list;
    
    cout << "Please enter list of values";
    
    for(int i = 0; i < size_list; i++){
        
        int temp;
        
        cin >> temp;
        
        A.push_back(temp);
        
    }
    TwoLargest(A);
    
    
    return 0;
}



void TwoLargest(vector<int> A){
    
    
    int large_1 = 0;
    int large_2 = 0;
    
    for(int i = 1; i <  A.size(); i++){
        
        
        
        if(A[i] > large_1){
            large_2 = large_1;
            large_1 = A[i];
        }
        else if (large_2 < A[i]){
            large_2 = A[i];}
        
        
    }
    
    std::cout << large_1;
    std::cout << large_2;
    
    
    
    
}















































