<!DOCTYPE html>
<html>
<head>
    <title>Indian Cricket Players</title>
</head>
<body>

<h2>Indian Cricket Players</h2>

<?php
// Creating an array of cricket players
$players = array("Virat Kohli", "Rohit Sharma",
                 "MS Dhoni", "Hardik Pandya",
                 "Jasprit Bumrah");

// Displaying the array using HTML table
echo "<table border='1' cellpadding='10'>";
echo "<tr><th>Sl.No</th><th>Player Name</th></tr>";

$i = 1;

foreach($players as $name)
{
    echo "<tr>";
    echo "<td>$i</td>";
    echo "<td>$name</td>";
    echo "</tr>";

    $i++;
}

echo "</table>";
?>

</body>
</html>
