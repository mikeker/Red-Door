<?php
/**
 * @file
 * rd_libations.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function rd_libations_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function rd_libations_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function rd_libations_node_info() {
  $items = array(
    'libation' => array(
      'name' => t('Libation'),
      'base' => 'node_content',
      'description' => t('Beer, wine, spirits, ciders, or specialty non-alcoholic beverage.'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
    'producer' => array(
      'name' => t('Producer'),
      'base' => 'node_content',
      'description' => t('Brewery, winery, distillery, etc.'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
  );
  return $items;
}
