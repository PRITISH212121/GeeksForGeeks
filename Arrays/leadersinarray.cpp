
class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n){
        vector <int> v;
        int currleader=a[n-1];
        v.push_back(a[n-1]);
        for (int i=n-2;i>=0;i--){
            if (a[i]>=currleader){
                currleader=a[i];
                v.push_back(a[i]);
            }  
        }
        reverse(v.begin(),v.end());
        return v;
    }
};