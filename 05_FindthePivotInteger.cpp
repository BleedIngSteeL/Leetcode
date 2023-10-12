class Solution {
public:
    int pivotInteger(int n) {
        int sum=n*(n+1)/2;
        for(int i=0;i<=n;i++){
            int pehle = i*(i+1)/2;
            int baad = sum-pehle+i;

            if(pehle==baad){
                return i;
            }
        }
        return -1;
    }    
       
};
