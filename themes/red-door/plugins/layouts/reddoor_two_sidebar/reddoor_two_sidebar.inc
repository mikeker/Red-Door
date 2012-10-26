<?php
// Plugin definition
$plugin = array(
  'title' => t('Red Door Two Sidebars'),
  'icon' => 'reddoor_two_sidebar.png',
  'category' => t('Red Door'),
  'theme' => 'reddoor_two_sidebar',

  // Uncertain if there's a better way to have layout plugin SASS files compiled
  // when the rest of the theme's SASS files are compiled.
  'css' => '../../../css/layouts/reddoor_two_sidebar.css',

  'regions' => array(
    'contentmain' => t('Content'),
    'sidebar1' => t('Content Sidebar'),
    'sidebar2' => t('Content Sidebar 2'),
  ),
);
