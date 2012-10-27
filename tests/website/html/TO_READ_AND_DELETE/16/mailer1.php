<?php
$name;
$email;
$comments;
$subject;
$eBiz="waz@wazooHome.net";
if(isset($_POST['sender']))
{
	$name=$_POST["userName"];
	$email=$_POST["mailNow"];
	$comments=$_POST["talk"];
	$subject=$_POST["subject"];
}
$comments .= "\r\r\r\nFrom-> $name : Send reply to: $email";
mail($eBiz,$subject,$comments);
echo "Your e-mail has been sent to $eBiz. Thank you for your interest in Wazoo Web Site Design and Development.";
?>