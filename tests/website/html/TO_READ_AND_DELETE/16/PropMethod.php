<?php
	class PropMethod
	{
		private $propString="I work well with HTML5";
		private $propNum=2044;
		private $propBool=true;
		public function showString()
		{
			echo $this->propString, "<br>";
		}
		public function showNum()
		{
			echo $this->propNum, "<br>";
		}
		public function showBool()
		{
			echo $this->propBool;
		}
	}	
$testPM=new PropMethod();
echo $testPM->showString();
echo $testPM->showNum();
echo $testPM->showBool();
?>