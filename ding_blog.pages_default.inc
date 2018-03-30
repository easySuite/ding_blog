<?php
/**
 * @file
 * ding_blog.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function ding_blog_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'blog_user__panel_context_ff42408c-a352-4e9f-90f8-7b6f21d6002a';
  $handler->task = 'blog_user';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Staff profile',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
  );
  $display = new panels_display();
  $display->layout = 'ding2_site_template';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'branding' => NULL,
      'header' => NULL,
      'navigation' => NULL,
      'content' => NULL,
      'footer' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'bff45ee9-2405-4c83-9a79-3405395208ab';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'blog_user__panel_context_ff42408c-a352-4e9f-90f8-7b6f21d6002a';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-0869abb2-82e8-4404-a67c-c4d02e01367f';
  $pane->panel = 'content';
  $pane->type = 'staff_profile';
  $pane->subtype = 'staff_profile';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'argument_uid_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '0869abb2-82e8-4404-a67c-c4d02e01367f';
  $display->content['new-0869abb2-82e8-4404-a67c-c4d02e01367f'] = $pane;
  $display->panels['content'][0] = 'new-0869abb2-82e8-4404-a67c-c4d02e01367f';
  $pane = new stdClass();
  $pane->pid = 'new-c008434f-a252-491b-b71d-daf35edb7fbd';
  $pane->panel = 'content';
  $pane->type = 'views_panes';
  $pane->subtype = 'ding_blog-user_blog_list_categories';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'c008434f-a252-491b-b71d-daf35edb7fbd';
  $display->content['new-c008434f-a252-491b-b71d-daf35edb7fbd'] = $pane;
  $display->panels['content'][1] = 'new-c008434f-a252-491b-b71d-daf35edb7fbd';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['blog_user__panel_context_ff42408c-a352-4e9f-90f8-7b6f21d6002a'] = $handler;

  return $export;
}
