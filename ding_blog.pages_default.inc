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
  $display->layout = 'ding_layout_1';
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
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'dae43aa2-d807-4afb-9e6c-108f2deeb7b5';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'blog__panel_context_80e64219-0dbd-4979-b31c-eebe28274fca';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-e8a1f584-98cd-44b9-8005-08cc896eb881';
  $pane->panel = 'primary';
  $pane->type = 'ding_nodelist';
  $pane->subtype = 'ding_nodelist';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'list_type' => 'all',
    'title_length' => 25,
    'body_length' => 100,
    'dynamic_switch' => 0,
    'nodes_switch' => 0,
    'autoscroll_delay' => NULL,
    'columns' => 'full',
    'content_filter_promoted' => 0,
    'content_filter_date' => FALSE,
    'content_types' => array(
      'blog' => 'blog',
    ),
    'limit' => '12',
    'more_links' => array(),
    'override_title_text' => 'Latest blog entries',
    'selected_nodes' => array(),
    'sort_field' => 'created',
    'sort_order' => 'desc',
    'taxonomy_filters' => array(),
    'unique_id' => 'pane-15230038111016',
    'widget_type' => 'node_blocks',
    'item_template' => '',
    'image_field' => 'list_image',
  );
  $pane->cache = array(
    'method' => 'simple',
    'settings' => array(
      'lifetime' => '1800',
      'granularity' => 'context',
    ),
  );
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'e8a1f584-98cd-44b9-8005-08cc896eb881';
  $display->content['new-e8a1f584-98cd-44b9-8005-08cc896eb881'] = $pane;
  $display->panels['primary'][0] = 'new-e8a1f584-98cd-44b9-8005-08cc896eb881';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['blog__panel_context_80e64219-0dbd-4979-b31c-eebe28274fca'] = $handler;

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
  $pane->pid = 'new-e21ced7a-07d0-44df-b800-47fa0965e639';
  $pane->panel = 'content';
  $pane->type = 'views_panes';
  $pane->subtype = 'ding_blog-ding_blog_list_user';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => array(
      0 => 'argument_uid_1',
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'e21ced7a-07d0-44df-b800-47fa0965e639';
  $display->content['new-e21ced7a-07d0-44df-b800-47fa0965e639'] = $pane;
  $display->panels['content'][1] = 'new-e21ced7a-07d0-44df-b800-47fa0965e639';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['blog_user__panel_context_ff42408c-a352-4e9f-90f8-7b6f21d6002a'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__blog';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -20;
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
  $display->layout = '25_50_25';
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
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '45175b89-df7a-48fe-8118-cb87907dc9df';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view__blog';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-a6229377-5925-4728-a26a-48d1d33263ee';
  $pane->panel = 'attachment_1_1';
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
  $display->panels['attachment_1_1'][0] = 'new-a6229377-5925-4728-a26a-48d1d33263ee';
  $pane = new stdClass();
  $pane->pid = 'new-f5f0e077-0b1b-4a1a-a49a-0539f280450f';
  $pane->panel = 'attachment_1_1';
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'f5f0e077-0b1b-4a1a-a49a-0539f280450f';
  $display->content['new-f5f0e077-0b1b-4a1a-a49a-0539f280450f'] = $pane;
  $display->panels['attachment_1_1'][1] = 'new-f5f0e077-0b1b-4a1a-a49a-0539f280450f';
  $pane = new stdClass();
  $pane->pid = 'new-2b7cdd26-b05d-48f5-a12e-f72f0fee2675';
  $pane->panel = 'attachment_1_1';
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
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '2b7cdd26-b05d-48f5-a12e-f72f0fee2675';
  $display->content['new-2b7cdd26-b05d-48f5-a12e-f72f0fee2675'] = $pane;
  $display->panels['attachment_1_1'][2] = 'new-2b7cdd26-b05d-48f5-a12e-f72f0fee2675';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__blog'] = $handler;

  return $export;
}
