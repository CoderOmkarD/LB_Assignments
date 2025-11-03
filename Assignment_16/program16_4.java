class Logic {
    void ReverseNumber(int n) {
        int iDigit = 0;
        while (n != 0) 
        {
            iDigit=n%10;
            System.out.print(iDigit);
            n=n/10;
        }

    }
}

class program16_4 {
    public static void main(String[] args) {
        Logic lobj = new Logic();
        lobj.ReverseNumber(1234);
    }
}
