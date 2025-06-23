#include<iostream>
using namespace std;

class Solution {
public:

    // void makerow(int i, vector<vector<int>>& matrix) {

    //         for(int j=0; j<matrix[i].size(); j++) {
                
    //             if(matrix[i][j] != 0) {
    //                 matrix[i][j] = -1;
    //             }
    //         }
    //     }

    //     void makecol(int j, vector<vector<int>>& matrix) {

    //         for(int i=0; i<matrix.size(); i++) {

    //             if(matrix[i][j] != 0) {
    //                 matrix[i][j] = -1;
    //             }
    //         }
    //     }

    void setZeroes(vector<vector<int>>& matrix) {

        int colSize = matrix[0].size();
        int rowSize = matrix.size();

        int colmat[colSize];
        int rowmat[rowSize];

        for(int i=0; i<matrix.size(); i++) {

            for(int j=0; j<matrix[i].size(); j++) {

                if(matrix[i][j] == 0) {
                    rowmat[i] = 1;
                    colmat[j] = 1;
                }
            }
        }

        for(int i=0; i<matrix.size(); i++) {

            for(int j=0; j<matrix[i].size(); j++) {

                if(rowmat[i] == 1 || colmat[j] == 1) {
                    matrix[i][j] = 0;
                }
            }
        }


        // for(int i=0; i<matrix.size(); i++) {

        //     for(int j=0; j<matrix[i].size(); j++) {

        //         if(matrix[i][j] == -1) {
        //            matrix[i][j] = 0;
        //         }
        //     }
        // }
        
    }
};

int main() {


}