<?php
$associate = array("key1" => "value1","key2" => "value2","keyEtc" => "valueEtc");
$boxCar=array("tools","oil drum","cow",7, false, "computer parts");
$mixedBag=array(1=>"first",2=>"second","third"=>3,4=>4);
echo $associate["key2"] . "<br>";
echo $associate["keyEtc"] . "<br>";
echo $boxCar[5] . "<br>";
echo $boxCar[0] . "<br>";
echo $mixedBag[2],$mixedBag["third"];
?>