#include <iostream>

using namespace std;

int main()
{
    int m, n;
    cin >> m >> n;
    int matrix1[m][n];
    int matrix2[m][n];
    int result[m][n];
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            cin >> matrix1[i][j];
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            cin >> matrix2[i][j];
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            result[i][j] = matrix1[i][j] + matrix2[i][j];
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++)
        {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
        
            
}