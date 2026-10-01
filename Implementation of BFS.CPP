#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main()
{
    int vertices = 8 ;

    vector<vector<int>> graph(vertices);
    vector<bool> visited(vertices, false);
    queue<int> q;

    graph[0].push_back(1);
    graph[0].push_back(3);
    graph[1].push_back(5);
    graph[1].push_back(7);

    int start = 0;

    visited[start] = true;
    q.push(start);

    cout << "BFS Traversal: ";

    while (!q.empty())
    {
        int node = q.front();
        q.pop();

        cout << node << " ";

        for (int neighbor : graph[node])
        {
            if (!visited[neighbor])
            {
                visited[neighbor] = true;
                q.push(neighbor);
            }
        }
    }

    return 0;
}
