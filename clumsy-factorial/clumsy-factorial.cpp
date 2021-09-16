class Solution {
public:
    int clumsy(int n) {
	if(n==1) return 1;
	else if (n==2) return 2;
	else if (n==3) return 6;
	int result = n * (n-1)/(n-2) + (n-3), i=n-4; 
	for(;i>=4;i-=4)
		result -= (i*(i-1)/(i-2) - (i-3));
	if(i!=0) result-= clumsy(i); // i can be 1,2,3
	return result;
}
};

/*
int[] magic = new int[]{1, 2, 2, -1, 0, 0, 3, 3};
        return N + ((N > 4)? magic[N%4] : magic[N+3]);
*/