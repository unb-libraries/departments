<?php
/**
 * @file
 * departments.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function departments_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'edit terms in faculties'.
  $permissions['edit terms in faculties'] = array(
    'name' => 'edit terms in faculties',
    'roles' => array(
      'Liaison Listing Admin' => 'Liaison Listing Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'view departments'.
  $permissions['view departments'] = array(
    'name' => 'view departments',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'departments',
  );

  return $permissions;
}
