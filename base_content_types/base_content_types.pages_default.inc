<?php
/**
 * @file
 * base_content_types.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function base_content_types_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'articles';
  $page->task = 'page';
  $page->admin_title = 'Articles';
  $page->admin_description = '';
  $page->path = 'articles';
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
  $handler->name = 'page_articles__panel';
  $handler->task = 'page';
  $handler->subtask = 'articles';
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
  $display->layout = 'pzlmain';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Статьи';
  $display->uuid = '3b1b59aa-7bbf-48cf-8af6-e82b95630657';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-086f6121-3eb8-4855-951c-d1495285e77c';
    $pane->panel = 'main_content';
    $pane->type = 'views_panes';
    $pane->subtype = 'articles-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'style' => 'fullwidth',
      'settings' => array(
        'row_type' => 'container',
        'paddings' => array(
          'padding_top' => '',
          'padding_bottom' => '',
          'padding_left' => '',
          'padding_right' => '',
        ),
        'height' => '',
        'colors' => array(
          'text_color' => '',
          'background_color' => '',
          'background_image' => 0,
          'background_repeat' => 'no-repeat',
          'background_position' => 'top-center',
          'background_stretch' => 0,
          'background_parallax' => 0,
        ),
        'header_position' => 'left',
        'class' => '',
        'merge_background' => 0,
      ),
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '086f6121-3eb8-4855-951c-d1495285e77c';
    $display->content['new-086f6121-3eb8-4855-951c-d1495285e77c'] = $pane;
    $display->panels['main_content'][0] = 'new-086f6121-3eb8-4855-951c-d1495285e77c';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-086f6121-3eb8-4855-951c-d1495285e77c';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['articles'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'news';
  $page->task = 'page';
  $page->admin_title = 'News';
  $page->admin_description = '';
  $page->path = 'news';
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
  $handler->name = 'page_news__panel';
  $handler->task = 'page';
  $handler->subtask = 'news';
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
  $display->layout = 'pzlmain';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Новости';
  $display->uuid = '3c1d228f-4abb-4a91-a5b4-c12fe0d1486a';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-bb0c2316-5cd2-48bc-a8db-f47df1e8334b';
    $pane->panel = 'main_content';
    $pane->type = 'views_panes';
    $pane->subtype = 'news-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'style' => 'fullwidth',
      'settings' => array(
        'row_type' => 'container',
        'paddings' => array(
          'padding_top' => '',
          'padding_bottom' => '',
          'padding_left' => '',
          'padding_right' => '',
        ),
        'height' => '',
        'colors' => array(
          'text_color' => '',
          'background_color' => '',
          'background_image' => 0,
          'background_repeat' => 'no-repeat',
          'background_position' => 'top-center',
          'background_stretch' => 0,
          'background_parallax' => 0,
        ),
        'header_position' => 'left',
        'class' => '',
        'merge_background' => 0,
      ),
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'bb0c2316-5cd2-48bc-a8db-f47df1e8334b';
    $display->content['new-bb0c2316-5cd2-48bc-a8db-f47df1e8334b'] = $pane;
    $display->panels['main_content'][0] = 'new-bb0c2316-5cd2-48bc-a8db-f47df1e8334b';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-bb0c2316-5cd2-48bc-a8db-f47df1e8334b';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['news'] = $page;

  return $pages;

}
