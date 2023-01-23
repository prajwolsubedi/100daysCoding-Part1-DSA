/*
vector<int> reverse(vector<int> ans){
    int s = 0;
    int e = ans.size()-1;
    while(s<e){
        swap(ans[s],ans[e]);
        s++;
        e--;
    }
    return ans;
}
    
vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m) {
    vector<int> temp;
    int carry=0,sum;
    int i = n-1;
    int j = m-1;
            while(i>=0 && j>=0){
                sum = a[i] + b[j] + carry;
                carry = sum / 10;
                sum = sum % 10;
                temp.push_back(sum);
                i--;
                j--;
            }
    while(i>=0){
                sum = a[i] + carry;
                carry = sum / 10;
                sum = sum % 10;
                i--;
        temp.push_back(sum);
    }
    while(j>=0){
                sum = b[j] + carry;
                carry = sum / 10;
                sum = sum % 10;
                j--;
        temp.push_back(sum);
    }
            if(carry == 1)
               temp.push_back(1);
    return reverse(temp);
}
*/