class Solution 
{
public:
    bool isPalindrome(int x) 
    {
        long i,dig,rev=0;
        for(i=x;i>0;i/=10)
        {
            dig=i%10;
            rev=rev*10+dig;
        }
        if(rev==x)
         return true;
        else
         return false;
    }
};