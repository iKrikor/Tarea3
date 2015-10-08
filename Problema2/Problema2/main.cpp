//
//  main.cpp
//  Problema2
//
//  Created by Krikor Bisdikian on 10/4/15.
//  Copyright © 2015 Krikor Bisdikian. All rights reserved.
//

#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

int main(int argc, const char * argv[]) {
    vector<string> p;
    vector<float> l;
    vector<string> line;
    float L=20;
    float b=1;
    float len=0;
    float lineLen=0;
    float sobra;
    int i=0;
    int j;
    bool printed=true;
    float bAmplia;
    float bReduce;
    
    p.push_back("Diego");
    l.push_back(5);
    p.push_back("canta");
    l.push_back(5);
    p.push_back("una");
    l.push_back(3);
    p.push_back("horrible");
    l.push_back(8);
    p.push_back("canción");
    l.push_back(7);
    p.push_back("de");
    l.push_back(2);
    p.push_back("manera");
    l.push_back(6);
    p.push_back("desafinada");
    l.push_back(10);
    p.push_back("todo");
    l.push_back(4);
    p.push_back("el");
    l.push_back(2);
    p.push_back("querido");
    l.push_back(4);
    p.push_back("día");
    l.push_back(3);
    
    
    for(j=0; j<p.size(); j++){
        if(printed){
            i=j;
            printed = false;
            line.clear();
            len=0;
        }
        
        len+=l[j];
        lineLen=len + ((j-i)*b);
        if(lineLen>L){
            sobra=lineLen-L;
            bReduce = b-(sobra/(j-i));
            bAmplia = b+ (L-((len-l[j])+(b*(j-i-1))))/(j-i-1);
            
            if(((fabs(bAmplia-b)*(j-i-1))>(fabs(bReduce-b)*(j-i))) && bReduce > 0){
                line.push_back(p[j]);
                for(auto v : line){
                    cout<<v<<" ";
                }
                cout<<bReduce<<"r";
                cout<<endl;
                printed=true;

               
            }else{
                for(auto v : line){
                    cout<<v<<" ";
                }
                cout<<bAmplia<<"a";
                cout<<endl;
                j--;
                printed=true;
                
                }
            
        }
        line.push_back(p[j]);
    }
    
    for(auto v : line){
        cout<<v<<" ";
    }cout<<endl;
    }

