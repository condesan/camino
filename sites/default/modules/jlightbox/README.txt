/* $Id: README.txt,v 1.6 2008/01/29 23:46:39 sun Exp $ */

-- SUMMARY --

jLightbox is a port of the Lightbox project using jQuery instead of prototype
and script.acolu.ous libraries. It is based on the famous Lightbox v2 script
by Lokesh Dhakar, but will soon be enhanced with Drupal specific customizations.

For a full description visit the project page:
  http://drupal.org/project/jlightbox
Bug reports, feature suggestions and latest developments:
  http://drupal.org/project/issues/jlightbox

Learn more about Lightbox v2:
<http://www.huddletogether.com/projects/lightbox2>


-- INTEGRATION --

* Image & Image Assist support:
  jLightbox automatically adds all thumbnail images in the content of a node
  to one Lightbox gallery. Only images of the predefined size 'thumbnail'
  are lightbox-ified.
  
  Note: You need to select "Open in popup window" in Image Assist to let
  Lightbox properly work with inline images.

* Imagefield & Imagecache support:
  jLightbox automatically generates a separate gallery for each CCK
  Imagefield.

* Inline & Imagecache support:
  jLightbox automatically generates a gallery for all inline images in a node.

* Theming support:
  If a file with the name lightbox.css exists in the current theme, that file
  is loaded instead of the default stylesheet.

Enhanced Image Assist support will be focused in upcoming versions of this
module.


-- REQUIREMENTS --

* jQuery Update module <http://drupal.org/project/jquery_update>
* optional: Image <http://drupal.org/project/image> and Image Assist
  <http://drupal.org/project/img_assist> modules
* optional: CCK Imagefield <http://drupal.org/project/imagefield> and Imagecache
  <http://drupal.org/project/imagecache> modules
* optional: Inline <http://drupal.org/project/inline> and Imagecache
  <http://drupal.org/project/imagecache> modules


-- INSTALLATION --

* Copy jlightbox module to your modules directory and enable it on the admin
  modules page.


-- CONFIGURATION --

* To use jLightbox in one of your content types, you need to set up at least
  one imagecache rule. Afterwards, go to
  'admin/content/types/<content_type>/display'
  and select your desired imagecache rule instead of the default view for
  imagefield images.

* You may place a customized stylesheet file with the name 'jlightbox.css' in
  your theme to override or extend the Lightbox look.


-- CONTACT --

Current maintainers:
* Daniel F. Kudwien (sun) - dev@unleashedmind.com

jLightbox is mostly based on the work of Warren Krewenki,
<http://warren.mesozen.com> and partially based on lightbox2.module by Mark
Ashmead <bugzie@gmail.com>, Stella Power <http://drupal.org/user/66894>,
Steve McKenzie.

This project has been sponsored by:
* UNLEASHED MIND
  Specialized in consulting and planning of Drupal powered sites, UNLEASHED
  MIND offers installation, development, theming, customization, and hosting
  to get you started. Visit http://www.unleashedmind.com for more information.

