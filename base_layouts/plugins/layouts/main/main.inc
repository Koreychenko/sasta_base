<?php

// Plugin definition
$plugin = array(
  'title' => t('Main Site layout'),
  'category' => t('Puzzle'),
  'icon' => 'main.png',
  'theme' => 'panels_main',
  'css' => 'main.css',
  'regions' => array(
    'logo' => t('Logo'),
    'phones' => t('Phones'),
    'address' => t('Address'),
    'menu' => t('Top menu'),
    'main_content' => t('Content'),
    'footer' => t('Footer'),
  ),
);
