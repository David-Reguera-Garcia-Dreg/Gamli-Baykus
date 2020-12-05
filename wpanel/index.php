<?php

$ipadr = htmlspecialchars($_SERVER['REMOTE_ADDR']);



$html = '<html>

<pre>

  _                                                               _
_/0\_                                                           _/x\_
(* *)               GAMLI BAYKUS V1.0 || GUARD                  (* *)
| - |                                                           | - |
(___________________________________________________________________)


</pre>

<p>Your IP : '.$ipadr.' 


Wohohohoo Big Hacker. Your IP Logged..</p>

</html>';


echo($html);

$kok = fopen('loglananlar.txt','a+');
fwrite($kok,$ipadr);
fclose($kok);

?>