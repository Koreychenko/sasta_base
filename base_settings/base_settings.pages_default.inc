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
  $display->uuid = 'dcddadca-3614-4d40-ba4f-e520ccbca439';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-1948dbc8-f616-4aef-843c-1d4d46a321c2';
    $pane->panel = 'middle';
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
    $display->panels['middle'][0] = 'new-1948dbc8-f616-4aef-843c-1d4d46a321c2';
    $pane = new stdClass();
    $pane->pid = 'new-96d9e05f-5806-4dde-ad70-36186ebccd42';
    $pane->panel = 'middle';
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
    $display->panels['middle'][1] = 'new-96d9e05f-5806-4dde-ad70-36186ebccd42';
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
