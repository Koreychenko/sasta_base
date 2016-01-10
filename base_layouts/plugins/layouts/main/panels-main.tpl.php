<?php

/*
*   'logo' => t('Logo'),
    'phones' => t('Phones'),
    'address' => t('Address'),
    'menu' => t('Top menu'),
    'main_content' => t('Content'),
    'footer' => t('Footer'),
*
*/
?>

<div class="site-wrapper">
  <div class="inner">
    <div class="row">
      <div class="col-md-4 logo-block">
        <?php print $content['logo']; ?>
      </div>
      <div class="col-md-4 phones-block">
        <?php print $content['phones']; ?>
      </div>
      <div class="col-md-4 address-block">
        <?php print $content['address']; ?>
      </div>
    </div>
    <div class="main-menu">
      <?php print $content['menu']; ?>
    </div>
    <?php print $content['main_content']; ?>
  </div>
  <div class="footerpusher">
  </div>
</div>
<div class="footer">
  <div class="inner">
    <?php print $content['footer']; ?>
  </div>
</div>
