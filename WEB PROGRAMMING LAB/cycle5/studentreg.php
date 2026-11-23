<?php
$name = $email = $phone = $password = "";
$errors = [];
$success = "";

if ($_SERVER["REQUEST_METHOD"] == "POST") {

    // Name validation
    $name = trim($_POST["name"]);
    if (empty($name)) {
        $errors[] = "Name is required";
    } elseif (!preg_match("/^[a-zA-Z ]+$/", $name)) {
        $errors[] = "Name should contain only letters";
    }

    // Email validation
    $email = trim($_POST["email"]);
    if (empty($email)) {
        $errors[] = "Email is required";
    } elseif (!filter_var($email, FILTER_VALIDATE_EMAIL)) {
        $errors[] = "Invalid email format";
    }

    // Phone validation
    $phone = trim($_POST["phone"]);
    if (!preg_match("/^[0-9]{10}$/", $phone)) {
        $errors[] = "Phone number must contain exactly 10 digits";
    }

    // Password validation
    $password = $_POST["password"];
    if (strlen($password) < 8) {
        $errors[] = "Password must contain at least 8 characters";
    }

    // Confirm password validation
    $confirm = $_POST["confirm"];

    if ($password !== $confirm) {
        $errors[] = "Passwords do not match";
    }

    if (empty($errors)) {
        $success = "Registration Successful!";
    }
}
?>

<!DOCTYPE html>
<html>
<head>
    <title>Student Registration Form</title>
</head>
<body>

<h2>Student Registration Form</h2>

<form method="POST" action="">

    Name:
    <input type="text" name="name"
    value="<?php echo htmlspecialchars($name); ?>">
    <br><br>

    Email:
    <input type="text" name="email"
    value="<?php echo htmlspecialchars($email); ?>">
    <br><br>

    Phone Number:
    <input type="text" name="phone"
    value="<?php echo htmlspecialchars($phone); ?>">
    <br><br>

    Password:
    <input type="password" name="password">
    <br><br>

    Confirm Password:
    <input type="password" name="confirm">
    <br><br>

    <input type="submit" value="Register">
    <input type="reset" value="Clear">

</form>

<?php
if (!empty($errors)) {
    echo "<h3>Validation Errors:</h3>";
    foreach ($errors as $error) {
        echo "<p style='color:red;'>"
        . htmlspecialchars($error) . "</p>";
    }
}

if (!empty($success)) {
    echo "<h3 style='color:green;'>"
    . $success . "</h3>";
}
?>

</body>
</html>
