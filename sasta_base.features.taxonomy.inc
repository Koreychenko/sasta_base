<?php
/**
 * @file
 * sasta_base.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function sasta_base_taxonomy_default_vocabularies() {
  return array(
    'content_type' => array(
      'name' => 'Тип материала',
      'machine_name' => 'content_type',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'sections' => array(
      'name' => 'Разделы',
      'machine_name' => 'sections',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
