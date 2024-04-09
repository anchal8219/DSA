class Solution {
    public static String numToWords(int n) {
        if (n == 0) {
            return "Zero";
        }
        
        String[] lessThan20 = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten",
                        "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
        String[] tens = {"", "", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};
        String[] thousands = {"", "Thousand", "Million", "Billion"};
        
        StringBuilder res = new StringBuilder();
        int i = 0;
        while (n > 0) {
            if (n % 1000 != 0) {
                res.insert(0, helper(n % 1000, lessThan20, tens) + thousands[i] + " ");
            }
            n /= 1000;
            i++;
        }
        
        return res.toString().trim();
    }
    
    private static String helper(int num, String[] lessThan20, String[] tens) {
        if (num == 0) {
            return "";
        } else if (num < 20) {
            return lessThan20[num] + " ";
        } else if (num < 100) {
            return tens[num / 10] + " " + helper(num % 10, lessThan20, tens);
        } else {
            return lessThan20[num / 100] + " Hundred " + helper(num % 100, lessThan20, tens);
        }
    }
}