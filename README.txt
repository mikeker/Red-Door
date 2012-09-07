Red-Door
========

Custom code and theme for the Red Door's Web site

To grab the other Drupal code needed for this site, run:

  # Grab Drupal 7 core
  drush dl

  # Grab basic contrib modules used for brochure sites
  drush dl admin_menu backup_migrate better_formats boost ctools devel features google_analytics globalredirect libraries mollom pathologic pathauto strongarm token views

  # Grab basic contrib UI/theme-related modules
  drush dl fontyourface media media_youtube shadowbox wysiwyg zen

  # Grab social media support
  drush dl twitter oauth service_links

  # Grab event date modules
  drush dl date node_recur

  # Grab library code
  cd /sites/all/libraries

#  git clone git://github.com/richthegeek/phpsass.git

  wget http://download.cksource.com/CKEditor/CKEditor/CKEditor%203.6.3/ckeditor_3.6.3.tar.gz
  tar -zxvf ckeditor_3.6.3.tar.gz

  git clone git://github.com/chriseppstein/compass.git
  # Patch Sassy to use the latest Compass code
  cd /sites/all/modules/sassy
  curl http://drupal.org/files/sassy_compass_library.patch | git apply -

  # Setup
  drush dis toolbar
  drush en admin_menu admin_menu_toolbar backup_migrate better_formats boost ctools fontyourface fontyourface_ui google_fonts_api google_analytics globalredirect devel features pathologic media pathauto strongarm shadowbox wysiwyg views views_ui service_links mollom date date_api date_views node_recur

  # TODO: Git clone brochure features...


  # Trail: text editor:
  drush dl edit fape iconfonts jquery_update
  drush en -y edit_aloha toolbar
