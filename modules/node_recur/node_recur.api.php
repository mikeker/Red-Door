<?php

/**
 * Implements hook_node_recur_access_alter().
 *
 * Alter the access control for the node recur form
 * 
 * @param &$access
 *   Boolean status of access for the current user.
 * @param $node
 *   The node being recurred.
 */
function hook_node_recur_access_alter(&$access, $node) {
  if ($node->type == 'story') {
    $access = TRUE;
  }
}

/**
 * Implements hook_node_recur_batch_redirect_alter().
 *
 * Alter redirect path after a batch operation. This is only invoked
 * when recurring existing nodes, not new nodes.
 * 
 * @param &$path
 *   The path that the user will be redirected to after recurring a node.
 * @param $nid
 *    The nid of the node being recurred.
 */
function hook_node_recur_batch_redirect_alter(&$path, $nid = NULL) {
  $path = 'node/' . $nid . '/edit';
}
