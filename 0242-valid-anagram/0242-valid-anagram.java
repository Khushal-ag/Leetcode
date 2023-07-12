class Solution {
    public boolean isAnagram(String s, String t) {
        int[] freq1=new int[26];
        for(int i=0;i<s.length();i++){
            char ch=s.charAt(i);
            freq1[ch-'a']=freq1[ch-'a']+1;
        }
        for(int i=0;i<t.length();i++){
            char ch=t.charAt(i);
            freq1[ch-'a']=freq1[ch-'a']-1;
        }
        for(int i=0;i<freq1.length;i++){
            if(freq1[i]!=0)return false;
        }
        return true;
    }
}