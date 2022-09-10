#include <bits/stdc++.h>
using namespace std;

void printBoard(vector<vector<bool>>&grid)
{
    int N = grid.size();
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cout << grid[i][j] << " ";
        }
        cout << "\n";
    }
    cout << "\n";
}

bool isSafe(vector<vector<bool>>&grid, int r, int c)
{
    int N = grid.size();
    /// row wise check? (r, c) (0,0) (0,1) (0,2) (0,3)
    for (int i = 0; i < c; i++)
    {
        if (grid[r][i]) return false;
    }
    /// upper diagonal check?
    for (int x = r, y = c; x >= 0 && y >= 0; x--, y--)
    {
        if (grid[x][y]) return false;
    }
    /// lower diagonal check?
    for (int x = r, y = c; x < N && y >= 0; x++, y--)
    {
        if (grid[x][y]) return false;
    }
    return true;
}

void findRepresentation(vector<vector<bool>>&grid, int col)
{
    int N = grid.size();
    if (col >= N)
    {
        printBoard(grid);
        return;
    }
    for (int i = 0; i < N; i++)
    {
        if (grid[i][col]) continue;
        if (isSafe(grid, i, col))
        {
            grid[i][col] = 1;
            int newCol = col + 1;
            findRepresentation(grid, newCol);
            grid[i][col] = 0;
        }
    }
    return;
}

int main()
{
    int N = 5;
    vector<vector<bool>> grid(N, vector<bool>(N, 0));
    findRepresentation(grid, 0);
    //printBoard(grid);
    return 0;
}

