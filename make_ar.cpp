#include <string>
#include <iostream>
#include <fstream>
#include <experimental/random>
#include <functional>




int main(int argc, char* argv[]){

    int size=10;
    int max=9;
    int min=0;

        std::function<int(int)> f;



    auto rand=[min,max](int i){
        return std::experimental::randint(min,max);
    };



    std::string path="array.txt";

    f=rand;

    if(argc==2){
    size=atoi(argv[1]);

    }

        if(argc==3){


    size=atoi(argv[1]); 
std::string type=argv[2];

        auto good=[](int i){
        return i;
    };

        auto bad=[size](int i){
        return size-i;
    };

    if(type=="good"){
        f=good;
        std::cout<<type<<std::endl;
    }


    if(type=="bad"){
        f=bad;
        std::cout<<type<<std::endl;
    }
    }

    std::cout<<size<<" "<<min<<" "<<max;

    


    std::ofstream out("array.txt");
    if(out.is_open()){

        out<<size<<std::endl;
        for(int i=0;i<size;i++){
            out<<f(i)<<std::endl;         

    }
    out.close();


    

}

}