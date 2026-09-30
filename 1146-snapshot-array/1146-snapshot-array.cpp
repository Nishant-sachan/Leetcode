class SnapshotArray {
private:
    vector<vector<pair<int, int>>> vec;
    int Snap_id = 0;

public:
    SnapshotArray(int length) {
        vec.resize(length);
        
        for (int i = 0; i < length; i++) {
            vec[i].push_back({0, 0});
        }
    }
    
    void set(int index, int val) {
        vec[index].push_back({Snap_id, val});
    }
    
    int snap() {
        return Snap_id++;
    }
    
    int get(int index, int snap_id) {
        int ans = 0;
        
        for (auto p : vec[index]) {
            if (p.first > snap_id)
                break;
            
            ans = p.second;
        }
        
        return ans;
    }
};