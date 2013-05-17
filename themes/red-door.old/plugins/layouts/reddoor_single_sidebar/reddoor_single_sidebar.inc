<?php
// Plugin definition
$plugin = array(
  'title' => t('Red Door Single Sidebar'),
  'icon' => 'reddoor_single_sidebar.png',
  'category' => t('Red Door'),
  'theme' => 'reddoor_single_sidebar',

  // Uncertain if there's a better way to have layout plugin SASS files compiled
  // when the rest of the theme's SASS files are compiled.
  'css' => '../../../css/layouts/reddoor_single_sidebar.css',

  'regions' => array(
    'contentmain' => t('Content'),
    'sidebar1' => t('Content Sidebar'),
  ),
);
