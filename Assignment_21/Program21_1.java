class Logic {
    int iProduct = 1;
    int iDigit = 0;

    void ProductOfDigit(int n) {

        while (n != 0) {
            iDigit = n % 10;
            iProduct = iProduct * iDigit;
            n = n / 10;
        }
        System.out.println(iProduct);

    }
}

class Program21_1 {
    public static void main(String[] args) {
        Logic lobj = new Logic();
        lobj.ProductOfDigit(45872);
    }
}