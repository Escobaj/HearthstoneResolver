<?php

require("cardify.php");

//$smarty = new Smarty();
//
//ob_start();
//
//$smarty->display("template.html");
//
//$buffer = ob_get_clean();

$card = new cardify();

$card->getData("https://api.hearthstonejson.com/v1/15590/frFR/cards.json");

$card->run();

//
//foreach($jsonData as $row){
//    if ($row->type == "HERO") {
//        var_dump($row);
//        exit();
//    }
//}
