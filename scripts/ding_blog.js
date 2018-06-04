(function($) {
  'use strict';

  Drupal.behaviors.ding_blog = {
    attach: function (context) {
      var $this = $('#page', context);
      var headings = $this.find('header');

      if ($(headings[1]) !== undefined && $('body').hasClass('page-user')) {
        $(headings[1]).remove();
      }
    }
  }
})(jQuery);
