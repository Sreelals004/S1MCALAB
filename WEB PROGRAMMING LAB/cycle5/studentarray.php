<?php
// Store student names in an array
$students = array("Anu", "Rahul", "Meera", "Arun", "Divya");

echo "<h3>Original Student Names:</h3>";
print_r($students);

// Using sort() - Ascending order
sort($students);

echo "<br><br><h3>After sort() - Ascending Order:</h3>";
print_r($students);

// Using asort() - Ascending order (preserves keys)
asort($students);

echo "<br><br><h3>After asort() - Ascending Order:</h3>";
print_r($students);

// Using arsort() - Descending order (preserves keys)
arsort($students);

echo "<br><br><h3>After arsort() - Descending Order:</h3>";
print_r($students);

?>
