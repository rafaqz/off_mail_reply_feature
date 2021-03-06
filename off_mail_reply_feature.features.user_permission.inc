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

  // Exported permission: 'clear mail_reply_comments feeds'.
  $permissions['clear mail_reply_comments feeds'] = array(
    'name' => 'clear mail_reply_comments feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'import mail_reply_comments feeds'.
  $permissions['import mail_reply_comments feeds'] = array(
    'name' => 'import mail_reply_comments feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'unlock mail_reply_comments feeds'.
  $permissions['unlock mail_reply_comments feeds'] = array(
    'name' => 'unlock mail_reply_comments feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  return $permissions;
}
