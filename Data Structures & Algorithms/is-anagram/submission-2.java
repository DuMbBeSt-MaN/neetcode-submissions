class Solution {
    public boolean isAnagram(String s, String t) {
        if(s.length()!=t.length()){
            return false;
        }
        Map<Character,Integer> count = new HashMap<>(s.length());
        for(char c: s.toCharArray()){
            if(count.containsKey(c)){
                count.put(c,count.get(c)+1);
            }
            else{
                count.put(c,1);
            }
        }
        for(char c: t.toCharArray()){
            if(count.containsKey(c) && count.get(c)>1){
                count.put(c,count.get(c)-1);
            }
            else{
                count.remove(c);
            }
        }
        if(count.isEmpty()){
            return true;
        }
        return false;
    }
}
