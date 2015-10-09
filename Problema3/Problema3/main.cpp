//
//  main.cpp
//  Problema3
//
//  Created by Krikor Bisdikian on 10/8/15.
//  Copyright © 2015 Krikor Bisdikian. All rights reserved.
//

#include <iostream>
#include <vector>

int main(int argc, const char * argv[]) {

    std::vector<int> X;
    std::vector<int> Y;
    
    for(int i=0; i<5; i++){
        X.push_back(i);
        
        Y.push_back(i+3);
    }
    
    std::vector<int> masLargo;
    std::vector<int> aux;
    
        int k = 0;
        int m = 0;
        for (int i = 0; i<X.size(); i++)
        {
            k=i;
            
            for (int j = 0; j<Y.size(); j++)
            {
                m = j;
                
                while(X[k] == Y[m])
                {
                    aux.push_back(X[k]);
                    k++;
                    m++;
                }
                
                if (masLargo.size() < aux.size())
                {
                    masLargo = aux;
                }
            }
            
            aux.clear();
        }
        
        for (auto i : masLargo)
        {
            std::cout<<i<<" ";
        }
        std::cout<<std::endl;
    return 0;
}
