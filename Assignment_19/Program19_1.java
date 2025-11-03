class Logic {
    void CheckLeapYear(int n) {
        if ((n % 400 == 0) || (n % 4 == 0 && n % 100 != 0)) {
            System.out.println("It is a Leap Year");
        } else {
            System.out.println("It is Not a Leap Year");
        }
    }
}

class Program19_1 {
    public static void main(String[] args) {
        Logic lobj = new Logic();
        lobj.CheckLeapYear(2024);
    }
}
