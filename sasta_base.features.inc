<?php
/**
 * @file
 * sasta_base.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function sasta_base_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "panelizer" && $api == "panelizer") {
    return array("version" => "1");
  }
  if ($module == "panels" && $api == "layouts") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function sasta_base_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_fe_nodequeue_export_fields().
 */
function sasta_base_fe_nodequeue_export_fields() {
  $nodequeues = array();

  // Exported nodequeues: frontpage_slider
  $nodequeues['frontpage_slider'] = array(
    'name' => 'frontpage_slider',
    'title' => 'Frontpage slider',
    'subqueue_title' => '',
    'size' => 0,
    'link' => 'Добавить в слайдер на главной',
    'link_remove' => 'Удалить из слайдера на главной',
    'owner' => 'nodequeue',
    'show_in_ui' => 1,
    'show_in_tab' => 1,
    'show_in_links' => 1,
    'reference' => 0,
    'reverse' => 0,
    'insert_at_front' => 0,
    'i18n' => 0,
    'subqueues' => 1,
    'types' => array(
      0 => 'slider',
    ),
    'roles' => array(),
    'count' => 0,
  );

  return $nodequeues;
}

/**
 * Implements hook_image_default_styles().
 */
function sasta_base_image_default_styles() {
  $styles = array();

  // Exported image style: news_block.
  $styles['news_block'] = array(
    'label' => 'news_block',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 130,
          'height' => 130,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: original.
  $styles['original'] = array(
    'label' => 'original',
    'effects' => array(),
  );

  // Exported image style: product_page_image.
  $styles['product_page_image'] = array(
    'label' => 'product_page_image',
    'effects' => array(
      6 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => '',
          'height' => 600,
          'upscale' => 1,
        ),
        'weight' => -10,
      ),
      5 => NULL,
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function sasta_base_node_info() {
  $items = array(
    'article' => array(
      'name' => t('Article'),
      'base' => 'node_content',
      'description' => t('Use <em>articles</em> for time-sensitive content like news, press releases or blog posts.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'news' => array(
      'name' => t('News'),
      'base' => 'node_content',
      'description' => t('Use <em>news</em> for short texts with dates.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'page' => array(
      'name' => t('page'),
      'base' => 'node_content',
      'description' => t('Use <em>page</em> for short texts with dates.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'product' => array(
      'name' => t('product'),
      'base' => 'node_content',
      'description' => t('Use <em>product</em> for short texts with dates.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'slider' => array(
      'name' => t('Slider'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
