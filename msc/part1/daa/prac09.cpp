// Prac 09
// Aim:

#include<iostream>
#include<thread>
#include<chrono>

void fibonacci(long num){
    long a=0;
    long b=1;
    long c=0;
    long n=0;
    while(n++<num){
        std::cout<<n<<"th Fib no: = "<<a;
        //<<std::endl;
        c=a+b;
        a=b;
        b=c;
    }    
}

void prime(long num){
    long c=0;
    long j=0;
    long i=0;
    for(i=0;i<=num;i++){
        for(j=2;j<=i;j++){
            if(i%j==0){
                break;
            }
        }
        if(j==i){ 
            c++;    
            std::cout<<c<<"th Prime no: = "<<i;
            //<<std::endl;
        }    
    }    
}

int main(){
    long num=25;
    std::cout<<"This is main thread :)"<<std::endl;

    std::cout<<"without threads: "<<std::endl;
    auto starttime_wot = std::chrono::high_resolution_clock::now();
    fibonacci(num);
    prime(num);
    auto endtime_wot = std::chrono::high_resolution_clock::now();
    auto diff_wot = std::chrono::duration_cast<std::chrono::microseconds> (endtime_wot-starttime_wot);

    auto starttime_wt = std::chrono::high_resolution_clock::now();
    std::cout<<"\nwith threads: "<<std::endl;
    std::thread t_fib(fibonacci, num);
    std::thread t_prime(prime, num);
    t_fib.join();
    t_prime.join();
    auto endtime_wt = std::chrono::high_resolution_clock::now();
    auto diff_wt = std::chrono::duration_cast<std::chrono::microseconds> (endtime_wt-starttime_wt);
    std::cout<<"\nTime taken without threads: "<<diff_wot.count()<<" microseconds."<<std::endl;
    std::cout<<"Time taken with threads: "<<diff_wt.count()<<" microseconds."<<std::endl;
}

