class Solution {
  public int chalkReplacer(int[] cost, int numPieces) {
    return faster(cost, numPieces);
  }
  
  public int faster(int[] cost, int numPieces) {
    long pieces = numPieces;
    long[] prefix = new long[cost.length];
    prefix[0] = cost[0];
    for(int i = 1; i < prefix.length; i++) {
      prefix[i] += prefix[i-1] + cost[i];
    }
  
    pieces = (pieces % prefix[prefix.length - 1]);
    
    int low = 0;
    int high = prefix.length - 1;
    while(low <= high) {
      int mid = low + high >>> 1;
      if(pieces - prefix[mid] == 0) {
        return mid + 1;
      } else if(pieces - prefix[mid] < 0) {
        // too big
        high = mid - 1;
      } else {
        // too small
        low = mid + 1;
      }
    }
    
    return low;
  }
}