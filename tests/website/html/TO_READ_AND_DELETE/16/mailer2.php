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
$headers = "From-> $name :\r\n Send reply to: $email";
$reply="Dear $name , \r\n Thank you for sending us your comments. We at Wazoo Web Site Design and Development believe that customer care is an essential of doing business; not an optional service.\r\n\n";
$reply .= "As soon as we can review your comments, one of our associates will get back to you.";
$reply .="\r\n\n Sincerely, Phillip Pickle,\r\n President, WWSDD";
mail($email,"Thank you for your thoughts",$reply);
mail($eBiz,$subject,$comments,$headers);
echo "Your e-mail has been sent to $eBiz. Thank you for your interest in Wazoo Web Site Design and Development.";
?>