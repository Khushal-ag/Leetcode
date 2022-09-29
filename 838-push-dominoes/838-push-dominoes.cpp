class Solution {
public:
    void printArr(vector<int> arr){
    for(auto elem:arr){
        cout << elem << " ";
    }
    cout << endl;
}

string pushDominoes(string dominoes) {
    //left: left==R?init==.:.:R
    // right: right==L?init==.?.:R
    // . : continue;
    string ans;
    int n=dominoes.size();
    vector<int> right;
    right.resize(n);
    
    // iterate over the array and populate the force from right
    int cnt = 0;
    for(int i=0;i<n;i++){
        if(dominoes[i]=='R'){
            cnt = n;
        }
        else if(dominoes[i]=='L'){
            cnt = 0;
        }
        else{
            cnt = max(cnt-1, 0);
        }
        right[i]=cnt;
    }
    
    // populating the array from left
    cnt = 0;
    for(int i=n-1;i>=0;i--){
        if(dominoes[i]=='L'){
            cnt = n;
        }
        else if(dominoes[i] == 'R'){
            cnt = 0;
        }
        else{
            cnt = max(cnt-1, 0);
        }
        right[i] -= cnt;
    }
    
    for(int i:right){
        if(i==0){
            ans += '.';
        }
        else if(i<0){
            ans += 'L';
        }
        else {
            ans += 'R';
        }
    }
    
    return ans;
    
}
};