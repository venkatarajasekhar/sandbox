<?php
//Catch HTML5 Data
$name;
$email;
if(isset($_POST['sender']))
{
	$name=$_POST["formName"];
	$email=$_POST["formEmail"];
}
print "$name's email address is $email";
?>