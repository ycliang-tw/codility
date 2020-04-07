
int solution(int A, int B, int K) {
    int ans = B/K - A/K;
    if(A%K == 0){
        ans += 1;
    }
    return ans;
}
