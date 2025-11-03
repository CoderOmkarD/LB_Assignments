class Logic {
    int iLargest = 0;
    int iDigit = 0;

    void FindLargestDigit(int n) {

        while (n != 0) {
            iDigit = n % 10;
            if (iDigit > iLargest) {
                iLargest = iDigit;
            }
            n = n / 10;
        }
        System.out.println(iLargest + " is a Largest Digit in a Number");

    }
}

class Program20_4{
    public static void main(String[] args) {
        Logic lobj = new Logic();
        lobj.FindLargestDigit(9876);
    }
}