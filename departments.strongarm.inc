<?php
/**
 * @file
 * departments.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function departments_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_faculties_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_faculties_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_library_departments_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_library_departments_pattern'] = $strongarm;

  return $export;
}
