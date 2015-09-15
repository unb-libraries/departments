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

  // Exported role: Liason Listing Admin.
  $roles['Liason Listing Admin'] = array(
    'name' => 'Liason Listing Admin',
    'weight' => 12,
  );

  // Exported role: Staff Directory Admin.
  $roles['Staff Directory Admin'] = array(
    'name' => 'Staff Directory Admin',
    'weight' => 37,
  );

  return $roles;
}
