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

  // Hover functions for blog teasers.
  Drupal.behaviors.ding_blog_teaser_hover = {
    attach: function(context, settings) {
      var title_and_lead_height,
        hovered;
      $('.node-blog.node-teaser', context).mouseenter(function() {
        // Set height for title and lead text.
        title_and_lead_height = $(this).find('.title').outerHeight(true) + $(this).find('.field-name-field-blog-body').outerHeight(true) + 50;

        $(this).find('.title-and-lead').css('min-height', title_and_lead_height);

        // Set timeout to make shure element is still above while it animates
        // out.
        hovered = $(this);
        setTimeout(function(){
          $('.node-blog.node-teaser').removeClass('is-hovered');
          hovered.addClass('is-hovered');
        }, 300);
      });
      $('.node-blog.node-teaser').mouseleave(function() {
        $(this).find('.title-and-lead').css('min-height', '');
      });
    }
  };
})(jQuery);
