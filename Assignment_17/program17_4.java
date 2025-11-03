class Logic {
    void FindMinimum(int a, int b, int c) {
        if (a < b && a < c) {
            System.out.println(a + " is Minimum");
        } else if (b < a && b < c) {
            System.out.println(b + "  is Minimum");

        } else if (c < b && c < a) {
            System.out.println(c + "  is Minimum");

        } else {
            System.out.println("They are Equal");

        }
    }
}

class program17_4 {
    public static void main(String[] args) {
        Logic lobj = new Logic();
        lobj.FindMinimum(3, 7, 2);
    }
}
