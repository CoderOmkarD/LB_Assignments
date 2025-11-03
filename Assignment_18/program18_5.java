class Logic {
    void CheckSign(int n) {

        if (n < 0) {
            System.out.println("It is a Negative Number");
        } else if (n > 0) {
            System.out.println("It is a Positive Number");

        } else {
            System.out.println("It is a Zero");

        }
    }
}

class program18_5 {
    public static void main(String[] args) {
        Logic lobj = new Logic();
        lobj.CheckSign(-20);
    }
}
