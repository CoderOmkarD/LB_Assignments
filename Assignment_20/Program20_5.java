class Logic {
    int iSmallest = 9;
    int iDigit = 0;

    void FindSmallestDigit(int n) {

        while (n != 0) {
            iDigit = n % 10;
            if (iDigit < iSmallest) {
                iSmallest = iDigit;
            }
            n = n / 10;
        }
        System.out.println(iSmallest + " is a Smallest Digit in a Number");

    }
}

class Program20_5{
    public static void main(String[] args) {
        Logic lobj = new Logic();
        lobj.FindSmallestDigit(45872);
    }
}