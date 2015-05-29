<?php
/**
 * @file
 * sasta_base.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function sasta_base_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'catalog';
  $page->task = 'page';
  $page->admin_title = 'Страница каталога';
  $page->admin_description = '';
  $page->path = 'catalog';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Кухни',
    'name' => 'main-menu',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_catalog__panel_context_d7c0a5ed-74b8-4c01-8696-286a87d4840e';
  $handler->task = 'page';
  $handler->subtask = 'catalog';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Панель',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'bootstrap:2columns';
  $display->layout_settings = array();
  $display->panel_settings = array();
  $display->cache = array();
  $display->title = '';
  $display->uuid = '05df68a2-8701-4b1e-a52a-0c7d062c51b5';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-7b5810bf-f477-4bea-a269-b1e8637ef1ec';
    $pane->panel = 'left_region';
    $pane->type = 'block';
    $pane->subtype = 'block-5';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '<none>',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '7b5810bf-f477-4bea-a269-b1e8637ef1ec';
    $display->content['new-7b5810bf-f477-4bea-a269-b1e8637ef1ec'] = $pane;
    $display->panels['left_region'][0] = 'new-7b5810bf-f477-4bea-a269-b1e8637ef1ec';
    $pane = new stdClass();
    $pane->pid = 'new-a6e0055b-1871-45f4-91e8-c41e432b2016';
    $pane->panel = 'left_region';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-left-menu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'a6e0055b-1871-45f4-91e8-c41e432b2016';
    $display->content['new-a6e0055b-1871-45f4-91e8-c41e432b2016'] = $pane;
    $display->panels['left_region'][1] = 'new-a6e0055b-1871-45f4-91e8-c41e432b2016';
    $pane = new stdClass();
    $pane->pid = 'new-d0131f45-2a0a-40e1-994e-47e29ffa2122';
    $pane->panel = 'right_region';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<div class="pane-term-name"><h1>Каталог</h1></div>
',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'd0131f45-2a0a-40e1-994e-47e29ffa2122';
    $display->content['new-d0131f45-2a0a-40e1-994e-47e29ffa2122'] = $pane;
    $display->panels['right_region'][0] = 'new-d0131f45-2a0a-40e1-994e-47e29ffa2122';
    $pane = new stdClass();
    $pane->pid = 'new-0e280334-5570-4b95-970f-746196ea14be';
    $pane->panel = 'right_region';
    $pane->type = 'block';
    $pane->subtype = 'views-taxonomy_filter-block';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '0e280334-5570-4b95-970f-746196ea14be';
    $display->content['new-0e280334-5570-4b95-970f-746196ea14be'] = $pane;
    $display->panels['right_region'][1] = 'new-0e280334-5570-4b95-970f-746196ea14be';
    $pane = new stdClass();
    $pane->pid = 'new-89b933ac-377f-4379-85ee-af09af54710a';
    $pane->panel = 'right_region';
    $pane->type = 'views';
    $pane->subtype = 'catalog';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '12',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '3',
      'url' => '',
      'display' => 'default',
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '89b933ac-377f-4379-85ee-af09af54710a';
    $display->content['new-89b933ac-377f-4379-85ee-af09af54710a'] = $pane;
    $display->panels['right_region'][2] = 'new-89b933ac-377f-4379-85ee-af09af54710a';
    $pane = new stdClass();
    $pane->pid = 'new-4ac06106-5a28-45ae-a539-fecd07301b72';
    $pane->panel = 'right_region';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<div class="pane-term-description"><div class="pane-content"></div></div>',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '4ac06106-5a28-45ae-a539-fecd07301b72';
    $display->content['new-4ac06106-5a28-45ae-a539-fecd07301b72'] = $pane;
    $display->panels['right_region'][3] = 'new-4ac06106-5a28-45ae-a539-fecd07301b72';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['catalog'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'front_page';
  $page->task = 'page';
  $page->admin_title = 'Главная страница';
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
  $handler->name = 'page_front_page__panel_context_0effe09b-ffea-466d-be45-95a0b5f63dc0';
  $handler->task = 'page';
  $handler->subtask = 'front_page';
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
  );
  $display = new panels_display();
  $display->layout = 'bootstrap:front_layout';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => array(
        'column_type' => 'col-lg',
        'column_size' => '12',
        'offset_type' => 'col-lg-offset',
        'offset_size' => '0',
      ),
      'left' => array(
        'column_type' => 'col-sm',
        'column_size' => '5',
        'offset_type' => 'col-lg-offset',
        'offset_size' => '0',
      ),
      'middle' => NULL,
      'right' => array(
        'column_type' => 'col-sm',
        'column_size' => '7',
        'offset_type' => 'col-lg-offset',
        'offset_size' => '0',
      ),
      'bottom' => array(
        'column_type' => 'col-lg',
        'column_size' => '12',
        'offset_type' => 'col-lg-offset',
        'offset_size' => '0',
      ),
    ),
    'left' => array(
      'style' => 'bootstrap_region',
    ),
    'right' => array(
      'style' => 'bootstrap_region',
    ),
    'bottom' => array(
      'style' => 'bootstrap_region',
    ),
    'top' => array(
      'style' => 'bootstrap_region',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '82f05756-74ee-4542-84f1-481178bfbd21';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-d9a0d89f-f7df-4be9-b901-72bb77569daf';
    $pane->panel = 'left_bottom';
    $pane->type = 'block';
    $pane->subtype = 'views-news-block_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Новости',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'default',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'd9a0d89f-f7df-4be9-b901-72bb77569daf';
    $display->content['new-d9a0d89f-f7df-4be9-b901-72bb77569daf'] = $pane;
    $display->panels['left_bottom'][0] = 'new-d9a0d89f-f7df-4be9-b901-72bb77569daf';
    $pane = new stdClass();
    $pane->pid = 'new-fe77abaf-75f6-4530-9d32-9f8cc6b92831';
    $pane->panel = 'left_middle';
    $pane->type = 'block';
    $pane->subtype = 'block-5';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'fe77abaf-75f6-4530-9d32-9f8cc6b92831';
    $display->content['new-fe77abaf-75f6-4530-9d32-9f8cc6b92831'] = $pane;
    $display->panels['left_middle'][0] = 'new-fe77abaf-75f6-4530-9d32-9f8cc6b92831';
    $pane = new stdClass();
    $pane->pid = 'new-d43dd67c-b1bd-44f5-9d10-ab69d21b4d4a';
    $pane->panel = 'right_bottom';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<p><span class="green-bg inline-title">О компании</span></p>

<p>Фабрика "Альпина" производит различную мебель: кухонные столы, обеденные столы, стулья, мягкую и кухонную мебель. "Альпина", основанная в 2002 году в Тюмени, на сегодняшний день является успешно развивающимся предприятием. Подробнее познакомиться с компанией</p>

<p><span class="inline-title red-bg">Мы делаем вам выгодное предложение</span></p>

<p>Фабрика "Альпина" производит различную мебель: кухонные столы, обеденные столы, стулья, мягкую и кухонную мебель. "Альпина", основанная в 2002 году в Тюмени, на сегодняшний день является успешно развивающимся предприятием. Подробнее познакомиться с компанией</p>

<div class="row">
<div class="col-md-6"><span class="green-bg inline-title">Гарантии</span><br />
Мы обязательно учтем все нюансы как для небольших, так и для просторных помещений. Мы обязательно учтем все нюансы как для небольших, так и для просторных помещений. Как и на все наши товары, примутся за их решение.</div>

<div class="col-md-6"><span class="green-bg inline-title">Стиль</span><br />
Мы обязательно учтем все нюансы как для небольших, так и для просторных помещений. Мы обязательно учтем все нюансы как для небольших, так и для просторных помещений. Как и на все наши товары, примутся за их решение.</div>
</div>
',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'd43dd67c-b1bd-44f5-9d10-ab69d21b4d4a';
    $display->content['new-d43dd67c-b1bd-44f5-9d10-ab69d21b4d4a'] = $pane;
    $display->panels['right_bottom'][0] = 'new-d43dd67c-b1bd-44f5-9d10-ab69d21b4d4a';
    $pane = new stdClass();
    $pane->pid = 'new-12a70073-9345-41db-a98c-ff5c02c6450b';
    $pane->panel = 'right_middle';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-front-menu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '12a70073-9345-41db-a98c-ff5c02c6450b';
    $display->content['new-12a70073-9345-41db-a98c-ff5c02c6450b'] = $pane;
    $display->panels['right_middle'][0] = 'new-12a70073-9345-41db-a98c-ff5c02c6450b';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['front_page'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'news_page';
  $page->task = 'page';
  $page->admin_title = 'Новости';
  $page->admin_description = '';
  $page->path = 'news';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Новости',
    'name' => 'main-menu',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_news_page__panel_context_0bd0af00-cef6-4c8c-a1a7-085031e17ec0';
  $handler->task = 'page';
  $handler->subtask = 'news_page';
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
  );
  $display = new panels_display();
  $display->layout = 'bootstrap:2columns';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => array(
        'column_type' => 'col-lg',
        'column_size' => '12',
        'offset_type' => 'col-lg-offset',
        'offset_size' => '0',
      ),
      'left' => array(
        'column_type' => 'col-lg',
        'column_size' => '4',
        'offset_type' => 'col-lg-offset',
        'offset_size' => '0',
      ),
      'right' => array(
        'column_type' => 'col-lg',
        'column_size' => '8',
        'offset_type' => 'col-lg-offset',
        'offset_size' => '0',
      ),
      'bottom' => array(
        'column_type' => 'col-lg',
        'column_size' => '12',
        'offset_type' => 'col-lg-offset',
        'offset_size' => '0',
      ),
    ),
    'top' => array(
      'style' => 'bootstrap_region',
    ),
    'left' => array(
      'style' => 'bootstrap_region',
    ),
    'right' => array(
      'style' => 'bootstrap_region',
    ),
    'bottom' => array(
      'style' => 'bootstrap_region',
    ),
  );
  $display->cache = array();
  $display->title = 'Новости';
  $display->uuid = '96ab12b2-d617-4d74-86ea-e600d3d1d8ac';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-a2257b63-760b-46c1-8ba9-b53e16e6b8a6';
    $pane->panel = 'left_region';
    $pane->type = 'block';
    $pane->subtype = 'block-5';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'a2257b63-760b-46c1-8ba9-b53e16e6b8a6';
    $display->content['new-a2257b63-760b-46c1-8ba9-b53e16e6b8a6'] = $pane;
    $display->panels['left_region'][0] = 'new-a2257b63-760b-46c1-8ba9-b53e16e6b8a6';
    $pane = new stdClass();
    $pane->pid = 'new-67354893-f278-4d30-be18-44664187d1ca';
    $pane->panel = 'left_region';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-left-menu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '67354893-f278-4d30-be18-44664187d1ca';
    $display->content['new-67354893-f278-4d30-be18-44664187d1ca'] = $pane;
    $display->panels['left_region'][1] = 'new-67354893-f278-4d30-be18-44664187d1ca';
    $pane = new stdClass();
    $pane->pid = 'new-b91ac138-7548-4148-953b-26e3c7642050';
    $pane->panel = 'right_region';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<h1>Новости</h1>
',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'b91ac138-7548-4148-953b-26e3c7642050';
    $display->content['new-b91ac138-7548-4148-953b-26e3c7642050'] = $pane;
    $display->panels['right_region'][0] = 'new-b91ac138-7548-4148-953b-26e3c7642050';
    $pane = new stdClass();
    $pane->pid = 'new-2b104227-5906-407b-900e-cc7df6863f28';
    $pane->panel = 'right_region';
    $pane->type = 'views';
    $pane->subtype = 'news';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '0',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block_3',
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '2b104227-5906-407b-900e-cc7df6863f28';
    $display->content['new-2b104227-5906-407b-900e-cc7df6863f28'] = $pane;
    $display->panels['right_region'][1] = 'new-2b104227-5906-407b-900e-cc7df6863f28';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['news_page'] = $page;

  return $pages;

}
