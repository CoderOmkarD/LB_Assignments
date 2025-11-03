class Logic {

    int iDigit = 0;

    void PrintDigits(int n) {

        while (n != 0) {

            iDigit = n % 10;
            System.out.println(iDigit);
            n = n / 10;

        }

    }
}

class Program19_4 {
    public static void main(String[] args) {
        Logic lobj = new Logic();
        lobj.PrintDigits(9876);
    }
}
