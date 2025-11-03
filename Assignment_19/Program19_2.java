class Logic {
    void DisplayGrade(int n) {
        if (n >= 90) {
            System.out.println("Grade A");
        } else if (n >= 70) {
            System.out.println("Grade B");
        } else if (n >= 60) {
            System.out.println("Grade C");
        } else if (n >= 50) {
            System.out.println("Grade D");
        } else {
            System.out.println("Grade F");
        }

    }
}

class Program19_2 {
    public static void main(String[] args) {
        Logic lobj = new Logic();
        lobj.DisplayGrade(87);
    }
}
