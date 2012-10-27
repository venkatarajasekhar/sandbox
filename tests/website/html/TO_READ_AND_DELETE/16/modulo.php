<?php
for ($count = 1; $count <= 12; $count++) {
    $valid = $count % 2;
	if($valid)
	{
		echo $count, " is odd<br>";
	}
	else
	{
		echo $count, " is even<br>";
	}	
}
?>