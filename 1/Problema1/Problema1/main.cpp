//
//  main.cpp
//  Problema1
//
//  Created by Krikor Bisdikian on 10/4/15.
//  Copyright © 2015 Krikor Bisdikian. All rights reserved.
//

#include <iostream>
#include <vector>

void obtenerParadas();

int main(int argc, const char * argv[]) {
    
    std::vector<int> gasolineras;
    std::vector<int> paradas;
    int tanque=40;
    
    gasolineras.push_back(20);
    gasolineras.push_back(30);
    gasolineras.push_back(10);
    gasolineras.push_back(25);
    
    int gas = tanque;
    
    for(int i=0; i<gasolineras.size()-1; i++){
        gas-=gasolineras[i];
        
        if(gas<gasolineras[i+1]){
            paradas.push_back(i);
            gas = tanque;
        }
    }
    
    
    if(!paradas.empty()){
        std::cout<<"Se paró en las gasolinera(s): \n";
        for (auto p : paradas){
            std::cout<<p<<std::endl;
        }
    }else{
        std::cout<<"No se paró en ninguna gasolinera.\n";
    }
    
    
    
}

