// #include <bits/stdc++.h>

// using namespace std;

// int main() {

//     vector<vector<int>> matrix={{1,2,3},{4,5,6},{7,8,9}};

//     int n=matrix.size();
//     int m=matrix[0].size();
//     vector<vector<int>> mat(n,vector<int>(m,0));
    

//     int row=0, col=m-1;

//     for(int i=0; i<n; i++){
//         row=0;
//         for(int j=0; j<m; j++){
//             mat[row][col] = matrix[i][j];
//             row++;
//         }
//         col--;
//     }

//     for(int i=0; i<n; i++){
//         for(int j=0; j<m; j++){
//             cout << mat[i][j] << "  ";
//         }
//         cout << endl;
//     }
//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;


void transpose(vector<vector<int>>& matrix) {
    
    int n=matrix.size();
    int m=matrix[0].size();

    int row=0;
    while(row<n){
        int col=row;
        while(col<m){
            int temp=matrix[row][col];
            matrix[row][col]=matrix[col][row];
            matrix[col][row]=temp;
            col++;
        }
        row++;
    }
    
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout <<" " << matrix[i][j] << "  ";
        }
        cout << endl;
    }
}

int main() {

    vector<vector<int>> matrix={{2,4,-1},{-10,5,11},{18,-7,6}};
    transpose(matrix);
    return 0;
}
