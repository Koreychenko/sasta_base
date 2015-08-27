<?php
/**
 * @file
 * sasta_base.slick_default_preset.inc
 */

/**
 * Implements hook_slick_default_presets().
 */
function sasta_base_slick_default_presets() {
  $export = array();

  $preset = new stdClass();
  $preset->disabled = FALSE; /* Edit this to true to make a default preset disabled initially */
  $preset->api_version = 1;
  $preset->name = 'carousel_3';
  $preset->label = 'carousel_3';
  $preset->breakpoints = 0;
  $preset->skin = '';
  $preset->options = array(
    'general' => array(
      'normal' => 'carousel',
      'thumbnail' => '',
      'template_class' => '',
      'goodies' => array(
        'pattern' => 0,
        'arrow-down' => 0,
        'random' => 0,
      ),
      'arrow_down_target' => '',
      'arrow_down_offset' => '',
    ),
    'settings' => array(
      'mobileFirst' => FALSE,
      'asNavFor' => '',
      'accessibility' => TRUE,
      'adaptiveHeight' => FALSE,
      'autoplay' => FALSE,
      'autoplaySpeed' => 3000,
      'pauseOnHover' => TRUE,
      'pauseOnDotsHover' => FALSE,
      'arrows' => TRUE,
      'prevArrow' => '<button type="button" data-role="none" class="slick-prev" aria-label="previous">Previous</button>',
      'nextArrow' => '<button type="button" data-role="none" class="slick-next" aria-label="next">Next</button>',
      'centerMode' => FALSE,
      'centerPadding' => '50px',
      'dots' => FALSE,
      'dotsClass' => 'slick-dots',
      'appendDots' => '$(element)',
      'draggable' => TRUE,
      'fade' => FALSE,
      'focusOnSelect' => FALSE,
      'infinite' => TRUE,
      'initialSlide' => 0,
      'lazyLoad' => 'ondemand',
      'respondTo' => 'window',
      'rtl' => FALSE,
      'rows' => 1,
      'slidesPerRow' => 1,
      'slide' => '',
      'slidesToShow' => 3,
      'slidesToScroll' => 1,
      'speed' => 500,
      'swipe' => TRUE,
      'swipeToSlide' => FALSE,
      'edgeFriction' => 0.34999999999999998,
      'touchMove' => TRUE,
      'touchThreshold' => 5,
      'useCSS' => TRUE,
      'cssEase' => 'ease',
      'cssEaseBezier' => '',
      'cssEaseOverride' => '',
      'easing' => 'linear',
      'variableWidth' => FALSE,
      'vertical' => FALSE,
      'verticalSwiping' => FALSE,
      'waitForAnimate' => TRUE,
    ),
  );
  $export['carousel_3'] = $preset;

  $preset = new stdClass();
  $preset->disabled = FALSE; /* Edit this to true to make a default preset disabled initially */
  $preset->api_version = 1;
  $preset->name = 'carousel_5';
  $preset->label = 'carousel_5';
  $preset->breakpoints = 0;
  $preset->skin = '';
  $preset->options = array(
    'general' => array(
      'normal' => 'carousel',
      'thumbnail' => '',
      'template_class' => '',
      'goodies' => array(
        'pattern' => 0,
        'arrow-down' => 0,
        'random' => 0,
      ),
      'arrow_down_target' => '',
      'arrow_down_offset' => '',
    ),
    'settings' => array(
      'mobileFirst' => FALSE,
      'asNavFor' => '',
      'accessibility' => TRUE,
      'adaptiveHeight' => FALSE,
      'autoplay' => FALSE,
      'autoplaySpeed' => 3000,
      'pauseOnHover' => TRUE,
      'pauseOnDotsHover' => FALSE,
      'arrows' => TRUE,
      'prevArrow' => '<button type="button" data-role="none" class="slick-prev" aria-label="previous">Previous</button>',
      'nextArrow' => '<button type="button" data-role="none" class="slick-next" aria-label="next">Next</button>',
      'centerMode' => FALSE,
      'centerPadding' => '50px',
      'dots' => FALSE,
      'dotsClass' => 'slick-dots',
      'appendDots' => '$(element)',
      'draggable' => TRUE,
      'fade' => FALSE,
      'focusOnSelect' => FALSE,
      'infinite' => TRUE,
      'initialSlide' => 0,
      'lazyLoad' => 'ondemand',
      'respondTo' => 'window',
      'rtl' => FALSE,
      'rows' => 1,
      'slidesPerRow' => 1,
      'slide' => '',
      'slidesToShow' => 5,
      'slidesToScroll' => 1,
      'speed' => 500,
      'swipe' => TRUE,
      'swipeToSlide' => FALSE,
      'edgeFriction' => 0.34999999999999998,
      'touchMove' => TRUE,
      'touchThreshold' => 5,
      'useCSS' => TRUE,
      'cssEase' => 'ease',
      'cssEaseBezier' => '',
      'cssEaseOverride' => '',
      'easing' => 'linear',
      'variableWidth' => FALSE,
      'vertical' => FALSE,
      'verticalSwiping' => FALSE,
      'waitForAnimate' => TRUE,
    ),
  );
  $export['carousel_5'] = $preset;

  $preset = new stdClass();
  $preset->disabled = FALSE; /* Edit this to true to make a default preset disabled initially */
  $preset->api_version = 1;
  $preset->name = 'slider';
  $preset->label = 'slider';
  $preset->breakpoints = 0;
  $preset->skin = '';
  $preset->options = array(
    'general' => array(
      'normal' => '',
      'thumbnail' => '',
      'template_class' => '',
      'goodies' => array(
        'pattern' => 0,
        'arrow-down' => 0,
        'random' => 0,
      ),
      'arrow_down_target' => '',
      'arrow_down_offset' => '',
    ),
    'settings' => array(
      'mobileFirst' => FALSE,
      'asNavFor' => '',
      'accessibility' => TRUE,
      'adaptiveHeight' => FALSE,
      'autoplay' => FALSE,
      'autoplaySpeed' => 3000,
      'pauseOnHover' => TRUE,
      'pauseOnDotsHover' => FALSE,
      'arrows' => TRUE,
      'prevArrow' => '<button type="button" data-role="none" class="slick-prev" aria-label="previous">Previous</button>',
      'nextArrow' => '<button type="button" data-role="none" class="slick-next" aria-label="next">Next</button>',
      'centerMode' => FALSE,
      'centerPadding' => '50px',
      'dots' => TRUE,
      'dotsClass' => 'slick-dots',
      'appendDots' => '$(element)',
      'draggable' => TRUE,
      'fade' => FALSE,
      'focusOnSelect' => FALSE,
      'infinite' => TRUE,
      'initialSlide' => 0,
      'lazyLoad' => 'ondemand',
      'respondTo' => 'window',
      'rtl' => FALSE,
      'rows' => 1,
      'slidesPerRow' => 1,
      'slide' => '',
      'slidesToShow' => 1,
      'slidesToScroll' => 1,
      'speed' => 500,
      'swipe' => TRUE,
      'swipeToSlide' => FALSE,
      'edgeFriction' => 0.34999999999999998,
      'touchMove' => TRUE,
      'touchThreshold' => 5,
      'useCSS' => TRUE,
      'cssEase' => 'ease',
      'cssEaseBezier' => '',
      'cssEaseOverride' => '',
      'easing' => 'linear',
      'variableWidth' => FALSE,
      'vertical' => FALSE,
      'verticalSwiping' => FALSE,
      'waitForAnimate' => TRUE,
    ),
  );
  $export['slider'] = $preset;

  return $export;
}
