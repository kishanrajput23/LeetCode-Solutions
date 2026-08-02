class Solution {
    public int[] intersection(int[] nums1, int[] nums2) {
        HashSet<Integer> set = new HashSet();  
    
        for(int itr = 0; itr < nums1.length; itr++){
            for(int jtr = 0; jtr < nums2.length; jtr++){
                if(nums1[itr] == nums2[jtr]){
                    set.add(nums1[itr]);
                    break;
                }
            }
        }
    
        int[] arr = new int[set.size()];        
        int jtr = 0;
        for (int itr : set)  
            arr[jtr++] = itr; 
    
        return arr;
    }
}
