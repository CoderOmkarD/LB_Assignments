class Logic {
    void PrintEvenNumbers(int n) {
        int iCnt = 0;

        for (iCnt = 1; iCnt <= n; iCnt++) {
            if (iCnt % 2 == 0) {
                System.out.println(iCnt);
            }

        }

    }
}

class program18_2 {
    public static void main(String[] args) {
        Logic lobj = new Logic();
        lobj.PrintEvenNumbers(20);
    }
}
