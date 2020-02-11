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
  $handler->name = 'blog__panel_context_80e64219-0dbd-4979-b31c-eebe28274fca';
  $handler->task = 'blog';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Blogs page',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
  );
  $display = new panels_display();
  $display->layout = '25_50_25';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'primary' => NULL,
      'secondary' => NULL,
      'tertiary' => NULL,
      'attachment_4_1' => NULL,
      'attachment_4_2' => NULL,
      'attachment_4_3' => NULL,
      'attachment_4_4' => NULL,
      'attachment_3_1' => NULL,
      'attachment_3_2' => NULL,
      'attachment_3_3' => NULL,
      'attachment_2_1' => NULL,
      'attachment_2_2' => NULL,
      'attachment_1_1' => NULL,
      'left_sidebar' => NULL,
      'main_content' => NULL,
      'right_sidebar' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'dae43aa2-d807-4afb-9e6c-108f2deeb7b5';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-bad99826-cb70-4d61-98a8-0198f44ad015';
  $pane->panel = 'left_sidebar';
  $pane->type = 'block';
  $pane->subtype = 'views--exp-ding_blog-ding_blog_list';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'inherit_path' => 1,
    'override_title' => 1,
    'override_title_text' => 'Blogs',
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
  $pane->uuid = 'bad99826-cb70-4d61-98a8-0198f44ad015';
  $display->content['new-bad99826-cb70-4d61-98a8-0198f44ad015'] = $pane;
  $display->panels['left_sidebar'][0] = 'new-bad99826-cb70-4d61-98a8-0198f44ad015';
  $pane = new stdClass();
  $pane->pid = 'new-b779f88a-10ba-468b-8119-8736f014a8fa';
  $pane->panel = 'main_content';
  $pane->type = 'views_panes';
  $pane->subtype = 'ding_blog-ding_blog_list';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
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
  $pane->uuid = 'b779f88a-10ba-468b-8119-8736f014a8fa';
  $display->content['new-b779f88a-10ba-468b-8119-8736f014a8fa'] = $pane;
  $display->panels['main_content'][0] = 'new-b779f88a-10ba-468b-8119-8736f014a8fa';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__blog-alternative-layout'] = $handler;

  return $export;
}
