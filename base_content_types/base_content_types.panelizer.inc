<?php
/**
 * @file
 * base_content_types.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function base_content_types_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:article:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'article';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'ipe';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'page_manager';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
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
  $display->title = '%node:title';
  $display->uuid = '11f28427-ebd1-43ea-95dc-5de6cc5f91e8';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-851d7ca4-6d56-44bc-9133-329caeee3f57';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_article_text';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'field_multiple_limit' => -1,
        'field_multiple_limit_offset' => 0,
      ),
      'context' => 'panelizer',
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
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
    $pane->uuid = '851d7ca4-6d56-44bc-9133-329caeee3f57';
    $display->content['new-851d7ca4-6d56-44bc-9133-329caeee3f57'] = $pane;
    $display->panels['middle'][0] = 'new-851d7ca4-6d56-44bc-9133-329caeee3f57';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:article:default'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:news:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'news';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'ipe';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'page_manager';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = 'efff33e5-d643-4cb4-9350-d423d01b57e9';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-20f9f47d-4a75-49aa-aa29-e340629639fc';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_news_text';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
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
    $pane->uuid = '20f9f47d-4a75-49aa-aa29-e340629639fc';
    $display->content['new-20f9f47d-4a75-49aa-aa29-e340629639fc'] = $pane;
    $display->panels['middle'][0] = 'new-20f9f47d-4a75-49aa-aa29-e340629639fc';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:news:default'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:page:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'page';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'ipe';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'page_manager';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
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
  $display->title = '%node:title';
  $display->uuid = '0330ea64-948f-4801-b637-3db4b33fb667';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-9f006677-ab6e-4d7f-9dec-48c411bd74dd';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_page_text';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'field_multiple_limit' => -1,
        'field_multiple_limit_offset' => 0,
      ),
      'context' => 'panelizer',
    );
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
    $pane->uuid = '9f006677-ab6e-4d7f-9dec-48c411bd74dd';
    $display->content['new-9f006677-ab6e-4d7f-9dec-48c411bd74dd'] = $pane;
    $display->panels['middle'][0] = 'new-9f006677-ab6e-4d7f-9dec-48c411bd74dd';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-9f006677-ab6e-4d7f-9dec-48c411bd74dd';
  $panelizer->display = $display;
  $export['node:page:default'] = $panelizer;

  return $export;
}
