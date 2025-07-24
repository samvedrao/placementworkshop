import java.util.HashMap;

public class sizeofpalindrome{
    public static void main(String[] args) {
        String s = "aaaabbbbcccdde";
        int count = 0, flag = 0;
        HashMap<Character, Integer> m = new HashMap<>();

            // Count character frequencies
            for (int i = 0; i < s.length(); i++) {
                char ch = s.charAt(i);
                m.put(ch, m.getOrDefault(ch, 0) + 1);
            }
    
            // Calculate palindrome length
            for (int freq : m.values()) {
                if (freq % 2 == 0)
                    count += freq;
                else {
                    count += freq - 1;
                    flag = 1;
                }
            }
    
            System.out.println(count + flag);
        }
    }