public class Main {
    public static int strstr(String haystack, String needle) {
        // Handle edge cases
        if (needle.isEmpty()) return 0;
        if (haystack.isEmpty() || needle.length() > haystack.length()) return -1;
        
        // Check each possible starting position
        for (int i = 0; i <= haystack.length() - needle.length(); i++) {
            boolean found = true;
            
            // Check if needle matches starting at position i
            for (int j = 0; j < needle.length(); j++) {
                if (haystack.charAt(i + j) != needle.charAt(j)) {
                    found = false;
                    break;
                }
            }
            
            if (found) {
                return i; // Return the starting index of first occurrence
            }
        }
        
        return -1; // Needle not found
    }
    
    public static void main(String[] args) {
        System.out.println("Hello World");
        System.out.println(strstr("butsadbut", "sad")); // Should print 3
        System.out.println(strstr("hello", "ll")); // Should print 2
        System.out.println(strstr("abc", "xyz")); // Should print -1
    }
}
 