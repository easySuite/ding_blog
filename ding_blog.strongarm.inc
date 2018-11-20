<?php
/**
 * @file
 * ding_blog.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function ding_blog_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_blog_pattern';
  $strongarm->value = 'blog/[user:name]';
  $export['pathauto_blog_pattern'] = $strongarm;

  return $export;
}
