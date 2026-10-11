//Q1

import java.io.*;

public class FileReadDemo 
{
    public static void main(String[] args)
     {

        try {
            FileReader fr = new FileReader("abc.txt");

            int ch;

            System.out.println("File contents in uppercase:");
            while ((ch = fr.read()) != -1) 
            {
                System.out.print(Character.toUpperCase((char) ch));
            }

            fr.close();

        } catch (IOException e)
         {
            System.out.println("Error: " + e.getMessage());
        }
    }
}


//Q2

<html>
<body>
<script>
let name = "Rahul";
let rollNo = 101;
let java = 85, dbms = 78, web = 90;

let total = java + dbms + web;
let percentage = total / 3;

document.write("Name: " + name + "<br>");
document.write("Roll No: " + rollNo + "<br>");
document.write("Java: " + java + "<br>");
document.write("DBMS: " + dbms + "<br>");
document.write("Web Tech: " + web + "<br>");
document.write("Total: " + total + "<br>");
document.write("Percentage: " + percentage.toFixed(2) + "%");
</script>
</body>
</html>