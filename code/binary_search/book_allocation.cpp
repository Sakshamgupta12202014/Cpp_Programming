#include <bits/stdc++.h>

using namespace std;

bool allocateBooks(int stud, vector<int> books, int pages){

    int cnt=0;
    int s=books.size();
    vector<int> allocate(stud, 0);

    int x=0, y=0;

    while(x<s && y<stud){
        if((allocate[y]+books[x]) <= pages){
            allocate[y]+=books[x];
            cnt++;
            x++;
        }
        else{
            y++;
        }
    }
    if(cnt==s){
        return true;
    }
    return false;
}

int main() {

    vector<int> books={25, 46, 28, 49, 24};
    int size=books.size();
    int noOfStud=4;

    //find max
    int max=INT_MIN;
    int sum=0;
    for(int i=0; i<size; i++){
        if(books[i] > max) max=books[i];
        sum+=books[i];
    }

    int low=max, high=sum;
    cout << max <<"  " << sum  << endl;
    int ans=-1;

    while(low<=high){

        int mid=low+(high-low)/2;
        if(allocateBooks(noOfStud, books, mid)){
            //eliminate the right half, because smaller values are on the left
            ans=mid;
            high=mid-1;
        }
        else{
            //eliminate the left half
            low=mid+1;
        }

    }
    cout << ans;
    return 0;
}