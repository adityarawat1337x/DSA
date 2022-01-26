#User function Template for python3

class Solution:
    #Function to count subarrays with sum equal to 0.
    def findSubArrays(self,arr,n):
        obj = {0:1}
        s=0
        ans=0
        for i in range(0,n):
            s+=arr[i]
            if s in obj:
               ans +=obj[s]
               obj[s]+=1
            else:
                obj[s]=1;
        return ans

#{ 
#  Driver Code Starts
#Initial Template for Python 3

#contributed by RavinderSinghPB
        
if __name__=='__main__':
    t=int(input())
    for tc in range(t):
        
        N=int(input())
        A = [int(x) for x in input().strip().split(' ')]
        ob = Solution()
        print(ob.findSubArrays(A,N))
        
                
                
# } Driver Code Ends