<?php
/**
 * @file
 * sasta_base.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function sasta_base_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'site_template__frontpage';
  $handler->task = 'site_template';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'Frontpage',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'frontpage',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'front',
          'settings' => NULL,
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'main';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'main_content' => NULL,
    ),
    'main_content' => array(
      'style' => '-1',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'f579e947-c31c-41ba-ac88-c81b17d42226';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-b2d947de-1b80-4e6a-a7fc-98a9bfcee556';
    $pane->panel = 'main_content';
    $pane->type = 'block';
    $pane->subtype = 'system-main-menu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'background' => '#002736',
        'image' => '',
        'image_style' => '',
        'class' => '',
      ),
      'style' => 'fullwidth',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'b2d947de-1b80-4e6a-a7fc-98a9bfcee556';
    $display->content['new-b2d947de-1b80-4e6a-a7fc-98a9bfcee556'] = $pane;
    $display->panels['main_content'][0] = 'new-b2d947de-1b80-4e6a-a7fc-98a9bfcee556';
    $pane = new stdClass();
    $pane->pid = 'new-85de740a-a746-4dc6-9ecc-cdec818a59b7';
    $pane->panel = 'main_content';
    $pane->type = 'views_panes';
    $pane->subtype = 'slider-slider';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'style' => 'fullwidth',
      'settings' => array(
        'background' => '#ccc',
        'padding_top' => '',
        'padding_bottom' => '',
        'image' => '',
        'image_style' => '',
        'class' => '',
      ),
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '85de740a-a746-4dc6-9ecc-cdec818a59b7';
    $display->content['new-85de740a-a746-4dc6-9ecc-cdec818a59b7'] = $pane;
    $display->panels['main_content'][1] = 'new-85de740a-a746-4dc6-9ecc-cdec818a59b7';
    $pane = new stdClass();
    $pane->pid = 'new-4b99f717-931b-47d6-a6ee-28a8876bff52';
    $pane->panel = 'main_content';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '',
      'format' => 'filtered_html',
      'substitute' => TRUE,
      'name' => 'promo_block_4',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'background' => '#fff',
        'image' => '',
        'image_style' => '',
        'class' => '',
        'padding_top' => '15px',
        'padding_bottom' => '15px',
      ),
      'style' => 'fullwidth',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '4b99f717-931b-47d6-a6ee-28a8876bff52';
    $display->content['new-4b99f717-931b-47d6-a6ee-28a8876bff52'] = $pane;
    $display->panels['main_content'][2] = 'new-4b99f717-931b-47d6-a6ee-28a8876bff52';
    $pane = new stdClass();
    $pane->pid = 'new-a4e79ffe-18cd-42c7-99c9-174751797c1e';
    $pane->panel = 'main_content';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '',
      'format' => 'filtered_html',
      'substitute' => TRUE,
      'name' => 'callbackforn',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'background' => '#000',
        'image' => '',
        'image_style' => '',
        'class' => '',
        'padding_top' => '15px',
        'padding_bottom' => '15px',
      ),
      'style' => 'fullwidth',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'a4e79ffe-18cd-42c7-99c9-174751797c1e';
    $display->content['new-a4e79ffe-18cd-42c7-99c9-174751797c1e'] = $pane;
    $display->panels['main_content'][3] = 'new-a4e79ffe-18cd-42c7-99c9-174751797c1e';
    $pane = new stdClass();
    $pane->pid = 'new-005c03e9-484f-4be2-8986-1dec0bc5149d';
    $pane->panel = 'main_content';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-footer-menu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'background' => '#ccc',
        'image' => '',
        'image_style' => '',
        'class' => '',
      ),
      'style' => 'fullwidth',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '005c03e9-484f-4be2-8986-1dec0bc5149d';
    $display->content['new-005c03e9-484f-4be2-8986-1dec0bc5149d'] = $pane;
    $display->panels['main_content'][4] = 'new-005c03e9-484f-4be2-8986-1dec0bc5149d';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['site_template__frontpage'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'site_template__panel_context_ac318864-04d3-48ce-a5b3-e9bf92b403dd';
  $handler->task = 'site_template';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Main site template',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'front',
          'settings' => NULL,
          'not' => TRUE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'main';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'main_content' => NULL,
    ),
    'main_content' => array(
      'style' => '-1',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'f579e947-c31c-41ba-ac88-c81b17d42226';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-b2d947de-1b80-4e6a-a7fc-98a9bfcee556';
    $pane->panel = 'main_content';
    $pane->type = 'block';
    $pane->subtype = 'system-main-menu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'background' => '#002736',
        'image' => '',
        'image_style' => '',
        'class' => '',
      ),
      'style' => 'fullwidth',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'b2d947de-1b80-4e6a-a7fc-98a9bfcee556';
    $display->content['new-b2d947de-1b80-4e6a-a7fc-98a9bfcee556'] = $pane;
    $display->panels['main_content'][0] = 'new-b2d947de-1b80-4e6a-a7fc-98a9bfcee556';
    $pane = new stdClass();
    $pane->pid = 'new-44346422-ce37-4257-944a-9ff17a992a79';
    $pane->panel = 'main_content';
    $pane->type = 'page_tabs';
    $pane->subtype = 'page_tabs';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'type' => 'both',
      'id' => 'tabs',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'background' => '#fff',
        'image' => '',
        'image_style' => '',
        'class' => '',
      ),
      'style' => 'fullwidth',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '44346422-ce37-4257-944a-9ff17a992a79';
    $display->content['new-44346422-ce37-4257-944a-9ff17a992a79'] = $pane;
    $display->panels['main_content'][1] = 'new-44346422-ce37-4257-944a-9ff17a992a79';
    $pane = new stdClass();
    $pane->pid = 'new-affa3d17-66cc-45fe-a728-d499d4665e3d';
    $pane->panel = 'main_content';
    $pane->type = 'page_messages';
    $pane->subtype = 'page_messages';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'background' => '#fff',
        'image' => '',
        'image_style' => '',
        'class' => '',
      ),
      'style' => 'fullwidth',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'affa3d17-66cc-45fe-a728-d499d4665e3d';
    $display->content['new-affa3d17-66cc-45fe-a728-d499d4665e3d'] = $pane;
    $display->panels['main_content'][2] = 'new-affa3d17-66cc-45fe-a728-d499d4665e3d';
    $pane = new stdClass();
    $pane->pid = 'new-58436051-6592-40e7-8841-641ee0ed6ebf';
    $pane->panel = 'main_content';
    $pane->type = 'page_title';
    $pane->subtype = 'page_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'markup' => 'h1',
      'class' => '',
      'id' => '',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'background' => '#fff',
        'image' => '',
        'image_style' => '',
        'class' => '',
      ),
      'style' => 'fullwidth',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '58436051-6592-40e7-8841-641ee0ed6ebf';
    $display->content['new-58436051-6592-40e7-8841-641ee0ed6ebf'] = $pane;
    $display->panels['main_content'][3] = 'new-58436051-6592-40e7-8841-641ee0ed6ebf';
    $pane = new stdClass();
    $pane->pid = 'new-3dac6415-da1c-41be-8220-572ef38e557c';
    $pane->panel = 'main_content';
    $pane->type = 'page_breadcrumb';
    $pane->subtype = 'page_breadcrumb';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'background' => '#FFF',
        'image' => '',
        'image_style' => '',
        'class' => '',
      ),
      'style' => 'fullwidth',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '3dac6415-da1c-41be-8220-572ef38e557c';
    $display->content['new-3dac6415-da1c-41be-8220-572ef38e557c'] = $pane;
    $display->panels['main_content'][4] = 'new-3dac6415-da1c-41be-8220-572ef38e557c';
    $pane = new stdClass();
    $pane->pid = 'new-6c58d510-53f1-42ed-8a1e-fa58c6219e85';
    $pane->panel = 'main_content';
    $pane->type = 'page_content';
    $pane->subtype = 'page_content';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_page_content_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'background' => '#FFF',
        'image' => '',
        'image_style' => '',
        'class' => '',
      ),
      'style' => 'fullwidth',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '6c58d510-53f1-42ed-8a1e-fa58c6219e85';
    $display->content['new-6c58d510-53f1-42ed-8a1e-fa58c6219e85'] = $pane;
    $display->panels['main_content'][5] = 'new-6c58d510-53f1-42ed-8a1e-fa58c6219e85';
    $pane = new stdClass();
    $pane->pid = 'new-a4e79ffe-18cd-42c7-99c9-174751797c1e';
    $pane->panel = 'main_content';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '',
      'format' => 'filtered_html',
      'substitute' => TRUE,
      'name' => 'callbackforn',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'background' => '#000',
        'image' => '',
        'image_style' => '',
        'class' => '',
      ),
      'style' => 'fullwidth',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = 'a4e79ffe-18cd-42c7-99c9-174751797c1e';
    $display->content['new-a4e79ffe-18cd-42c7-99c9-174751797c1e'] = $pane;
    $display->panels['main_content'][6] = 'new-a4e79ffe-18cd-42c7-99c9-174751797c1e';
    $pane = new stdClass();
    $pane->pid = 'new-005c03e9-484f-4be2-8986-1dec0bc5149d';
    $pane->panel = 'main_content';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-footer-menu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'background' => '#ccc',
        'image' => '',
        'image_style' => '',
        'class' => '',
      ),
      'style' => 'fullwidth',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 7;
    $pane->locks = array();
    $pane->uuid = '005c03e9-484f-4be2-8986-1dec0bc5149d';
    $display->content['new-005c03e9-484f-4be2-8986-1dec0bc5149d'] = $pane;
    $display->panels['main_content'][7] = 'new-005c03e9-484f-4be2-8986-1dec0bc5149d';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = 'new-6c58d510-53f1-42ed-8a1e-fa58c6219e85';
  $handler->conf['display'] = $display;
  $export['site_template__panel_context_ac318864-04d3-48ce-a5b3-e9bf92b403dd'] = $handler;

  return $export;
}
