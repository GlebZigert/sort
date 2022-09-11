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
void bubble(std::vector<int> &v,int &cnt){
 bool flag=false; 

 while(!flag){
   flag=true; 
for(int i=1;i<v.size();i++){

  cnt++;
  
 std::cout<<i<<") "<<v[i-1]<<" "<<v[i]<<"\n"; 
  if(v[i]<v[i-1]){

    flag=false;
  //  std::cout<<"swap\n";

    std::swap(v[i],v[i-1]);

    cout_array(v); 
  }
 

}



}
}

void bubble1(std::vector<int> &v,int &cnt){
 bool flag=false; 
int step=0;
 while(!flag){
   flag=true; 
for(int i=1;i<v.size()-step;i++){

  cnt++;
  
 std::cout<<i<<") "<<v[i-1]<<" "<<v[i]<<"\n"; 
  if(v[i]<v[i-1]){

    flag=false;
  //  std::cout<<"swap\n";

    std::swap(v[i],v[i-1]);

    cout_array(v);
  }
  

}


step++;
}
}

/*
Шейкерная сортировка отличается от пузырьковой тем,
 что она двунаправленная: алгоритм перемещается не строго 
 слева направо, а сначала слева направо, 
 затем справа налево. 
*/
void shake(std::vector<int> &v,int &cnt){
 bool flag=false; 
 bool xx=false;
 while(!flag){
   flag=true; 

int current;
int prev;
for(int i=1;i<v.size();i++){

  cnt++;
  
current=xx?i:v.size()-i;
prev=xx?i-1:v.size()-i-1;
 std::cout<<v[current]<<" "<<v[prev]<<"\n"; 
  if(v[current]<v[prev]){

    flag=false;
   // std::cout<<"swap\n";

    std::swap(v[current],v[prev]);

    cout_array(v);
  }
  

}
xx=!xx;


}
}

void shake1(std::vector<int> &v,int &cnt){
 bool flag=false; 
 bool xx=false;
 int a=0;
 int b=0;
 while(!flag){
   flag=true; 

int current;
int prev;
for(int i=1+a;i<v.size()-b;i++){

  cnt++;
  
current=xx?i:v.size()-i;
prev=xx?i-1:v.size()-i-1;
 std::cout<<v[current]<<" "<<v[prev]<<"\n"; 
  if(v[current]<v[prev]){

    flag=false;
   // std::cout<<"swap\n";

    std::swap(v[current],v[prev]);

    cout_array(v);
  }
  

}
if(!xx)
a++;
else
b++;
xx=!xx;


}
}



int main(int argc, char * argv[]){


    if(argc!=2)
    return -1;

    std::string type=argv[1];

    std::cout<<"type: "<<type<<std::endl;


std::vector<int> v;
get_array("array.txt",v);
cout_array(v);

int cnt=0;



if(type=="bubble")
bubble(v,cnt);

if(type=="bubble1")
bubble1(v,cnt);

if(type=="shake")
shake(v,cnt);

if(type=="shake1")
shake1(v,cnt);

std::cout<<"PROFIT\n";
cout_array(v);
std::cout<<"количество проходов: "<<cnt<<"\n";







}