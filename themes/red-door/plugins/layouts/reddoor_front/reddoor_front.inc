<?php
// Plugin definition
$plugin = array(
  'title' => t('Red Door Front Page Template'),
  'icon' => 'reddoor-front.png',
  'category' => t('Red Door'),
  'theme' => 'reddoor_front',
  'css' => '../../../css/layouts/reddoor_front.css',
  'regions' => array(
    'header' => t('Header'),
    'sidebar' => t('Content Sidebar'),
    'contentmain' => t('Content'),
    'footer' => t('Footer'),
  ),
);
