<?php
/**
 * @file
 * sasta_base.ctools_content.inc
 */

/**
 * Implements hook_default_ctools_custom_content().
 */
function sasta_base_default_ctools_custom_content() {
  $export = array();

  $content = new stdClass();
  $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
  $content->api_version = 1;
  $content->name = 'callbackforn';
  $content->admin_title = 'Форма заказа звонка';
  $content->admin_description = '';
  $content->category = 'Sasta';
  $content->settings = array(
    'admin_title' => 'Форма заказа звонка',
    'title' => '',
    'body' => '<h2 class="text-center">НУЖНА ПРОФЕССИОНАЛЬНАЯ КОНСУЛЬТАЦИЯ?</h2>

<div class="row">
<div class="col-md-5">Звоните [site:phone]<br />
или оставьте телефон и мы вам перезвоним</div>

<div class="col-md-7">
<form accept-charset="UTF-8" action="/wysiwyg-templates/ckeditor/_/list" class="form-inline" id="callbackform-form" method="post">
<div>
<div class="form-group">
<div class="form-type-textfield form-item-phone form-item form-group"><input class="form-control form-text" id="edit-phone" maxlength="128" name="phone" placeholder="Ваш телефон" size="60" type="text" value="" /></div>
</div>

<div class="form-group"><button class="btn btn-default form-submit" id="edit-submit" name="op" type="submit" value="Перезвонить">Перезвонить</button></div>
<input name="form_build_id" type="hidden" value="form--0xwoaFABJB0Vews_TIB_pdSmNMs62dTghJ9lTWuybg" /> <input name="form_token" type="hidden" value="kMc1e_eHboewSgDYZ8yb5Brq8fjhAWRIYsslQ15oWFs" /> <input name="form_id" type="hidden" value="callbackform_form" /></div>
</form>
</div>
</div>
',
    'format' => 'full_html',
    'substitute' => 1,
  );
  $export['callbackforn'] = $content;

  $content = new stdClass();
  $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
  $content->api_version = 1;
  $content->name = 'promo_block_4';
  $content->admin_title = 'Преимущества. Промо блок (4 элемента)';
  $content->admin_description = '';
  $content->category = 'Sasta';
  $content->settings = array(
    'admin_title' => 'Преимущества. Промо блок (4 элемента)',
    'title' => '',
    'body' => '<div class="row promo-block">
<div class="col-lg-3 col-md-3"><img alt="Generic placeholder image" class="img-circle" height="140" src="data:image/gif;base64,R0lGODlhAQABAIAAAHd3dwAAACH5BAAAAAAALAAAAAABAAEAAAICRAEAOw==" width="140" />
<h2>Heading</h2>

<p>Donec sed odio dui. Etiam porta sem malesuada magna mollis euismod. Nullam id dolor id nibh ultricies vehicula ut id elit. Morbi leo risus, porta ac consectetur ac, vestibulum at eros. Praesent commodo cursus magna.</p>

<p><a class="btn btn-default" href="#" role="button">View details »</a></p>
</div>

<div class="col-lg-3 col-md-3"><img alt="Generic placeholder image" class="img-circle" height="140" src="data:image/gif;base64,R0lGODlhAQABAIAAAHd3dwAAACH5BAAAAAAALAAAAAABAAEAAAICRAEAOw==" width="140" />
<h2>Heading</h2>

<p>Donec sed odio dui. Etiam porta sem malesuada magna mollis euismod. Nullam id dolor id nibh ultricies vehicula ut id elit. Morbi leo risus, porta ac consectetur ac, vestibulum at eros. Praesent commodo cursus magna.</p>

<p><a class="btn btn-default" href="#" role="button">View details »</a></p>
</div>

<div class="col-lg-3 col-md-3"><img alt="Generic placeholder image" class="img-circle" height="140" src="data:image/gif;base64,R0lGODlhAQABAIAAAHd3dwAAACH5BAAAAAAALAAAAAABAAEAAAICRAEAOw==" width="140" />
<h2>Heading</h2>

<p>Donec sed odio dui. Etiam porta sem malesuada magna mollis euismod. Nullam id dolor id nibh ultricies vehicula ut id elit. Morbi leo risus, porta ac consectetur ac, vestibulum at eros. Praesent commodo cursus magna.</p>

<p><a class="btn btn-default" href="#" role="button">View details »</a></p>
</div>

<div class="col-lg-3 col-md-3"><img alt="Generic placeholder image" class="img-circle" height="140" src="data:image/gif;base64,R0lGODlhAQABAIAAAHd3dwAAACH5BAAAAAAALAAAAAABAAEAAAICRAEAOw==" width="140" />
<h2>Heading</h2>

<p>Donec sed odio dui. Etiam porta sem malesuada magna mollis euismod. Nullam id dolor id nibh ultricies vehicula ut id elit. Morbi leo risus, porta ac consectetur ac, vestibulum at eros. Praesent commodo cursus magna.</p>

<p><a class="btn btn-default" href="#" role="button">View details »</a></p>
</div>
</div>
',
    'format' => 'full_html',
    'substitute' => 1,
  );
  $export['promo_block_4'] = $content;

  return $export;
}
