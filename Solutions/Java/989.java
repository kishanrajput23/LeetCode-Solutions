class Solution {
    public List<Integer> addToArrayForm(int[] num, int k) {
        List<Integer> list=new ArrayList<>();
        int i=num.length-1;
        while(i>=0 || k>0)
        {
            if(i>=0)
                k=k+num[i];
            list.add(k%10);
            k/=10;
            i--;
        }
        Collections.reverse(list);
        return list;
    }
}
