class BrowserHistory {
    vector<string> v;
    int p;
public:
    BrowserHistory(string homepage) {
        v.push_back(homepage);
        p = 0;
    }
    
    void visit(string url) {
        int n = v.size();
        for(int _=0; _<n-p-1; _++) v.pop_back();
        v.push_back(url);
        p++;
    }
    
    string back(int steps) {
        return v[p = max(0, p - steps)];
    }
    
    string forward(int steps) {
        return v[p = min((int)v.size() - 1, p + steps)];
    }
};