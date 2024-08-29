// union find class with size
class UnionFind {
    vector<int> root, Size;
public:
    int merge;
    UnionFind(int N) : root(N), Size(N, 1), merge(0) {
        iota(root.begin(), root.end(), 0);
    }

    int Find(int x) {
        if (x == root[x]) return x;
        return root[x] = Find(root[x]); // Path compression
    }

    bool Union(int x, int y) {
        x = Find(x), y = Find(y);

        if (x == y) return 0;

        if (Size[x] > Size[y]) {
            Size[x] += Size[y];
            root[y] = x;
        } 
        else {
            Size[y] += Size[x];
            root[x] = y;
        }
        merge++;
        return 1;
    }
};