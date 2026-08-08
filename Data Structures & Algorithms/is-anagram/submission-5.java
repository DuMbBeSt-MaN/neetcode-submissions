class Solution {
    public boolean isAnagram(String s, String t) {
        if(s.length()!=t.length()){
            return false;
        }
        int[] charf = new int[26];
        for(int i=0;i<s.length();i++){
            charf[s.charAt(i)-'a']++;
            charf[t.charAt(i)-'a']--;
        }
        for(int i:charf){
            if(i!=0)
            return false;
        }
        return true;
    }
}
