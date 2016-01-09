<?php
/**
 * @file
 * base_settings.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function base_settings_user_default_roles() {
  $roles = array();

  // Exported role: Администратор.
  $roles['Администратор'] = array(
    'name' => 'Администратор',
    'weight' => 2,
  );

  // Exported role: Редактор.
  $roles['Редактор'] = array(
    'name' => 'Редактор',
    'weight' => 3,
  );

  return $roles;
}
