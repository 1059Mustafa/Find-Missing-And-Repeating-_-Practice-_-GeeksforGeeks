class Solution{
public:
    int *findTwoElement(int *ar, int n) 
    {
        int *res = new int(2);
        for(int i=0;i<n;i++) 
        {
            if(ar[abs(ar[i])-1]>=0)
        {
            ar[abs(ar[i])-1]=- ar[abs(ar[i])-1];
        }
        else
        {
            res[0]=abs(ar[i]);
        }
        
        }
        for(int i=0;i<n;i++) 
        {
            if(ar[i]>0)
            res[1]=i+1;
        }
        
        return res;

        
        
    }
};
