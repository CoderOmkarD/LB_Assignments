class Logic {
    void CountDigits(int n) {
        int iDigit = 0;
        int iCount = 0;
        while (n != 0) 
        {
            iDigit=n%10;
            iCount++;
            n=n/10;
        }
        System.out.println("The Digits in a number is "+iCount);
    }
}

class program16_5 {
    public static void main(String[] args) {
        Logic lobj = new Logic();
        lobj.CountDigits(7865);
    }
}
