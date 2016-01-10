<?php
/**
 * @file
 * base_settings.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function base_settings_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'site_template__panel_context_11d2d1fb-08b9-4df5-8964-28d8055773fa';
  $handler->task = 'site_template';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Main layout',
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
  $display->layout = 'main';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
      'logo' => NULL,
      'phones' => NULL,
      'address' => NULL,
      'menu' => NULL,
      'main_content' => NULL,
      'footer' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'dcddadca-3614-4d40-ba4f-e520ccbca439';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-24498a88-e81d-460e-9931-bfd578bbbb50';
    $pane->panel = 'address';
    $pane->type = 'sasta_sitepane_address';
    $pane->subtype = 'sasta_sitepane_address';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'show' => 'list',
    );
    $pane->cache = array();
    $pane->style = array(
      'style' => 'fullwidth',
      'settings' => array(
        'style' => '',
        'advanced' => array(
          'background' => '',
          'classes' => '',
          'padding_top' => '',
          'padding_bottom' => '',
        ),
      ),
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '24498a88-e81d-460e-9931-bfd578bbbb50';
    $display->content['new-24498a88-e81d-460e-9931-bfd578bbbb50'] = $pane;
    $display->panels['address'][0] = 'new-24498a88-e81d-460e-9931-bfd578bbbb50';
    $pane = new stdClass();
    $pane->pid = 'new-ef788053-3374-4d2d-8f0f-31e0e7d3680d';
    $pane->panel = 'logo';
    $pane->type = 'page_logo';
    $pane->subtype = 'page_logo';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'style' => 'fullwidth',
      'settings' => array(
        'style' => '',
        'advanced' => array(
          'background' => '',
          'classes' => '',
          'padding_top' => '',
          'padding_bottom' => '',
        ),
      ),
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'ef788053-3374-4d2d-8f0f-31e0e7d3680d';
    $display->content['new-ef788053-3374-4d2d-8f0f-31e0e7d3680d'] = $pane;
    $display->panels['logo'][0] = 'new-ef788053-3374-4d2d-8f0f-31e0e7d3680d';
    $pane = new stdClass();
    $pane->pid = 'new-1948dbc8-f616-4aef-843c-1d4d46a321c2';
    $pane->panel = 'main_content';
    $pane->type = 'page_title';
    $pane->subtype = 'page_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'markup' => 'h1',
      'class' => '',
      'id' => '',
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'style' => 'fullwidth',
      'settings' => array(
        'style' => '',
        'advanced' => array(
          'background' => '',
          'classes' => '',
          'padding_top' => '',
          'padding_bottom' => '',
        ),
      ),
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '1948dbc8-f616-4aef-843c-1d4d46a321c2';
    $display->content['new-1948dbc8-f616-4aef-843c-1d4d46a321c2'] = $pane;
    $display->panels['main_content'][0] = 'new-1948dbc8-f616-4aef-843c-1d4d46a321c2';
    $pane = new stdClass();
    $pane->pid = 'new-96d9e05f-5806-4dde-ad70-36186ebccd42';
    $pane->panel = 'main_content';
    $pane->type = 'page_content';
    $pane->subtype = 'page_content';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_page_content_1',
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'style' => 'fullwidth',
      'settings' => array(
        'style' => '',
        'advanced' => array(
          'background' => '',
          'classes' => '',
          'padding_top' => '',
          'padding_bottom' => '',
        ),
      ),
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '96d9e05f-5806-4dde-ad70-36186ebccd42';
    $display->content['new-96d9e05f-5806-4dde-ad70-36186ebccd42'] = $pane;
    $display->panels['main_content'][1] = 'new-96d9e05f-5806-4dde-ad70-36186ebccd42';
    $pane = new stdClass();
    $pane->pid = 'new-df361557-2ed7-4b8d-b6cc-02e962b030f0';
    $pane->panel = 'menu';
    $pane->type = 'block';
    $pane->subtype = 'system-main-menu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'style' => 'fullwidth',
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'df361557-2ed7-4b8d-b6cc-02e962b030f0';
    $display->content['new-df361557-2ed7-4b8d-b6cc-02e962b030f0'] = $pane;
    $display->panels['menu'][0] = 'new-df361557-2ed7-4b8d-b6cc-02e962b030f0';
    $pane = new stdClass();
    $pane->pid = 'new-1db41806-df4d-4e85-a49d-134dba11b935';
    $pane->panel = 'phones';
    $pane->type = 'sasta_sitepane_phones';
    $pane->subtype = 'sasta_sitepane_phones';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'show' => 'list',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'style' => 'fullwidth',
      'settings' => array(
        'style' => '',
        'advanced' => array(
          'background' => '',
          'classes' => '',
          'padding_top' => '',
          'padding_bottom' => '',
        ),
      ),
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '1db41806-df4d-4e85-a49d-134dba11b935';
    $display->content['new-1db41806-df4d-4e85-a49d-134dba11b935'] = $pane;
    $display->panels['phones'][0] = 'new-1db41806-df4d-4e85-a49d-134dba11b935';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-96d9e05f-5806-4dde-ad70-36186ebccd42';
  $handler->conf['display'] = $display;
  $export['site_template__panel_context_11d2d1fb-08b9-4df5-8964-28d8055773fa'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function base_settings_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'front';
  $page->task = 'page';
  $page->admin_title = 'Front';
  $page->admin_description = '';
  $page->path = 'front';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_front__panel';
  $handler->task = 'page';
  $handler->subtask = 'front';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '4a6d1c5a-da81-4448-82a4-76ce137e4299';
  $display->content = array();
  $display->panels = array();
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['front'] = $page;

  return $pages;

}
