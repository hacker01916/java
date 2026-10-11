/*Q1 */

import java.util.Arrays;

class ArraySumAscending {
    public static void main(String[] args) {
        int[] arr = {10, 5, 8, 3, 6};
        int sum = 0;

        for (int i = 0; i < arr.length; i++) {
            sum += arr[i];
        }

        System.out.println("Sum of array elements: " + sum);

        Arrays.sort(arr);
        System.out.println("Array in ascending order:");
        for (int i = 0; i < arr.length; i++) {
            System.out.print(arr[i] + " ");
        }
    }
}







/**Q2 College/School Registration Form (HTML5 + CSS3)*/


<!DOCTYPE html>
<html lang="en">
<head>
  <meta charset="UTF-8">
  <title>My-Future College / School</title>
  <style>
    body {
      font-family: Arial, sans-serif;
      background-color: #f2f2f2;
    }
    form {
      background: #fff;
      padding: 20px;
      border-radius: 8px;
      width: 400px;
      margin: auto;
      box-shadow: 0 0 10px rgba(0,0,0,0.1);
    }
    h2 { text-align: center; color: #333; }
    label { display: block; margin-top: 10px; font-weight: bold; }
    input, select, textarea {
      width: 100%;
      padding: 8px;
      margin-top: 5px;
      border: 1px solid #ccc;
      border-radius: 4px;
    }
    button {
      margin-top: 15px;
      padding: 10px;
      width: 48%;
      border: none;
      color: white;
      background-color: #007BFF;
      border-radius: 4px;
      cursor: pointer;
    }
    button[type="reset"] { background-color: #dc3545; }
  </style>
</head>
<body>
  <form>
    <h2>My-Future College / School</h2>
    <label>Student Name:</label>
    <input type="text" maxlength="14" required>

    <label>Date of Birth:</label>
    <input type="date" required>

    <label>Mobile No.:</label>
    <input type="tel" pattern="[0-9]{10}" required>

    <label>Email ID:</label>
    <input type="email" required>

    <label>Password:</label>
    <input type="password" minlength="6" required>

    <label>Gender:</label>
    <input type="radio" name="gender" value="Male"> Male
    <input type="radio" name="gender" value="Female"> Female

    <label>Hobbies:</label>
    <input type="checkbox"> Drawing
    <input type="checkbox"> Singing
    <input type="checkbox"> Dancing
    <input type="checkbox"> Sketch
    <input type="checkbox"> Sports

    <label>Course:</label>
    <select required>
      <option value="">Select Admission Course</option>
      <option>B.Sc Computer Science</option>
      <option>BCA</option>
      <option>B.Com</option>
    </select>

    <label>Student Photo:</label>
    <input type="file" accept="image/*">

    <label>Register Time:</label>
    <input type="time">

    <label>Address:</label>
    <textarea rows="3" required></textarea>

    <input type="checkbox" required> I hereby declare that above information provided is correct

    <div style="display:flex;justify-content:space-between;">
      <button type="submit">Register</button>
      <button type="reset">Reset</button>
    </div>
  </form>
</body>
</html>
