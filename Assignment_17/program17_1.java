class Logic {
    void SumOfDigits(int n) {
        int iDigit = 0;
        int iSum = 0;
        while (n != 0) 
        {
            iDigit=n%10;
            iSum=iSum+iDigit;
            n=n/10;
        }
        System.out.println("The Sum of Digits is "+iSum);
    }
}

class program17_1 {
    public static void main(String[] args) {
        Logic lobj = new Logic();
        lobj.SumOfDigits(1234);
    }
}
