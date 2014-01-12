<?php
/**
 * @file
 * off_mail_reply_feature.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function off_mail_reply_feature_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer mailhandler'.
  $permissions['administer mailhandler'] = array(
    'name' => 'administer mailhandler',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'mailhandler',
  );

  return $permissions;
}
