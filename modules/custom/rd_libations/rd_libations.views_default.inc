<?php
/**
 * @file
 * rd_libations.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function rd_libations_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'libation_listing';
  $view->description = 'List of drinks currently available';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Libation listing';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Available Now';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Libation Type (field_libation_type) */
  $handler->display->display_options['arguments']['field_libation_type_value']['id'] = 'field_libation_type_value';
  $handler->display->display_options['arguments']['field_libation_type_value']['table'] = 'field_data_field_libation_type';
  $handler->display->display_options['arguments']['field_libation_type_value']['field'] = 'field_libation_type_value';
  $handler->display->display_options['arguments']['field_libation_type_value']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['field_libation_type_value']['title'] = '%1 Available at the Red Door';
  $handler->display->display_options['arguments']['field_libation_type_value']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_libation_type_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_libation_type_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_libation_type_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_libation_type_value']['limit'] = '0';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'libation' => 'libation',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'drinks';

  /* Display: Feed */
  $handler = $view->new_display('feed', 'Feed', 'feed');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['row_plugin'] = 'node_rss';
  $handler->display->display_options['path'] = 'drinks.xml';
  $handler->display->display_options['displays'] = array(
    'default' => 'default',
    'page' => 'page',
  );
  $export['libation_listing'] = $view;

  return $export;
}
