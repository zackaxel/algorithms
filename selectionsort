//
//  main.cpp
//  Problem 1-assignment 2-cop3530
//
//  Created by Zack Axel on 3/2/22.
//

#include <iostream>
#include <vector>

void SelectionSort(std::vector<int> A, int size);

int main() {
    
    std::vector<int> A;
    int array_size;
    std::cout<< "Please enter the size of array you wish to sort";
    std::cin >> array_size;
    std::cout <<"Please enter the values you wish to have in the array";
    for(int i = 0; i < array_size; i++){
        int tmp;
        std::cin >> tmp;
        A.push_back(tmp);
        
    }
    
    std::cout << "Unsorted array is:";
    for(int i = 0; i < array_size; i++){
        std::cout <<A[i];
    }
   SelectionSort(A, A.size());
    std::cout << "Sorted array is:";
    for(int i = 0; i < A.size(); i++){
        std::cout << A[i];
    }

    return 0;
}

void SelectionSort(std::vector<int> A, int size){
    
    int maxIndex = 0;
    int i;
    int tmp;
    for(i = 0; i <= size - 2; i++){
        maxIndex = i;
        for(int j = i + 1; j <= size - 1; j++){
            if(A[j] > A[maxIndex]){
                maxIndex = j;}
            tmp = A[i];
            A[i]= A[maxIndex];
            A[maxIndex] = tmp;
            }
        }
 
}

