class Logic {
    void CheckPalindrome(int n) {
        int iDigit = 0;
        int iRev = 0;
        int iNum = n;
        while (n != 0) {
            iDigit = n % 10;
            iRev = iRev * 10 + iDigit;
            n = n / 10;
        }

        if (iNum == iRev) {
            System.out.println(iNum + " is a Palindrome number.");
        } else {
            System.out.println(iNum + " is NOT a Palindrome number.");
        }
    }
}

class program17_2 {
    public static void main(String[] args) {
        Logic lobj = new Logic();
        lobj.CheckPalindrome(121);
    }
}
