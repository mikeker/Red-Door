<?php
// Plugin definition
$plugin = array(
  'title' => t('Red Door General Page Layout'),
  'icon' => 'reddoor.png',
  'category' => t('Red Door'),
  'theme' => 'reddoor',
  'css' => '../../../css/layouts/reddoor_pages.css',
  'regions' => array(
    'header' => t('Header'),
    'sidebar1' => t('First Content Sidebar'),
    'contentmain' => t('Content'),
    'sidebar2' => t('Second Content Sidebar'),
    'footer' => t('Footer'),
  ),
);
