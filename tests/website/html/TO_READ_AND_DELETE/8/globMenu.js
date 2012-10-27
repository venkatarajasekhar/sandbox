// JavaScript Document
function optionMenu()
   {
   		var choice = document.menuNow.global1.selectedIndex;
   		var urlNow = document.menuNow.global1.options[choice].value;
   		window.location.href = urlNow;
   }