//Q1
import java.util.Scanner;

class MatrixMenu
 {
    public static void main(String[] args)
     {
        Scanner sc = new Scanner(System.in);
        int choice;

        System.out.print("Enter rows and columns of matrix: ");
        int r = sc.nextInt();
        int c = sc.nextInt();

        int[][] a = new int[r][c];
        int[][] b = new int[r][c];

        System.out.println("Enter elements of first matrix:");
        for (int i = 0; i < r; i++)
            for (int j = 0; j < c; j++)
                a[i][j] = sc.nextInt();

        System.out.println("Enter elements of second matrix:");
        for (int i = 0; i < r; i++)
            for (int j = 0; j < c; j++)
                b[i][j] = sc.nextInt();

        do {
            System.out.println("\nMenu:");
            System.out.println("1. Addition");
            System.out.println("2. Multiplication");
            System.out.println("3. Transpose (of first matrix)");
            System.out.println("4. Exit");
            System.out.print("Enter choice: ");
            choice = sc.nextInt();

            switch (choice) 
            {
                case 1:
                    System.out.println("Matrix Addition:");
                    for (int i = 0; i < r; i++)
                     {
                        for (int j = 0; j < c; j++) 
                        {
                            System.out.print((a[i][j] + b[i][j]) + " ");
                        }
                        System.out.println();
                    }
                    break;

                case 2: 
                    if (r != c)
                     {
                        System.out.println("Multiplication requires square matrices!");
                        break;
                    }
                    int[][] mul = new int[r][c];
                    System.out.println("Matrix Multiplication:");
                    for (int i = 0; i < r; i++) {
                        for (int j = 0; j < c; j++) {
                            mul[i][j] = 0;
                            for (int k = 0; k < c; k++)
                                mul[i][j] += a[i][k] * b[k][j];
                            System.out.print(mul[i][j] + " ");
                        }
                        System.out.println();
                    }
                    break;

                case 3: 
                    System.out.println("Transpose of first matrix:");
                    for (int i = 0; i < c; i++)
                     {
                        for (int j = 0; j < r; j++)
                            System.out.print(a[j][i] + " ");
                        System.out.println();
                    }
                    break;

                case 4:
                    System.out.println("Exiting...");
                    break;

                default:
                    System.out.println("Invalid choice!");
            }
        } while (choice != 4);
    }
}




//Q2

<!DOCTYPE html>
<html>
<head>
    <title>Change Heading</title>
</head>

<body>

    <h1 id="heading">Hello! Welcome</h1>

    <button onclick="changeText()">Click Me</button>

    <script>
        function changeText()
        {
            document.getElementById("heading").innerHTML =
                "Text Changed Successfully!";
        }
    </script>

</body>
</html>

