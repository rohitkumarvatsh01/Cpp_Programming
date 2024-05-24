#include<iostream>
using namespace std;


    class solution{
        public:
        int subtractProductAndSum(int n){
            while(n){
                product=product*(n%10);
                n/=10;
            }
            return 0;
        }
    };
