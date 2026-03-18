<?php
$valsad_info = [
    "name" => "Valsad",
    "district" => "Valsad",
    "fame" => "Mangoes and Teak wood",
    "railway_division" => "Mumbai WR",
    "pincode" => 396001,
    "tourism" => ["Tithal Beach", "Udvada (Nearby Parsis heritage)"]
];

echo "<h2>Welcome to " . $valsad_info['name'] . "</h2>";
echo "<ul>";
echo "<li><strong>Famous For:</strong> " . $valsad_info['fame'] . "</li>";
echo "<li><strong>Railway Station:</strong> BL (Valsad)</li>";
echo "<li><strong>Key Nearby Spot:</strong> " . $valsad_info['tourism'][1] . "</li>";
echo "</ul>";
?>
