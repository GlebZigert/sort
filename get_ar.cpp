#include <iostream>
#include <fstream>
#include <vector>

void get_array(std::string path,std::vector<int> &vect){

 std::ifstream ar(path);

int val;
int size=0;
if(ar.is_open()){

ar>>size;

for(int i=0;i<size;i++){
ar>>val;
vect.insert(vect.end(),val);
}

}

}

void cout_array(const std::vector<int> &vect){
 for(int i=0;i<vect.size();i++){
std::cout<<vect[i]<<" ";
 }
std::cout<<"\n";   
}

