<?php
/**
 * @file
 * sasta_base.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function sasta_base_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-left-menu.
  $menus['menu-left-menu'] = array(
    'menu_name' => 'menu-left-menu',
    'title' => 'Left menu',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Left menu');


  return $menus;
}
