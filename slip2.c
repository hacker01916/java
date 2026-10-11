//q1
import java.util.Scanner;

class ArmstrongRange2
 {
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter the number: ");
        int n = sc.nextInt();
        int orig = n;
        int rev = 0, rem;

        
        while (n > 0)
       {
            rem = n % 10;
            rev += rem * rem * rem;
            n = n / 10;
        }

        System.out.println("Sum of cubes of digits: " + rev);

        if(orig == rev)
            System.out.println(orig + " is an Armstrong number.");
        else
            System.out.println(orig + " is not an Armstrong number.");
    }
}

//Q2


<!DOCTYPE html>
<html>
<head>
    <title>Student Registration Form</title>

    <style>
        body {
            font-family: Arial, sans-serif;
            background-color: white;
        }

        .container {
            width: 400px;
            margin: 20px auto;
            padding: 20px;
            background-color: #ffe3e0;
            border-radius: 5px;
        }

        h3 {
            text-align: center;
            margin-top: 0;
        }

        label {
            display: inline-block;
            width: 110px;
            margin-bottom: 12px;
            font-size: 14px;
        }

        input, select, textarea {
            width: 220px;
            padding: 5px;
            box-sizing: border-box;
        }

        input[type="radio"],
        input[type="checkbox"] {
            width: auto;
        }

        button {
            display: block;
            margin: 10px auto 0;
            padding: 6px 15px;
            cursor: pointer;
        }

        button:hover {
            background-color: lightblue;
        }
    </style>
</head>

<body>

<div class="container">
    <h3>Student Registration Form</h3>

    <form>
        <label>Id No:</label>
        <input type="text" name="id" required><br>

        <label>Student Name:</label>
        <input type="text" name="fname"
               placeholder="First Name" required>
        <br><br>

        <label>Father's Name:</label>
        <input type="text" name="father" required><br>

        <label>Date of Birth:</label>
        <input type="date" name="dob" required><br>

        <label>Mobile No:</label>
        <input type="tel" name="mobile"
               pattern="[0-9]{10}"
               placeholder="10 digit number" required><br>

        <label>Email Id:</label>
        <input type="email" name="email" required><br>

        <label>Password:</label>
        <input type="password" name="password"
               minlength="8" required><br>

        <label>Gender:</label>
        <input type="radio" name="gender"
               value="Male" required> Male
        <input type="radio" name="gender"
               value="Female"> Female
        <br><br>

        <label>Department:</label>
        <input type="checkbox" name="dept" value="CS"> CS
        <input type="checkbox" name="dept" value="IT"> IT
        <input type="checkbox" name="dept" value="BCA"> BCA
        <br><br>

        <label>Course:</label>
        <select name="course" required>
            <option value="">Select Course</option>
            <option value="BSc CS">B.Sc. Computer Science</option>
            <option value="BCA">BCA</option>
            <option value="BSc IT">B.Sc. IT</option>
        </select><br><br>

        <label>Student Photo:</label>
        <input type="file" name="photo"
               accept="image/*"><br><br>

        <label>City:</label>
        <input type="text" name="city" required><br>

        <label>Address:</label>
        <textarea name="address" rows="3"
                  required></textarea><br>

        <button type="submit">Register</button>
    </form>
</div>

</body>
</html>
