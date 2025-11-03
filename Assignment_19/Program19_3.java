class Logic {
    void CheckDivisible(int n) {

        if (n % 5 == 0 && n % 11 == 0) {
            System.out.println("It is Divisible by 5 and 11");
        } else {
            System.out.println("It is NOt  Divisible by 5 and 11");
        }

    }
}

class Program19_3 {
    public static void main(String[] args) {
        Logic lobj = new Logic();
        lobj.CheckDivisible(55);
    }
}
