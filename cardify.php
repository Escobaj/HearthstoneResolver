<?php

require ("libs/smarty.class.php");

class cardify
{

    private $data;

    function getData($path){
        $this->data = json_decode(file_get_contents($path));
    }

    function heroPower($row){
    }

    function spell($row){
    }

    function minion($row){
        $hpp = [
            'id' => "M" . $row->dbfId
        ];

        $cpp = [
            'Mid' => $row->dbfId,
            'id' => "M" . $row->dbfId,
            'name' => $row->name,
            'cost' => $row->cost,
            'attack' => $row->attack,
            'health' => $row->health,
            'class' => $row->playerClass,
            'type' => (isset($row->race)) ? $row->race : "GENERAL"
        ];

        $this->createFile("card/". $cpp['id'] . ".h", "template/Minion.h", $hpp);
        $this->createFile("card/". $cpp['id'] . ".cpp", "template/Minion.c", $cpp);
    }

    function weapon($row){
    }

    function createFile($path, $template, $data){
        $smarty = new Smarty();

        $smarty->assign($data);
        ob_start();
        $smarty->display($template);
        file_put_contents($path, ob_get_clean());
        unset($smarty);
    }

    function run(){
        $tab = [];
        foreach ($this->data as $row){
            if ($row->type == "MINION") {
                $this->minion($row);
            } else if ($row->type == "WEAPON") {
                $this->weapon($row);
            } else if ($row->type == "SPELL") {
                $this->spell($row);
            } else if ($row->type == "HERO_POWER") {
                $this->heroPower($row);
            }
        }
    }
}