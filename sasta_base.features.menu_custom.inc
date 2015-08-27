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

  // Exported menu: menu-footer-menu.
  $menus['menu-footer-menu'] = array(
    'menu_name' => 'menu-footer-menu',
    'title' => 'Меню в подвале',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Меню в подвале');


  return $menus;
}
