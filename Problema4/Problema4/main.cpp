//
//  main.cpp
//  Problema4
//
//  Created by Krikor Bisdikian on 10/8/15.
//  Copyright © 2015 Krikor Bisdikian. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

int main(int argc, const char * argv[]) {

    int Mujeres[4][4];
    int Hombres[4][4];
    bool estable=false;
    int MM[4];
    bool HM[4];
    std::fill_n(MM, 4, -1);
    std::fill_n(HM, 4, false);
    
 
    
    
    int H1[4] = {2,1,0,3};
    int H2[4] = {1,3,0,2};
    int H3[4] = {2,0,3,1};
    int H4[4] = {3,1,2,0};
    
    int M1[4] = {0,2,1,3};
    int M2[4] = {2,3,1,0};
    int M3[4] = {1,2,3,0};
    int M4[4] = {3,1,0,2};
    
    for (int i = 0; i<4; i++)
    {
        Mujeres[0][i] = M1[i];
        Mujeres[1][i] = M2[i];
        Mujeres[2][i] = M3[i];
        Mujeres[3][i] = M4[i];
        
        Hombres[0][i] = H1[i];
        Hombres[1][i] = H2[i];
        Hombres[2][i] = H3[i];
        Hombres[3][i] = H4[i];
    }
    
    int i=0;
    int j=0;
    
    while (!estable){
        if (HM[i] == false){
            int t = Hombres[i][j];
            
            if (MM[t] == -1){
                MM[t] = i;
                HM[i] = true;
                i++;
                j = 0;
            }
            else{
                int h1 = MM[t];
                for (int k = 0; k<4; k++){
                    if (Mujeres[t][k] == i){
                        MM[t] = i;
                        HM[i] = true;
                        HM[h1] = false;
                        i++;
                        j = 0;
                        break;
                    }
                    
                    if (Mujeres[t][k] == h1){
                        j++;
                        break;
                    }
                }
            }
        }
        else{
            break;
        }
        
        for (int j = 0; j<4; j++){
            if (HM[j] == true)
                estable = true;
            else{
                estable = false;
                i = j;
                break;
            }
        }
    }
    
    std::cout<<"M H"<<std::endl;
    for (int i = 0; i<4; i++){
        std::cout<<i<<" "<<MM[i]<<std::endl;
    }
    
    
    
    
    return 0;
}
