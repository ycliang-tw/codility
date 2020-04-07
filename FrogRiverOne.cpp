int solution(int X, vector<int> &A) {
    int ans = -1;
    vector<bool> exist(X, false);
    for(int i = 0; i < A.size(); i++){
        if(!exist[A[i]-1]){
            exist[A[i]-1] = true;
            X--;
        }
        if(X == 0){
            ans = i;
            break;
        }
    }
    return ans;
}
