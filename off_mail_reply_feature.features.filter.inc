<?php
/**
 * @file
 * off_mail_reply_feature.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function off_mail_reply_feature_filter_default_formats() {
  $formats = array();

  // Exported format: Comment Reply.
  $formats['comment_reply'] = array(
    'format' => 'comment_reply',
    'name' => 'Comment Reply',
    'cache' => 1,
    'status' => 1,
    'weight' => 0,
    'filters' => array(
      'filter_html_escape' => array(
        'weight' => -10,
        'status' => 1,
        'settings' => array(),
      ),
      'mailcomment_basic' => array(
        'weight' => 0,
        'status' => 1,
        'settings' => array(),
      ),
      'mailhandler_quoted' => array(
        'weight' => 0,
        'status' => 1,
        'settings' => array(),
      ),
    ),
  );

  return $formats;
}
