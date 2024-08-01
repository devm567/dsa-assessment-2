class BrowserHistory {
public:
    stack<string>hist, forw;
    string curr; 
    BrowserHistory(string homepage) {
           curr = homepage;
    }
    
    void visit(string url) {
        hist.push(curr);
        current = url;
        forw = stack<string>();
    }
    
    string back(int steps) {
        string t = "";
        int i = 0;
        while(!hist.empty() && i < steps)
        {
            forw.push(curr);
            t = hist.top();
            hist.pop();
            // forw.push(t);
            i++;
        }
        // hist.push(t);
        return t;
    }
    
    string forward(int steps) {
        string t = "";
        int i = 0;
        while(!forw.empty() && i < steps)
        {
            
            hist.push(curr);
            curr = forw.top();
            forw.pop();
            i++;
        }
        // forw.push(t);
        return t;
    }
};
