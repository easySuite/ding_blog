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
  $export['blog__panel_context_80e64219-0dbd-4979-b31c-eebe28274fca'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__blog';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 3;
  $handler->conf = array(
    'title' => 'Blog',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(
      0 => array(
        'identifier' => 'User',
        'keyword' => 'user',
        'name' => 'user',
        'type' => 'current',
        'uid' => NULL,
        'id' => 1,
      ),
    ),
    'relationships' => array(
      0 => array(
        'identifier' => 'Taxonomy term from Node (on Node: Category [field_ding_blog_category])',
        'keyword' => 'taxonomy_term',
        'name' => 'entity_from_field:field_ding_blog_category-node-taxonomy_term',
        'delta' => 0,
        'context' => 'argument_entity_id:node_1',
        'id' => 1,
      ),
    ),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'blog' => 'blog',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'Blogs
%node:title',
    'panels_breadcrumbs_paths' => 'blog
<none>',
    'metatag_panels' => array(
      'enabled' => 1,
      'metatags' => array(
        'title' => array(
          'value' => '[node:title] | [current-page:pager][site:name]',
        ),
        'image_src' => array(
          'value' => '[node:field_ding_blog_list_image]',
        ),
      ),
    ),
    'name' => 'blog',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'easyweb_frontend_page';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'middle' => NULL,
      'right' => NULL,
      'top' => NULL,
      'bottom' => NULL,
      'grid_10_center' => NULL,
      'grid_3_left' => NULL,
      'grid_3_right' => NULL,
      'left_sidebar' => NULL,
      'main_content' => NULL,
      'right_sidebar' => NULL,
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
      'branding' => NULL,
      'header' => NULL,
      'navigation' => NULL,
      'content' => NULL,
      'footer' => NULL,
      's1_r_01_100' => NULL,
      's1_r_02_025' => NULL,
      's1_r_02_075' => NULL,
      's1_r_03_033' => NULL,
      's1_r_03_066' => NULL,
      's1_r_04_050_1' => NULL,
      's1_r_04_050_2' => NULL,
      's1_r_05_066' => NULL,
      's1_r_05_033' => NULL,
      's1_r_06_075' => NULL,
      's1_r_06_025' => NULL,
      's1_r_07_033_1' => NULL,
      's1_r_07_033_2' => NULL,
      's1_r_07_033_3' => NULL,
      's1_r_08_050' => NULL,
      's1_r_08_025_1' => NULL,
      's1_r_08_025_2' => NULL,
      's1_r_09_025_1' => NULL,
      's1_r_09_050' => NULL,
      's1_r_09_025_2' => NULL,
      's1_r_10_025_1' => NULL,
      's1_r_10_025_2' => NULL,
      's1_r_10_050' => NULL,
      's1_r_11_025_1' => NULL,
      's1_r_11_025_2' => NULL,
      's1_r_11_025_3' => NULL,
      's1_r_11_025_4' => NULL,
      's2_r_01_100' => NULL,
      's2_r_02_025' => NULL,
      's2_r_02_075' => NULL,
      's2_r_03_033' => NULL,
      's2_r_03_066' => NULL,
      's2_r_04_050_1' => NULL,
      's2_r_04_050_2' => NULL,
      's2_r_05_066' => NULL,
      's2_r_05_033' => NULL,
      's2_r_06_075' => NULL,
      's2_r_06_025' => NULL,
      's2_r_07_033_1' => NULL,
      's2_r_07_033_2' => NULL,
      's2_r_07_033_3' => NULL,
      's2_r_08_050' => NULL,
      's2_r_08_025_1' => NULL,
      's2_r_08_025_2' => NULL,
      's2_r_09_025_1' => NULL,
      's2_r_09_050' => NULL,
      's2_r_09_025_2' => NULL,
      's2_r_10_025_1' => NULL,
      's2_r_10_025_2' => NULL,
      's2_r_10_050' => NULL,
      's2_r_11_025_1' => NULL,
      's2_r_11_025_2' => NULL,
      's2_r_11_025_3' => NULL,
      's2_r_11_025_4' => NULL,
      's3_r_01_100' => NULL,
      's3_r_02_025' => NULL,
      's3_r_02_075' => NULL,
      's3_r_03_033' => NULL,
      's3_r_03_066' => NULL,
      's3_r_04_050_1' => NULL,
      's3_r_04_050_2' => NULL,
      's3_r_05_066' => NULL,
      's3_r_05_033' => NULL,
      's3_r_06_075' => NULL,
      's3_r_06_025' => NULL,
      's3_r_07_033_1' => NULL,
      's3_r_07_033_2' => NULL,
      's3_r_07_033_3' => NULL,
      's3_r_08_050' => NULL,
      's3_r_08_025_1' => NULL,
      's3_r_08_025_2' => NULL,
      's3_r_09_025_1' => NULL,
      's3_r_09_050' => NULL,
      's3_r_09_025_2' => NULL,
      's3_r_10_025_1' => NULL,
      's3_r_10_025_2' => NULL,
      's3_r_10_050' => NULL,
      's3_r_11_025_1' => NULL,
      's3_r_11_025_2' => NULL,
      's3_r_11_025_3' => NULL,
      's3_r_11_025_4' => NULL,
      's4_r_01_100' => NULL,
      's4_r_02_025' => NULL,
      's4_r_02_075' => NULL,
      's4_r_03_033' => NULL,
      's4_r_03_066' => NULL,
      's4_r_04_050_1' => NULL,
      's4_r_04_050_2' => NULL,
      's4_r_05_066' => NULL,
      's4_r_05_033' => NULL,
      's4_r_06_075' => NULL,
      's4_r_06_025' => NULL,
      's4_r_07_033_1' => NULL,
      's4_r_07_033_2' => NULL,
      's4_r_07_033_3' => NULL,
      's4_r_08_050' => NULL,
      's4_r_08_025_1' => NULL,
      's4_r_08_025_2' => NULL,
      's4_r_09_025_1' => NULL,
      's4_r_09_050' => NULL,
      's4_r_09_025_2' => NULL,
      's4_r_10_025_1' => NULL,
      's4_r_10_025_2' => NULL,
      's4_r_10_050' => NULL,
      's4_r_11_025_1' => NULL,
      's4_r_11_025_2' => NULL,
      's4_r_11_025_3' => NULL,
      's4_r_11_025_4' => NULL,
      's5_r_01_100' => NULL,
      's5_r_02_025' => NULL,
      's5_r_02_075' => NULL,
      's5_r_03_033' => NULL,
      's5_r_03_066' => NULL,
      's5_r_04_050_1' => NULL,
      's5_r_04_050_2' => NULL,
      's5_r_05_066' => NULL,
      's5_r_05_033' => NULL,
      's5_r_06_075' => NULL,
      's5_r_06_025' => NULL,
      's5_r_07_033_1' => NULL,
      's5_r_07_033_2' => NULL,
      's5_r_07_033_3' => NULL,
      's5_r_08_050' => NULL,
      's5_r_08_025_1' => NULL,
      's5_r_08_025_2' => NULL,
      's5_r_09_025_1' => NULL,
      's5_r_09_050' => NULL,
      's5_r_09_025_2' => NULL,
      's5_r_10_025_1' => NULL,
      's5_r_10_025_2' => NULL,
      's5_r_10_050' => NULL,
      's5_r_11_025_1' => NULL,
      's5_r_11_025_2' => NULL,
      's5_r_11_025_3' => NULL,
      's5_r_11_025_4' => NULL,
      's6_r_01_100' => NULL,
      's6_r_02_025' => NULL,
      's6_r_02_075' => NULL,
      's6_r_03_033' => NULL,
      's6_r_03_066' => NULL,
      's6_r_04_050_1' => NULL,
      's6_r_04_050_2' => NULL,
      's6_r_05_066' => NULL,
      's6_r_05_033' => NULL,
      's6_r_06_075' => NULL,
      's6_r_06_025' => NULL,
      's6_r_07_033_1' => NULL,
      's6_r_07_033_2' => NULL,
      's6_r_07_033_3' => NULL,
      's6_r_08_050' => NULL,
      's6_r_08_025_1' => NULL,
      's6_r_08_025_2' => NULL,
      's6_r_09_025_1' => NULL,
      's6_r_09_050' => NULL,
      's6_r_09_025_2' => NULL,
      's6_r_10_025_1' => NULL,
      's6_r_10_025_2' => NULL,
      's6_r_10_050' => NULL,
      's6_r_11_025_1' => NULL,
      's6_r_11_025_2' => NULL,
      's6_r_11_025_3' => NULL,
      's6_r_11_025_4' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '45175b89-df7a-48fe-8118-cb87907dc9df';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-a6229377-5925-4728-a26a-48d1d33263ee';
    $pane->panel = 's1_r_01_100';
    $pane->type = 'node_content';
    $pane->subtype = 'node_content';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'links' => 1,
      'no_extras' => 0,
      'override_title' => 0,
      'override_title_text' => '',
      'identifier' => '',
      'link' => 0,
      'leave_node_title' => 1,
      'build_mode' => 'full',
      'context' => 'argument_entity_id:node_1',
    );
    $pane->cache = array(
      'method' => '0',
      'settings' => array(),
    );
    $pane->style = array(
      'settings' => NULL,
      'style' => 'naked',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = '';
    $pane->uuid = 'a6229377-5925-4728-a26a-48d1d33263ee';
    $display->content['new-a6229377-5925-4728-a26a-48d1d33263ee'] = $pane;
    $display->panels['s1_r_01_100'][0] = 'new-a6229377-5925-4728-a26a-48d1d33263ee';
    $pane = new stdClass();
    $pane->pid = 'new-f5f0e077-0b1b-4a1a-a49a-0539f280450f';
    $pane->panel = 's2_r_01_100';
    $pane->type = 'views_panes';
    $pane->subtype = 'ding_blog-related_author_blogs';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_entity_id:node_1',
      ),
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
      'link_to_view' => 0,
      'fields_override' => array(
        'title' => 0,
        'uid' => 1,
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'f5f0e077-0b1b-4a1a-a49a-0539f280450f';
    $display->content['new-f5f0e077-0b1b-4a1a-a49a-0539f280450f'] = $pane;
    $display->panels['s2_r_01_100'][0] = 'new-f5f0e077-0b1b-4a1a-a49a-0539f280450f';
    $pane = new stdClass();
    $pane->pid = 'new-2b7cdd26-b05d-48f5-a12e-f72f0fee2675';
    $pane->panel = 's3_r_01_100';
    $pane->type = 'views_panes';
    $pane->subtype = 'ding_blog-related_category_blogs';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'relationship_entity_from_field:field_ding_blog_category-node-taxonomy_term_1',
        1 => 'argument_entity_id:node_1',
      ),
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
    $pane->uuid = '2b7cdd26-b05d-48f5-a12e-f72f0fee2675';
    $display->content['new-2b7cdd26-b05d-48f5-a12e-f72f0fee2675'] = $pane;
    $display->panels['s3_r_01_100'][0] = 'new-2b7cdd26-b05d-48f5-a12e-f72f0fee2675';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__blog'] = $handler;

  return $export;
}
