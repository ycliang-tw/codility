int solution(vector<int> &A) {
    long long int ans = 0;
    int size = A.size();
    for(int i = 0; i < size; i++){
        ans = ans + (i+1 - A[i]);
    }
    return ans + (size + 1);
}
