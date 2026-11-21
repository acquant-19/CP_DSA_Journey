class Solution {
public:
    int reverse(int x) 
    {
        long rev=0, dig=0;
        for(int i=x;i!=0;i/=10)
        {
            dig=i%10;
            rev=rev*10+dig;
        }
        if(rev>INT_MAX || rev<INT_MIN)
          return 0;
        else
          return int(rev);
    }
};