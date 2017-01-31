<?php
/* Smarty version 3.1.30, created on 2017-01-30 23:55:29
  from "C:\Users\Jo\HearthstoneResolver\template\Minion.c" */

/* @var Smarty_Internal_Template $_smarty_tpl */
if ($_smarty_tpl->_decodeProperties($_smarty_tpl, array (
  'version' => '3.1.30',
  'unifunc' => 'content_588fd271e4d0f5_93776144',
  'has_nocache_code' => false,
  'file_dependency' => 
  array (
    '497167f7675e41372cee2828f32c654fe40ed702' => 
    array (
      0 => 'C:\\Users\\Jo\\HearthstoneResolver\\template\\Minion.c',
      1 => 1485820512,
      2 => 'file',
    ),
  ),
  'includes' => 
  array (
  ),
),false)) {
function content_588fd271e4d0f5_93776144 (Smarty_Internal_Template $_smarty_tpl) {
?>
//
// Created by Jo on 19/12/2016.
//

#include "<?php echo $_smarty_tpl->tpl_vars['id']->value;?>
.h"

<?php echo $_smarty_tpl->tpl_vars['id']->value;?>
::<?php echo $_smarty_tpl->tpl_vars['id']->value;?>
(const EventHandler &e) : Minion(e) {
    this->set_id(<?php echo $_smarty_tpl->tpl_vars['Mid']->value;?>
);
    this->set_attackMax(<?php echo $_smarty_tpl->tpl_vars['attack']->value;?>
);
    this->set_defaultCost(<?php echo $_smarty_tpl->tpl_vars['cost']->value;?>
);
    this->set_name("<?php echo $_smarty_tpl->tpl_vars['name']->value;?>
");
    this->set_membership(Class::<?php echo $_smarty_tpl->tpl_vars['class']->value;?>
);
    this->set_type(CardType::<?php echo $_smarty_tpl->tpl_vars['type']->value;?>
);
    this->set_attackMax(<?php echo $_smarty_tpl->tpl_vars['attack']->value;?>
);
    this->set_maxHealth(<?php echo $_smarty_tpl->tpl_vars['health']->value;?>
);
}

void <?php echo $_smarty_tpl->tpl_vars['id']->value;?>
::init() {
}<?php }
}
