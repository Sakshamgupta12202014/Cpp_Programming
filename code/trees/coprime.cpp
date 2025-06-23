#include <bits/stdc++.h>

using namespace std;

void findFarthestCoprime(int nums[],int size){

    //modify the same array

    for(int i=0; i<size; i++){

        int num=nums[i];
        set<int> factors;

        //pahle factors nikal lo
        for(int f=2; f<=num; f++){
            if((num%f)==0) factors.insert(f);
        }


        //check for coprimes
        int maxi=INT_MIN;
        bool isCoprime;

        for(int j=2; j<=250; j++){
            isCoprime=true;

            for(auto factor : factors){
                if((j%factor) == 0) {
                    isCoprime=false;
                    break;
                }
            }
            if(isCoprime){
                int absDiff=abs(num-j);
                if(maxi < absDiff){
                    maxi=absDiff;
                    nums[i]=j;
                }
            }
        }
    }
}

int main() {

    // vector<int> num={60,23,43,12,2};
    int num[]={60,23,43,246,2};
    int size=5;

    findFarthestCoprime(num,size);
    
    for(auto it : num){
        cout << it << "  ";
    }
    return 0;
}