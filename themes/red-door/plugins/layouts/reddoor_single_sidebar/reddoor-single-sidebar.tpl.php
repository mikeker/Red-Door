<?php
/**
 * @file
 * Template for Red Door Single Sidebar
 *
 * Variables:
 * - $css_id: An optional CSS id to use for the layout.
 * - $content: An array of content, each item in the array is keyed to one
 * panel of the layout. This layout supports the following sections:
 *     contentmain, sidebar1
 */
?>
<div class="red-door-single-sidebar <?php if (!empty($class)) { print $class; } ?>" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>
  <div id="content" role="main">
    <?php print $content['contentmain']; ?>
  </div>
  <aside class="sidebars">\
    <div id="sidebar-1">
      <?php print $content['sidebar1']; ?>
    </div>
  </aside>
</div>
