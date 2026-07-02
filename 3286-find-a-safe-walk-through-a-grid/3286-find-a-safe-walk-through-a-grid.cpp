class Solution {
public:
    bool findSafeWalk(vector<vector<int>>& grid, int health) {

        int m = grid.size();
        int n = grid[0].size();

        // Directions: up, down, left, right
        vector<pair<int,int>> dir = {
            {1,0}, {-1,0}, {0,1}, {0,-1}
        };

        // dist[i][j] = minimum unsafe cells required to reach (i,j)
        vector<vector<int>> dist(m, vector<int>(n, INT_MAX));

        deque<pair<int,int>> dq;

        // Starting cost depends on starting cell
        dist[0][0] = grid[0][0];
        dq.push_front({0,0});

        while(!dq.empty()){

            auto [x,y] = dq.front();
            dq.pop_front();

            for(auto [dx,dy] : dir){

                int nx = x + dx;
                int ny = y + dy;

                // Ignore invalid cells
                if(nx < 0 || ny < 0 || nx >= m || ny >= n)
                    continue;

                int newCost = dist[x][y] + grid[nx][ny];

                if(newCost < dist[nx][ny]){

                    dist[nx][ny] = newCost;

                    // 0-weight edge -> front
                    if(grid[nx][ny] == 0)
                        dq.push_front({nx,ny});
                    else
                        dq.push_back({nx,ny});
                }
            }
        }

        // Need at least 1 health remaining
        return dist[m-1][n-1] < health;
    }
};