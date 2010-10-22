// $Id: jlightbox_image.js,v 1.4 2008/02/24 01:28:11 sun Exp $
/**
 * jLightbox image/image assist integration.
 * 
 * Automatically adds all images in a displayed node to one jLightbox gallery.
 */
if (Drupal.jsEnabled) {
    $(document).ready(function() {
        // Image Assist thumbnails.
        $('.inline a img.image-thumbnail').parent().each(function() {
          if (typeof this.href != 'undefined') {
            this.rel = 'lightbox[image_thumbnails]';
            this.href.replace('.thumbnail', '');
            $(this).attr({onclick: '', title: $('img', this).attr('title')});
          }
        });
        // Image Gallery thumbnails.
        $('.images img.image-thumbnail').parent().each(function() {
          if (typeof this.href != 'undefined') {
            this.rel = 'lightbox[image_gallery]';
            this.href = this.firstChild.src.replace('.thumbnail', '');
            $(this).attr({onclick: '', title: $('img', this).attr('title')});
          }
        });
        // Image Attach thumbnails.
        $('.image-attach-teaser img.image-thumbnail, .image-attach-body img.image-thumbnail').parent().each(function() {
          if (typeof this.href != 'undefined') {
            this.rel = 'lightbox[image_gallery]';
            this.href = this.firstChild.src.replace('.thumbnail', '');
            $(this).attr({onclick: '', title: $('img', this).attr('title')});
          }
        });
    });
}
