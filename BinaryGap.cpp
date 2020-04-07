int solution(int N) {
    bool bin[32] = {}, flag = false;
    int ans = 0, lastPos;
    for(int i = 0; i < 32; i++){
        bin[i] = (N >> i) & 1;
    }
    for(int i = 0; i < 32; i++){
        if(bin[i]){
            if(flag){
                ans = max(ans, i-lastPos-1);
            }else{
                flag = true;
            }
            lastPos = i;
        }
    }
    return ans;
}
