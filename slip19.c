//Q1
import java.io.*;
import java.util.Scanner;

class FileCount 
{
    public static void main(String[] args) throws Exception
     {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter file name: ");
        String name = sc.nextLine();

        BufferedReader br = new BufferedReader(new FileReader(name));

        int characters = 0, words = 0, lines = 0;
        String s;

        while ((s = br.readLine()) != null)
         {
            lines++;
            characters += s.length();

            String[] w = s.trim().split("\\s+");
            if (!s.trim().isEmpty())
                words += w.length;
        }

        br.close();

        System.out.println("Characters: " + characters);
        System.out.println("Words: " + words);
        System.out.println("Lines: " + lines);

        sc.close();
    }
}



//Q2
<html>
<body>
<script>
async function login(username, password)
 {
    try {
        if (username === "admin" && password === "1234")
         {
            return "Login Successful!";
         } else 
         {
            throw new Error("Invalid username or password");
         }
    } catch (error)
     {
        return error.message;
     }
}

async function main() 
{
    let result = await login("admin", "1234");
    document.write(result);
}
main();
</script>
</body>
</html>