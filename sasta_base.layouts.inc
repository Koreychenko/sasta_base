<?php
/**
 * @file
 * sasta_base.layouts.inc
 */

/**
 * Implements hook_default_panels_layout().
 */
function sasta_base_default_panels_layout() {
  $export = array();

  $layout = new stdClass();
  $layout->disabled = FALSE; /* Edit this to true to make a default layout disabled initially */
  $layout->api_version = 1;
  $layout->name = '2columns';
  $layout->admin_title = '2columns';
  $layout->admin_description = '';
  $layout->category = '';
  $layout->plugin = 'bootstrap';
  $layout->settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'container',
        'contains' => 'row',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'row',
        'children' => array(
          0 => 1,
        ),
        'parent' => 'canvas',
      ),
      1 => array(
        'type' => 'column',
        'parent' => 'main',
        'children' => array(
          0 => 2,
        ),
        'wrapper' => 'div',
        'element_id' => '',
        'class' => '',
        'contains' => 'row',
      ),
      2 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 3,
          1 => 4,
        ),
        'parent' => '1',
        'wrapper' => 'div',
        'element_id' => '',
        'class' => '',
      ),
      3 => array(
        'type' => 'column',
        'parent' => '2',
        'children' => array(
          0 => 'left_region',
        ),
        'wrapper' => 'div',
        'element_id' => '',
        'class' => 'fixed-first-sidebar',
        'contains' => 'region',
        'bootstrap_class' => array(
          'xs' => 'col-xs-12',
          'sm' => 'col-sm-6',
          'md' => 'col-md-3',
          'lg' => 'col-lg-3',
        ),
      ),
      4 => array(
        'type' => 'column',
        'parent' => '2',
        'children' => array(
          0 => 'right_region',
        ),
        'wrapper' => 'div',
        'element_id' => '',
        'class' => '',
        'contains' => 'region',
        'bootstrap_class' => array(
          'sm' => 'col-sm-6',
          'md' => 'col-md-9',
          'lg' => 'col-lg-9',
        ),
      ),
      'left_region' => array(
        'type' => 'region',
        'title' => 'left-region',
        'parent' => '3',
        'wrapper' => 'div',
        'element_id' => '',
        'class' => '',
        'container_class_add' => 0,
        'container_full_class_add' => 0,
      ),
      'right_region' => array(
        'type' => 'region',
        'title' => 'right-region',
        'parent' => '4',
        'wrapper' => 'div',
        'element_id' => '',
        'class' => '',
        'container_class_add' => 0,
        'container_full_class_add' => 0,
      ),
    ),
  );
  $export['2columns'] = $layout;

  $layout = new stdClass();
  $layout->disabled = FALSE; /* Edit this to true to make a default layout disabled initially */
  $layout->api_version = 1;
  $layout->name = 'front_layout';
  $layout->admin_title = '';
  $layout->admin_description = '';
  $layout->category = '';
  $layout->plugin = 'bootstrap';
  $layout->settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'container',
        'contains' => 'row',
        'children' => array(
          0 => 'main',
          1 => 1,
          2 => 6,
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'row',
        'children' => array(
          0 => 'main-column',
        ),
        'parent' => 'canvas',
      ),
      'main-column' => array(
        'type' => 'column',
        'contains' => 'region',
        'bootstrap_class' => array(
          'xs' => 'col-xs-12',
          'sm' => 'col-sm-12',
          'md' => 'col-md-12',
          'lg' => 'col-lg-12',
        ),
        'children' => array(
          0 => 'center',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center',
        'parent' => 'main-column',
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 2,
        ),
        'parent' => 'canvas',
        'wrapper' => 'div',
        'element_id' => '',
        'class' => '',
      ),
      2 => array(
        'type' => 'column',
        'parent' => '1',
        'children' => array(
          0 => 3,
        ),
        'wrapper' => 'div',
        'element_id' => '',
        'class' => '',
        'contains' => 'row',
      ),
      3 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 4,
          1 => 5,
        ),
        'parent' => '2',
        'wrapper' => 'div',
        'element_id' => '',
        'class' => '',
      ),
      4 => array(
        'type' => 'column',
        'parent' => '3',
        'children' => array(
          0 => 'left_middle',
        ),
        'wrapper' => 'div',
        'element_id' => '',
        'class' => '',
        'contains' => 'region',
        'bootstrap_class' => array(
          'xs' => 'col-xs-12',
          'sm' => 'col-sm-12',
          'md' => 'col-md-3',
          'lg' => 'col-lg-3',
        ),
      ),
      5 => array(
        'type' => 'column',
        'parent' => '3',
        'children' => array(
          0 => 'right_middle',
        ),
        'wrapper' => 'div',
        'element_id' => '',
        'class' => '',
        'contains' => 'region',
        'bootstrap_class' => array(
          'xs' => 'col-xs-12',
          'sm' => 'col-sm-12',
          'md' => 'col-md-9',
          'lg' => 'col-lg-9',
        ),
      ),
      6 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 7,
        ),
        'parent' => 'canvas',
        'wrapper' => 'div',
        'element_id' => '',
        'class' => '',
      ),
      7 => array(
        'type' => 'column',
        'parent' => '6',
        'children' => array(
          0 => 8,
        ),
        'wrapper' => 'div',
        'element_id' => '',
        'class' => '',
        'contains' => 'row',
      ),
      8 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 9,
          1 => 10,
        ),
        'parent' => '7',
        'wrapper' => 'div',
        'element_id' => '',
        'class' => '',
      ),
      9 => array(
        'type' => 'column',
        'parent' => '8',
        'children' => array(
          0 => 'left_bottom',
        ),
        'wrapper' => 'div',
        'element_id' => '',
        'class' => '',
        'contains' => 'region',
        'bootstrap_class' => array(
          'xs' => 'col-xs-12',
          'sm' => 'col-sm-12',
          'md' => 'col-md-5',
          'lg' => 'col-lg-5',
        ),
      ),
      10 => array(
        'type' => 'column',
        'parent' => '8',
        'children' => array(
          0 => 'right_bottom',
        ),
        'wrapper' => 'div',
        'element_id' => '',
        'class' => '',
        'contains' => 'region',
        'bootstrap_class' => array(
          'xs' => 'col-xs-12',
          'sm' => 'col-sm-12',
          'md' => 'col-md-7',
          'lg' => 'col-lg-7',
        ),
      ),
      'left_middle' => array(
        'type' => 'region',
        'title' => 'left-middle',
        'parent' => '4',
        'wrapper' => 'div',
        'element_id' => '',
        'class' => '',
        'container_class_add' => 0,
        'container_full_class_add' => 0,
      ),
      'right_middle' => array(
        'type' => 'region',
        'title' => 'right-middle',
        'parent' => '5',
        'wrapper' => 'div',
        'element_id' => '',
        'class' => '',
        'container_class_add' => 0,
        'container_full_class_add' => 0,
      ),
      'left_bottom' => array(
        'type' => 'region',
        'title' => 'left-bottom',
        'parent' => '9',
        'wrapper' => 'div',
        'element_id' => '',
        'class' => '',
        'container_class_add' => 0,
        'container_full_class_add' => 0,
      ),
      'right_bottom' => array(
        'type' => 'region',
        'title' => 'right-bottom',
        'parent' => '10',
        'wrapper' => 'div',
        'element_id' => '',
        'class' => '',
        'container_class_add' => 0,
        'container_full_class_add' => 0,
      ),
    ),
  );
  $export['front_layout'] = $layout;

  return $export;
}
