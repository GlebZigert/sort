#include <iostream>
#include "get_arr.h"


/*
Сортировка пузырьком — один из самых известных 
алгоритмов сортировки. Здесь нужно последовательно
 сравнивать значения соседних элементов 
 и менять числа местами, если предыдущее оказывается 
 больше последующего. Таким образом элементы 
 с большими значениями оказываются в конце списка,
  а с меньшими остаются в начале. 
*/

int main(){

std::vector<int> v;
get_array("array.txt",v);
cout_array(v);

int cnt=0;
 bool flag=false; 

 while(!flag){
   flag=true; 
for(int i=1;i<v.size();i++){

  cnt++;
  
  
  if(v[i]<v[i-1]){
std::cout<<i<<" "<<v[i-1]<<" и "<<v[i]<<"\n";
    flag=false;
  //  std::cout<<"swap\n";

    std::swap(v[i],v[i-1]);


  }
  

}
cout_array(v);

}

std::cout<<"PROFIT\n";
std::cout<<"количество проходов: "<<cnt<<"\n";







}