<?php
/**
 * @file
 * base_settings.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function base_settings_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access administration menu'.
  $permissions['access administration menu'] = array(
    'name' => 'access administration menu',
    'roles' => array(
      'Администратор' => 'Администратор',
      'Редактор' => 'Редактор',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'access administration pages'.
  $permissions['access administration pages'] = array(
    'name' => 'access administration pages',
    'roles' => array(
      'Администратор' => 'Администратор',
      'Редактор' => 'Редактор',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access all views'.
  $permissions['access all views'] = array(
    'name' => 'access all views',
    'roles' => array(
      'Администратор' => 'Администратор',
    ),
    'module' => 'views',
  );

  // Exported permission: 'access ckeditor link'.
  $permissions['access ckeditor link'] = array(
    'name' => 'access ckeditor link',
    'roles' => array(
      'Администратор' => 'Администратор',
    ),
    'module' => 'ckeditor_link',
  );

  // Exported permission: 'access comments'.
  $permissions['access comments'] = array(
    'name' => 'access comments',
    'roles' => array(
      'Администратор' => 'Администратор',
      'Редактор' => 'Редактор',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'access content'.
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'Администратор' => 'Администратор',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access content overview'.
  $permissions['access content overview'] = array(
    'name' => 'access content overview',
    'roles' => array(
      'Администратор' => 'Администратор',
      'Редактор' => 'Редактор',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access contextual links'.
  $permissions['access contextual links'] = array(
    'name' => 'access contextual links',
    'roles' => array(
      'Администратор' => 'Администратор',
      'Редактор' => 'Редактор',
    ),
    'module' => 'contextual',
  );

  // Exported permission: 'access devel information'.
  $permissions['access devel information'] = array(
    'name' => 'access devel information',
    'roles' => array(
      'Администратор' => 'Администратор',
    ),
    'module' => 'devel',
  );

  // Exported permission: 'access media browser'.
  $permissions['access media browser'] = array(
    'name' => 'access media browser',
    'roles' => array(
      'Администратор' => 'Администратор',
    ),
    'module' => 'media',
  );

  // Exported permission: 'access rules debug'.
  $permissions['access rules debug'] = array(
    'name' => 'access rules debug',
    'roles' => array(
      'Администратор' => 'Администратор',
    ),
    'module' => 'rules',
  );

  // Exported permission: 'access site in maintenance mode'.
  $permissions['access site in maintenance mode'] = array(
    'name' => 'access site in maintenance mode',
    'roles' => array(
      'Администратор' => 'Администратор',
      'Редактор' => 'Редактор',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access site reports'.
  $permissions['access site reports'] = array(
    'name' => 'access site reports',
    'roles' => array(
      'Администратор' => 'Администратор',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access user profiles'.
  $permissions['access user profiles'] = array(
    'name' => 'access user profiles',
    'roles' => array(
      'Администратор' => 'Администратор',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer CAPTCHA settings'.
  $permissions['administer CAPTCHA settings'] = array(
    'name' => 'administer CAPTCHA settings',
    'roles' => array(
      'Администратор' => 'Администратор',
    ),
    'module' => 'captcha',
  );

  // Exported permission: 'administer actions'.
  $permissions['administer actions'] = array(
    'name' => 'administer actions',
    'roles' => array(
      'Администратор' => 'Администратор',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer advanced pane settings'.
  $permissions['administer advanced pane settings'] = array(
    'name' => 'administer advanced pane settings',
    'roles' => array(
      'Администратор' => 'Администратор',
      'Редактор' => 'Редактор',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'administer blocks'.
  $permissions['administer blocks'] = array(
    'name' => 'administer blocks',
    'roles' => array(
      'Администратор' => 'Администратор',
    ),
    'module' => 'block',
  );

  // Exported permission: 'administer ckeditor'.
  $permissions['administer ckeditor'] = array(
    'name' => 'administer ckeditor',
    'roles' => array(
      'Администратор' => 'Администратор',
    ),
    'module' => 'ckeditor',
  );

  // Exported permission: 'administer ckeditor link'.
  $permissions['administer ckeditor link'] = array(
    'name' => 'administer ckeditor link',
    'roles' => array(
      'Администратор' => 'Администратор',
    ),
    'module' => 'ckeditor_link',
  );

  // Exported permission: 'administer comments'.
  $permissions['administer comments'] = array(
    'name' => 'administer comments',
    'roles' => array(
      'Администратор' => 'Администратор',
      'Редактор' => 'Редактор',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'administer content types'.
  $permissions['administer content types'] = array(
    'name' => 'administer content types',
    'roles' => array(
      'Администратор' => 'Администратор',
    ),
    'module' => 'node',
  );

  // Exported permission: 'administer custom content'.
  $permissions['administer custom content'] = array(
    'name' => 'administer custom content',
    'roles' => array(
      'Администратор' => 'Администратор',
    ),
    'module' => 'ctools_custom_content',
  );

  // Exported permission: 'administer features'.
  $permissions['administer features'] = array(
    'name' => 'administer features',
    'roles' => array(
      'Администратор' => 'Администратор',
    ),
    'module' => 'features',
  );

  // Exported permission: 'administer field collections'.
  $permissions['administer field collections'] = array(
    'name' => 'administer field collections',
    'roles' => array(
      'Администратор' => 'Администратор',
    ),
    'module' => 'field_collection',
  );

  // Exported permission: 'administer fieldable panels panes'.
  $permissions['administer fieldable panels panes'] = array(
    'name' => 'administer fieldable panels panes',
    'roles' => array(
      'Администратор' => 'Администратор',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'administer fieldgroups'.
  $permissions['administer fieldgroups'] = array(
    'name' => 'administer fieldgroups',
    'roles' => array(
      'Администратор' => 'Администратор',
    ),
    'module' => 'field_group',
  );

  // Exported permission: 'administer file types'.
  $permissions['administer file types'] = array(
    'name' => 'administer file types',
    'roles' => array(
      'Администратор' => 'Администратор',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'administer files'.
  $permissions['administer files'] = array(
    'name' => 'administer files',
    'roles' => array(
      'Администратор' => 'Администратор',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'administer filters'.
  $permissions['administer filters'] = array(
    'name' => 'administer filters',
    'roles' => array(
      'Администратор' => 'Администратор',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'administer image styles'.
  $permissions['administer image styles'] = array(
    'name' => 'administer image styles',
    'roles' => array(
      'Администратор' => 'Администратор',
    ),
    'module' => 'image',
  );

  // Exported permission: 'administer imce'.
  $permissions['administer imce'] = array(
    'name' => 'administer imce',
    'roles' => array(
      'Администратор' => 'Администратор',
    ),
    'module' => 'imce',
  );

  // Exported permission: 'administer languages'.
  $permissions['administer languages'] = array(
    'name' => 'administer languages',
    'roles' => array(
      'Администратор' => 'Администратор',
    ),
    'module' => 'locale',
  );

  // Exported permission: 'administer less'.
  $permissions['administer less'] = array(
    'name' => 'administer less',
    'roles' => array(
      'Администратор' => 'Администратор',
    ),
    'module' => 'less',
  );

  // Exported permission: 'administer mailsystem'.
  $permissions['administer mailsystem'] = array(
    'name' => 'administer mailsystem',
    'roles' => array(
      'Администратор' => 'Администратор',
    ),
    'module' => 'mailsystem',
  );

  // Exported permission: 'administer media browser'.
  $permissions['administer media browser'] = array(
    'name' => 'administer media browser',
    'roles' => array(
      'Администратор' => 'Администратор',
    ),
    'module' => 'media',
  );

  // Exported permission: 'administer menu'.
  $permissions['administer menu'] = array(
    'name' => 'administer menu',
    'roles' => array(
      'Администратор' => 'Администратор',
    ),
    'module' => 'menu',
  );

  // Exported permission: 'administer menu attributes'.
  $permissions['administer menu attributes'] = array(
    'name' => 'administer menu attributes',
    'roles' => array(
      'Администратор' => 'Администратор',
    ),
    'module' => 'menu_attributes',
  );

  // Exported permission: 'administer module filter'.
  $permissions['administer module filter'] = array(
    'name' => 'administer module filter',
    'roles' => array(
      'Администратор' => 'Администратор',
    ),
    'module' => 'module_filter',
  );

  // Exported permission: 'administer modules'.
  $permissions['administer modules'] = array(
    'name' => 'administer modules',
    'roles' => array(
      'Администратор' => 'Администратор',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer nodes'.
  $permissions['administer nodes'] = array(
    'name' => 'administer nodes',
    'roles' => array(
      'Администратор' => 'Администратор',
      'Редактор' => 'Редактор',
    ),
    'module' => 'node',
  );

  // Exported permission: 'administer page manager'.
  $permissions['administer page manager'] = array(
    'name' => 'administer page manager',
    'roles' => array(
      'Администратор' => 'Администратор',
    ),
    'module' => 'page_manager',
  );

  // Exported permission: 'administer pane access'.
  $permissions['administer pane access'] = array(
    'name' => 'administer pane access',
    'roles' => array(
      'Администратор' => 'Администратор',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'administer panelizer'.
  $permissions['administer panelizer'] = array(
    'name' => 'administer panelizer',
    'roles' => array(
      'Администратор' => 'Администратор',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node article content'.
  $permissions['administer panelizer node article content'] = array(
    'name' => 'administer panelizer node article content',
    'roles' => array(
      'Администратор' => 'Администратор',
      'Редактор' => 'Редактор',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node article context'.
  $permissions['administer panelizer node article context'] = array(
    'name' => 'administer panelizer node article context',
    'roles' => array(
      'Администратор' => 'Администратор',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node article defaults'.
  $permissions['administer panelizer node article defaults'] = array(
    'name' => 'administer panelizer node article defaults',
    'roles' => array(
      'Администратор' => 'Администратор',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node article layout'.
  $permissions['administer panelizer node article layout'] = array(
    'name' => 'administer panelizer node article layout',
    'roles' => array(
      'Администратор' => 'Администратор',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node article overview'.
  $permissions['administer panelizer node article overview'] = array(
    'name' => 'administer panelizer node article overview',
    'roles' => array(
      'Администратор' => 'Администратор',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node article settings'.
  $permissions['administer panelizer node article settings'] = array(
    'name' => 'administer panelizer node article settings',
    'roles' => array(
      'Администратор' => 'Администратор',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node news content'.
  $permissions['administer panelizer node news content'] = array(
    'name' => 'administer panelizer node news content',
    'roles' => array(
      'Администратор' => 'Администратор',
      'Редактор' => 'Редактор',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node news context'.
  $permissions['administer panelizer node news context'] = array(
    'name' => 'administer panelizer node news context',
    'roles' => array(
      'Администратор' => 'Администратор',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node news defaults'.
  $permissions['administer panelizer node news defaults'] = array(
    'name' => 'administer panelizer node news defaults',
    'roles' => array(
      'Администратор' => 'Администратор',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node news layout'.
  $permissions['administer panelizer node news layout'] = array(
    'name' => 'administer panelizer node news layout',
    'roles' => array(
      'Администратор' => 'Администратор',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node news overview'.
  $permissions['administer panelizer node news overview'] = array(
    'name' => 'administer panelizer node news overview',
    'roles' => array(
      'Администратор' => 'Администратор',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node news settings'.
  $permissions['administer panelizer node news settings'] = array(
    'name' => 'administer panelizer node news settings',
    'roles' => array(
      'Администратор' => 'Администратор',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node page content'.
  $permissions['administer panelizer node page content'] = array(
    'name' => 'administer panelizer node page content',
    'roles' => array(
      'Администратор' => 'Администратор',
      'Редактор' => 'Редактор',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node page context'.
  $permissions['administer panelizer node page context'] = array(
    'name' => 'administer panelizer node page context',
    'roles' => array(
      'Администратор' => 'Администратор',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node page defaults'.
  $permissions['administer panelizer node page defaults'] = array(
    'name' => 'administer panelizer node page defaults',
    'roles' => array(
      'Администратор' => 'Администратор',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node page layout'.
  $permissions['administer panelizer node page layout'] = array(
    'name' => 'administer panelizer node page layout',
    'roles' => array(
      'Администратор' => 'Администратор',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node page overview'.
  $permissions['administer panelizer node page overview'] = array(
    'name' => 'administer panelizer node page overview',
    'roles' => array(
      'Администратор' => 'Администратор',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node page settings'.
  $permissions['administer panelizer node page settings'] = array(
    'name' => 'administer panelizer node page settings',
    'roles' => array(
      'Администратор' => 'Администратор',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panels layouts'.
  $permissions['administer panels layouts'] = array(
    'name' => 'administer panels layouts',
    'roles' => array(
      'Администратор' => 'Администратор',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'administer panels styles'.
  $permissions['administer panels styles'] = array(
    'name' => 'administer panels styles',
    'roles' => array(
      'Администратор' => 'Администратор',
      'Редактор' => 'Редактор',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'administer path breadcrumbs'.
  $permissions['administer path breadcrumbs'] = array(
    'name' => 'administer path breadcrumbs',
    'roles' => array(
      'Администратор' => 'Администратор',
    ),
    'module' => 'path_breadcrumbs_ui',
  );

  // Exported permission: 'administer path metatags'.
  $permissions['administer path metatags'] = array(
    'name' => 'administer path metatags',
    'roles' => array(
      'Администратор' => 'Администратор',
    ),
    'module' => 'path_metatags_ui',
  );

  // Exported permission: 'administer pathauto'.
  $permissions['administer pathauto'] = array(
    'name' => 'administer pathauto',
    'roles' => array(
      'Администратор' => 'Администратор',
    ),
    'module' => 'pathauto',
  );

  // Exported permission: 'administer permissions'.
  $permissions['administer permissions'] = array(
    'name' => 'administer permissions',
    'roles' => array(
      'Администратор' => 'Администратор',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer rules'.
  $permissions['administer rules'] = array(
    'name' => 'administer rules',
    'roles' => array(
      'Администратор' => 'Администратор',
    ),
    'module' => 'rules',
  );

  // Exported permission: 'administer shortcuts'.
  $permissions['administer shortcuts'] = array(
    'name' => 'administer shortcuts',
    'roles' => array(
      'Администратор' => 'Администратор',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: 'administer simplemeta'.
  $permissions['administer simplemeta'] = array(
    'name' => 'administer simplemeta',
    'roles' => array(
      'Администратор' => 'Администратор',
    ),
    'module' => 'simplemeta',
  );

  // Exported permission: 'administer site configuration'.
  $permissions['administer site configuration'] = array(
    'name' => 'administer site configuration',
    'roles' => array(
      'Администратор' => 'Администратор',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer slick'.
  $permissions['administer slick'] = array(
    'name' => 'administer slick',
    'roles' => array(
      'Администратор' => 'Администратор',
    ),
    'module' => 'slick_ui',
  );

  // Exported permission: 'administer software updates'.
  $permissions['administer software updates'] = array(
    'name' => 'administer software updates',
    'roles' => array(
      'Администратор' => 'Администратор',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer styles'.
  $permissions['administer styles'] = array(
    'name' => 'administer styles',
    'roles' => array(
      'Администратор' => 'Администратор',
    ),
    'module' => 'sasta_panelst',
  );

  // Exported permission: 'administer taxonomy'.
  $permissions['administer taxonomy'] = array(
    'name' => 'administer taxonomy',
    'roles' => array(
      'Администратор' => 'Администратор',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'administer themes'.
  $permissions['administer themes'] = array(
    'name' => 'administer themes',
    'roles' => array(
      'Администратор' => 'Администратор',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer url aliases'.
  $permissions['administer url aliases'] = array(
    'name' => 'administer url aliases',
    'roles' => array(
      'Администратор' => 'Администратор',
    ),
    'module' => 'path',
  );

  // Exported permission: 'administer users'.
  $permissions['administer users'] = array(
    'name' => 'administer users',
    'roles' => array(
      'Администратор' => 'Администратор',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer views'.
  $permissions['administer views'] = array(
    'name' => 'administer views',
    'roles' => array(
      'Администратор' => 'Администратор',
    ),
    'module' => 'views',
  );

  // Exported permission: 'administer xmlsitemap'.
  $permissions['administer xmlsitemap'] = array(
    'name' => 'administer xmlsitemap',
    'roles' => array(
      'Администратор' => 'Администратор',
    ),
    'module' => 'xmlsitemap',
  );

  // Exported permission: 'block IP addresses'.
  $permissions['block IP addresses'] = array(
    'name' => 'block IP addresses',
    'roles' => array(
      'Администратор' => 'Администратор',
    ),
    'module' => 'system',
  );

  // Exported permission: 'bypass file access'.
  $permissions['bypass file access'] = array(
    'name' => 'bypass file access',
    'roles' => array(
      'Администратор' => 'Администратор',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'bypass node access'.
  $permissions['bypass node access'] = array(
    'name' => 'bypass node access',
    'roles' => array(
      'Администратор' => 'Администратор',
      'Редактор' => 'Редактор',
    ),
    'module' => 'node',
  );

  // Exported permission: 'bypass rules access'.
  $permissions['bypass rules access'] = array(
    'name' => 'bypass rules access',
    'roles' => array(
      'Администратор' => 'Администратор',
    ),
    'module' => 'rules',
  );

  // Exported permission: 'cancel account'.
  $permissions['cancel account'] = array(
    'name' => 'cancel account',
    'roles' => array(
      'Администратор' => 'Администратор',
    ),
    'module' => 'user',
  );

  // Exported permission: 'change layouts in place editing'.
  $permissions['change layouts in place editing'] = array(
    'name' => 'change layouts in place editing',
    'roles' => array(
      'Администратор' => 'Администратор',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'change own username'.
  $permissions['change own username'] = array(
    'name' => 'change own username',
    'roles' => array(
      'Администратор' => 'Администратор',
    ),
    'module' => 'user',
  );

  // Exported permission: 'choose htmlmail_plaintext'.
  $permissions['choose htmlmail_plaintext'] = array(
    'name' => 'choose htmlmail_plaintext',
    'roles' => array(
      'Администратор' => 'Администратор',
    ),
    'module' => 'htmlmail',
  );

  // Exported permission: 'clone node'.
  $permissions['clone node'] = array(
    'name' => 'clone node',
    'roles' => array(
      'Администратор' => 'Администратор',
      'Редактор' => 'Редактор',
    ),
    'module' => 'clone',
  );

  // Exported permission: 'clone own nodes'.
  $permissions['clone own nodes'] = array(
    'name' => 'clone own nodes',
    'roles' => array(
      'Администратор' => 'Администратор',
    ),
    'module' => 'clone',
  );

  // Exported permission: 'create article content'.
  $permissions['create article content'] = array(
    'name' => 'create article content',
    'roles' => array(
      'Администратор' => 'Администратор',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create fieldable accordion'.
  $permissions['create fieldable accordion'] = array(
    'name' => 'create fieldable accordion',
    'roles' => array(
      'Администратор' => 'Администратор',
      'Редактор' => 'Редактор',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'create fieldable carousel'.
  $permissions['create fieldable carousel'] = array(
    'name' => 'create fieldable carousel',
    'roles' => array(
      'Администратор' => 'Администратор',
      'Редактор' => 'Редактор',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'create fieldable elements_tabs'.
  $permissions['create fieldable elements_tabs'] = array(
    'name' => 'create fieldable elements_tabs',
    'roles' => array(
      'Администратор' => 'Администратор',
      'Редактор' => 'Редактор',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'create fieldable fieldable_panels_pane'.
  $permissions['create fieldable fieldable_panels_pane'] = array(
    'name' => 'create fieldable fieldable_panels_pane',
    'roles' => array(
      'Администратор' => 'Администратор',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'create fieldable fullwidth_image'.
  $permissions['create fieldable fullwidth_image'] = array(
    'name' => 'create fieldable fullwidth_image',
    'roles' => array(
      'Администратор' => 'Администратор',
      'Редактор' => 'Редактор',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'create fieldable gallery_6_images'.
  $permissions['create fieldable gallery_6_images'] = array(
    'name' => 'create fieldable gallery_6_images',
    'roles' => array(
      'Администратор' => 'Администратор',
      'Редактор' => 'Редактор',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'create fieldable paragraph'.
  $permissions['create fieldable paragraph'] = array(
    'name' => 'create fieldable paragraph',
    'roles' => array(
      'Администратор' => 'Администратор',
      'Редактор' => 'Редактор',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'create fieldable slider'.
  $permissions['create fieldable slider'] = array(
    'name' => 'create fieldable slider',
    'roles' => array(
      'Администратор' => 'Администратор',
      'Редактор' => 'Редактор',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'create files'.
  $permissions['create files'] = array(
    'name' => 'create files',
    'roles' => array(
      'Администратор' => 'Администратор',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'create news content'.
  $permissions['create news content'] = array(
    'name' => 'create news content',
    'roles' => array(
      'Администратор' => 'Администратор',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create page content'.
  $permissions['create page content'] = array(
    'name' => 'create page content',
    'roles' => array(
      'Администратор' => 'Администратор',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create url aliases'.
  $permissions['create url aliases'] = array(
    'name' => 'create url aliases',
    'roles' => array(
      'Администратор' => 'Администратор',
    ),
    'module' => 'path',
  );

  // Exported permission: 'customize ckeditor'.
  $permissions['customize ckeditor'] = array(
    'name' => 'customize ckeditor',
    'roles' => array(
      'Администратор' => 'Администратор',
    ),
    'module' => 'ckeditor',
  );

  // Exported permission: 'customize shortcut links'.
  $permissions['customize shortcut links'] = array(
    'name' => 'customize shortcut links',
    'roles' => array(
      'Администратор' => 'Администратор',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: 'delete any article content'.
  $permissions['delete any article content'] = array(
    'name' => 'delete any article content',
    'roles' => array(
      'Администратор' => 'Администратор',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any audio files'.
  $permissions['delete any audio files'] = array(
    'name' => 'delete any audio files',
    'roles' => array(
      'Администратор' => 'Администратор',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete any document files'.
  $permissions['delete any document files'] = array(
    'name' => 'delete any document files',
    'roles' => array(
      'Администратор' => 'Администратор',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete any image files'.
  $permissions['delete any image files'] = array(
    'name' => 'delete any image files',
    'roles' => array(
      'Администратор' => 'Администратор',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete any news content'.
  $permissions['delete any news content'] = array(
    'name' => 'delete any news content',
    'roles' => array(
      'Администратор' => 'Администратор',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any page content'.
  $permissions['delete any page content'] = array(
    'name' => 'delete any page content',
    'roles' => array(
      'Администратор' => 'Администратор',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any video files'.
  $permissions['delete any video files'] = array(
    'name' => 'delete any video files',
    'roles' => array(
      'Администратор' => 'Администратор',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete fieldable accordion'.
  $permissions['delete fieldable accordion'] = array(
    'name' => 'delete fieldable accordion',
    'roles' => array(
      'Администратор' => 'Администратор',
      'Редактор' => 'Редактор',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'delete fieldable carousel'.
  $permissions['delete fieldable carousel'] = array(
    'name' => 'delete fieldable carousel',
    'roles' => array(
      'Администратор' => 'Администратор',
      'Редактор' => 'Редактор',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'delete fieldable elements_tabs'.
  $permissions['delete fieldable elements_tabs'] = array(
    'name' => 'delete fieldable elements_tabs',
    'roles' => array(
      'Администратор' => 'Администратор',
      'Редактор' => 'Редактор',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'delete fieldable fieldable_panels_pane'.
  $permissions['delete fieldable fieldable_panels_pane'] = array(
    'name' => 'delete fieldable fieldable_panels_pane',
    'roles' => array(
      'Администратор' => 'Администратор',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'delete fieldable fullwidth_image'.
  $permissions['delete fieldable fullwidth_image'] = array(
    'name' => 'delete fieldable fullwidth_image',
    'roles' => array(
      'Администратор' => 'Администратор',
      'Редактор' => 'Редактор',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'delete fieldable gallery_6_images'.
  $permissions['delete fieldable gallery_6_images'] = array(
    'name' => 'delete fieldable gallery_6_images',
    'roles' => array(
      'Администратор' => 'Администратор',
      'Редактор' => 'Редактор',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'delete fieldable paragraph'.
  $permissions['delete fieldable paragraph'] = array(
    'name' => 'delete fieldable paragraph',
    'roles' => array(
      'Администратор' => 'Администратор',
      'Редактор' => 'Редактор',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'delete fieldable slider'.
  $permissions['delete fieldable slider'] = array(
    'name' => 'delete fieldable slider',
    'roles' => array(
      'Администратор' => 'Администратор',
      'Редактор' => 'Редактор',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'delete own article content'.
  $permissions['delete own article content'] = array(
    'name' => 'delete own article content',
    'roles' => array(
      'Администратор' => 'Администратор',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own audio files'.
  $permissions['delete own audio files'] = array(
    'name' => 'delete own audio files',
    'roles' => array(
      'Администратор' => 'Администратор',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete own document files'.
  $permissions['delete own document files'] = array(
    'name' => 'delete own document files',
    'roles' => array(
      'Администратор' => 'Администратор',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete own image files'.
  $permissions['delete own image files'] = array(
    'name' => 'delete own image files',
    'roles' => array(
      'Администратор' => 'Администратор',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete own news content'.
  $permissions['delete own news content'] = array(
    'name' => 'delete own news content',
    'roles' => array(
      'Администратор' => 'Администратор',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own page content'.
  $permissions['delete own page content'] = array(
    'name' => 'delete own page content',
    'roles' => array(
      'Администратор' => 'Администратор',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own video files'.
  $permissions['delete own video files'] = array(
    'name' => 'delete own video files',
    'roles' => array(
      'Администратор' => 'Администратор',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete revisions'.
  $permissions['delete revisions'] = array(
    'name' => 'delete revisions',
    'roles' => array(
      'Администратор' => 'Администратор',
    ),
    'module' => 'node',
  );

  // Exported permission: 'display drupal links'.
  $permissions['display drupal links'] = array(
    'name' => 'display drupal links',
    'roles' => array(
      'Администратор' => 'Администратор',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'download any audio files'.
  $permissions['download any audio files'] = array(
    'name' => 'download any audio files',
    'roles' => array(
      'Администратор' => 'Администратор',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download any document files'.
  $permissions['download any document files'] = array(
    'name' => 'download any document files',
    'roles' => array(
      'Администратор' => 'Администратор',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download any image files'.
  $permissions['download any image files'] = array(
    'name' => 'download any image files',
    'roles' => array(
      'Администратор' => 'Администратор',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download any video files'.
  $permissions['download any video files'] = array(
    'name' => 'download any video files',
    'roles' => array(
      'Администратор' => 'Администратор',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download own audio files'.
  $permissions['download own audio files'] = array(
    'name' => 'download own audio files',
    'roles' => array(
      'Администратор' => 'Администратор',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download own document files'.
  $permissions['download own document files'] = array(
    'name' => 'download own document files',
    'roles' => array(
      'Администратор' => 'Администратор',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download own image files'.
  $permissions['download own image files'] = array(
    'name' => 'download own image files',
    'roles' => array(
      'Администратор' => 'Администратор',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download own video files'.
  $permissions['download own video files'] = array(
    'name' => 'download own video files',
    'roles' => array(
      'Администратор' => 'Администратор',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit any article content'.
  $permissions['edit any article content'] = array(
    'name' => 'edit any article content',
    'roles' => array(
      'Администратор' => 'Администратор',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any audio files'.
  $permissions['edit any audio files'] = array(
    'name' => 'edit any audio files',
    'roles' => array(
      'Администратор' => 'Администратор',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit any document files'.
  $permissions['edit any document files'] = array(
    'name' => 'edit any document files',
    'roles' => array(
      'Администратор' => 'Администратор',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit any image files'.
  $permissions['edit any image files'] = array(
    'name' => 'edit any image files',
    'roles' => array(
      'Администратор' => 'Администратор',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit any news content'.
  $permissions['edit any news content'] = array(
    'name' => 'edit any news content',
    'roles' => array(
      'Администратор' => 'Администратор',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any page content'.
  $permissions['edit any page content'] = array(
    'name' => 'edit any page content',
    'roles' => array(
      'Администратор' => 'Администратор',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any video files'.
  $permissions['edit any video files'] = array(
    'name' => 'edit any video files',
    'roles' => array(
      'Администратор' => 'Администратор',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit fieldable accordion'.
  $permissions['edit fieldable accordion'] = array(
    'name' => 'edit fieldable accordion',
    'roles' => array(
      'Администратор' => 'Администратор',
      'Редактор' => 'Редактор',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'edit fieldable carousel'.
  $permissions['edit fieldable carousel'] = array(
    'name' => 'edit fieldable carousel',
    'roles' => array(
      'Администратор' => 'Администратор',
      'Редактор' => 'Редактор',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'edit fieldable elements_tabs'.
  $permissions['edit fieldable elements_tabs'] = array(
    'name' => 'edit fieldable elements_tabs',
    'roles' => array(
      'Администратор' => 'Администратор',
      'Редактор' => 'Редактор',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'edit fieldable fieldable_panels_pane'.
  $permissions['edit fieldable fieldable_panels_pane'] = array(
    'name' => 'edit fieldable fieldable_panels_pane',
    'roles' => array(
      'Администратор' => 'Администратор',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'edit fieldable fullwidth_image'.
  $permissions['edit fieldable fullwidth_image'] = array(
    'name' => 'edit fieldable fullwidth_image',
    'roles' => array(
      'Администратор' => 'Администратор',
      'Редактор' => 'Редактор',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'edit fieldable gallery_6_images'.
  $permissions['edit fieldable gallery_6_images'] = array(
    'name' => 'edit fieldable gallery_6_images',
    'roles' => array(
      'Администратор' => 'Администратор',
      'Редактор' => 'Редактор',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'edit fieldable paragraph'.
  $permissions['edit fieldable paragraph'] = array(
    'name' => 'edit fieldable paragraph',
    'roles' => array(
      'Администратор' => 'Администратор',
      'Редактор' => 'Редактор',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'edit fieldable slider'.
  $permissions['edit fieldable slider'] = array(
    'name' => 'edit fieldable slider',
    'roles' => array(
      'Администратор' => 'Администратор',
      'Редактор' => 'Редактор',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'edit own article content'.
  $permissions['edit own article content'] = array(
    'name' => 'edit own article content',
    'roles' => array(
      'Администратор' => 'Администратор',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own audio files'.
  $permissions['edit own audio files'] = array(
    'name' => 'edit own audio files',
    'roles' => array(
      'Администратор' => 'Администратор',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit own comments'.
  $permissions['edit own comments'] = array(
    'name' => 'edit own comments',
    'roles' => array(
      'Администратор' => 'Администратор',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'edit own document files'.
  $permissions['edit own document files'] = array(
    'name' => 'edit own document files',
    'roles' => array(
      'Администратор' => 'Администратор',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit own image files'.
  $permissions['edit own image files'] = array(
    'name' => 'edit own image files',
    'roles' => array(
      'Администратор' => 'Администратор',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit own news content'.
  $permissions['edit own news content'] = array(
    'name' => 'edit own news content',
    'roles' => array(
      'Администратор' => 'Администратор',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own page content'.
  $permissions['edit own page content'] = array(
    'name' => 'edit own page content',
    'roles' => array(
      'Администратор' => 'Администратор',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own video files'.
  $permissions['edit own video files'] = array(
    'name' => 'edit own video files',
    'roles' => array(
      'Администратор' => 'Администратор',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'execute php code'.
  $permissions['execute php code'] = array(
    'name' => 'execute php code',
    'roles' => array(
      'Администратор' => 'Администратор',
    ),
    'module' => 'devel',
  );

  // Exported permission: 'flush caches'.
  $permissions['flush caches'] = array(
    'name' => 'flush caches',
    'roles' => array(
      'Администратор' => 'Администратор',
      'Редактор' => 'Редактор',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'generate features'.
  $permissions['generate features'] = array(
    'name' => 'generate features',
    'roles' => array(
      'Администратор' => 'Администратор',
    ),
    'module' => 'features',
  );

  // Exported permission: 'manage features'.
  $permissions['manage features'] = array(
    'name' => 'manage features',
    'roles' => array(
      'Администратор' => 'Администратор',
    ),
    'module' => 'features',
  );

  // Exported permission: 'notify of path changes'.
  $permissions['notify of path changes'] = array(
    'name' => 'notify of path changes',
    'roles' => array(
      'Администратор' => 'Администратор',
    ),
    'module' => 'pathauto',
  );

  // Exported permission: 'post comments'.
  $permissions['post comments'] = array(
    'name' => 'post comments',
    'roles' => array(
      'Администратор' => 'Администратор',
      'Редактор' => 'Редактор',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'rename features'.
  $permissions['rename features'] = array(
    'name' => 'rename features',
    'roles' => array(
      'Администратор' => 'Администратор',
    ),
    'module' => 'features',
  );

  // Exported permission: 'revert revisions'.
  $permissions['revert revisions'] = array(
    'name' => 'revert revisions',
    'roles' => array(
      'Администратор' => 'Администратор',
    ),
    'module' => 'node',
  );

  // Exported permission: 'select account cancellation method'.
  $permissions['select account cancellation method'] = array(
    'name' => 'select account cancellation method',
    'roles' => array(
      'Администратор' => 'Администратор',
    ),
    'module' => 'user',
  );

  // Exported permission: 'skip CAPTCHA'.
  $permissions['skip CAPTCHA'] = array(
    'name' => 'skip CAPTCHA',
    'roles' => array(
      'Администратор' => 'Администратор',
    ),
    'module' => 'captcha',
  );

  // Exported permission: 'skip comment approval'.
  $permissions['skip comment approval'] = array(
    'name' => 'skip comment approval',
    'roles' => array(
      'Администратор' => 'Администратор',
      'Редактор' => 'Редактор',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'switch shortcut sets'.
  $permissions['switch shortcut sets'] = array(
    'name' => 'switch shortcut sets',
    'roles' => array(
      'Администратор' => 'Администратор',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: 'switch users'.
  $permissions['switch users'] = array(
    'name' => 'switch users',
    'roles' => array(
      'Администратор' => 'Администратор',
    ),
    'module' => 'devel',
  );

  // Exported permission: 'translate interface'.
  $permissions['translate interface'] = array(
    'name' => 'translate interface',
    'roles' => array(
      'Администратор' => 'Администратор',
    ),
    'module' => 'locale',
  );

  // Exported permission: 'use ctools import'.
  $permissions['use ctools import'] = array(
    'name' => 'use ctools import',
    'roles' => array(
      'Администратор' => 'Администратор',
    ),
    'module' => 'ctools',
  );

  // Exported permission: 'use ipe with page manager'.
  $permissions['use ipe with page manager'] = array(
    'name' => 'use ipe with page manager',
    'roles' => array(
      'Администратор' => 'Администратор',
      'Редактор' => 'Редактор',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'use page manager'.
  $permissions['use page manager'] = array(
    'name' => 'use page manager',
    'roles' => array(
      'Администратор' => 'Администратор',
    ),
    'module' => 'page_manager',
  );

  // Exported permission: 'use panels caching features'.
  $permissions['use panels caching features'] = array(
    'name' => 'use panels caching features',
    'roles' => array(
      'Администратор' => 'Администратор',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'use panels dashboard'.
  $permissions['use panels dashboard'] = array(
    'name' => 'use panels dashboard',
    'roles' => array(
      'Администратор' => 'Администратор',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'use panels in place editing'.
  $permissions['use panels in place editing'] = array(
    'name' => 'use panels in place editing',
    'roles' => array(
      'Администратор' => 'Администратор',
      'Редактор' => 'Редактор',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'use panels locks'.
  $permissions['use panels locks'] = array(
    'name' => 'use panels locks',
    'roles' => array(
      'Администратор' => 'Администратор',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'use text format full_html'.
  $permissions['use text format full_html'] = array(
    'name' => 'use text format full_html',
    'roles' => array(
      'Администратор' => 'Администратор',
      'Редактор' => 'Редактор',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'view files'.
  $permissions['view files'] = array(
    'name' => 'view files',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'Администратор' => 'Администратор',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'view own files'.
  $permissions['view own files'] = array(
    'name' => 'view own files',
    'roles' => array(
      'Администратор' => 'Администратор',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'view own private files'.
  $permissions['view own private files'] = array(
    'name' => 'view own private files',
    'roles' => array(
      'Администратор' => 'Администратор',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'view own unpublished content'.
  $permissions['view own unpublished content'] = array(
    'name' => 'view own unpublished content',
    'roles' => array(
      'Администратор' => 'Администратор',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view pane admin links'.
  $permissions['view pane admin links'] = array(
    'name' => 'view pane admin links',
    'roles' => array(
      'Администратор' => 'Администратор',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'view private files'.
  $permissions['view private files'] = array(
    'name' => 'view private files',
    'roles' => array(
      'Администратор' => 'Администратор',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'view revisions'.
  $permissions['view revisions'] = array(
    'name' => 'view revisions',
    'roles' => array(
      'Администратор' => 'Администратор',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view the administration theme'.
  $permissions['view the administration theme'] = array(
    'name' => 'view the administration theme',
    'roles' => array(
      'Администратор' => 'Администратор',
      'Редактор' => 'Редактор',
    ),
    'module' => 'system',
  );

  return $permissions;
}
