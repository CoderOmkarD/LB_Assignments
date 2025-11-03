class Logic {
    void sumEvenOddDigits(int n) {
        int iCnt = 0;
        int iDigit = 0;
        int iEvenSum = 0;
        int iOddSum = 0;

        while (n != 0) {

            iDigit = n % 10;

            if (iDigit % 2 == 0) {
                iEvenSum = iEvenSum + iDigit;
            }

            if (iDigit % 2 == 1) {
                iOddSum = iOddSum + iDigit;
            }

            n = n / 10;
        }

        System.out.println("Sum of Even Digit is " + iEvenSum);
        System.out.println("Sum of Odd Digit is " + iOddSum);

    }
}

class program18_4 {
    public static void main(String[] args) {
        Logic lobj = new Logic();
        lobj.sumEvenOddDigits(123456);
    }
}
