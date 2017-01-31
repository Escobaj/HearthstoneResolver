<?php
/* Smarty version 3.1.30, created on 2017-01-30 23:54:55
  from "C:\Users\Jo\HearthstoneResolver\template\Minion.h" */

/* @var Smarty_Internal_Template $_smarty_tpl */
if ($_smarty_tpl->_decodeProperties($_smarty_tpl, array (
  'version' => '3.1.30',
  'unifunc' => 'content_588fd24f67b040_11728089',
  'has_nocache_code' => false,
  'file_dependency' => 
  array (
    'b2c5685985abfa596980cc8843143e89a6f67749' => 
    array (
      0 => 'C:\\Users\\Jo\\HearthstoneResolver\\template\\Minion.h',
      1 => 1485820307,
      2 => 'file',
    ),
  ),
  'includes' => 
  array (
  ),
),false)) {
function content_588fd24f67b040_11728089 (Smarty_Internal_Template $_smarty_tpl) {
?>
#ifndef HEARTHSTONERESOLVER_<?php echo mb_strtoupper($_smarty_tpl->tpl_vars['id']->value, 'UTF-8');?>
_H
#define HEARTHSTONERESOLVER_<?php echo mb_strtoupper($_smarty_tpl->tpl_vars['id']->value, 'UTF-8');?>
_H


#include "../Core/Entities/Minion.h"

class <?php echo $_smarty_tpl->tpl_vars['id']->value;?>
 : public Minion {
public:
    <?php echo $_smarty_tpl->tpl_vars['id']->value;?>
(const EventHandler &e);

    void init();
};


#endif //HEARTHSTONERESOLVER_<?php echo mb_strtoupper($_smarty_tpl->tpl_vars['id']->value, 'UTF-8');?>
_H
<?php }
}
