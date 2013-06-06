<?php
/**
 * @file
 * rd_libations.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function rd_libations_user_default_permissions() {
  $permissions = array();

  // Exported permission: create libation content.
  $permissions['create libation content'] = array(
    'name' => 'create libation content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: create producer content.
  $permissions['create producer content'] = array(
    'name' => 'create producer content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete any libation content.
  $permissions['delete any libation content'] = array(
    'name' => 'delete any libation content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete any producer content.
  $permissions['delete any producer content'] = array(
    'name' => 'delete any producer content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete own libation content.
  $permissions['delete own libation content'] = array(
    'name' => 'delete own libation content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete own producer content.
  $permissions['delete own producer content'] = array(
    'name' => 'delete own producer content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit any libation content.
  $permissions['edit any libation content'] = array(
    'name' => 'edit any libation content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit any producer content.
  $permissions['edit any producer content'] = array(
    'name' => 'edit any producer content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit own libation content.
  $permissions['edit own libation content'] = array(
    'name' => 'edit own libation content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit own producer content.
  $permissions['edit own producer content'] = array(
    'name' => 'edit own producer content',
    'roles' => array(),
    'module' => 'node',
  );

  return $permissions;
}
