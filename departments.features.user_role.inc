<?php
/**
 * @file
 * departments.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function departments_user_default_roles() {
  $roles = array();

  // Exported role: Liaison Listing Admin.
  $roles['Liaison Listing Admin'] = array(
    'name' => 'Liaison Listing Admin',
    'weight' => 12,
  );

  // Exported role: Staff Directory Admin.
  $roles['Staff Directory Admin'] = array(
    'name' => 'Staff Directory Admin',
    'weight' => 41,
  );

  return $roles;
}
