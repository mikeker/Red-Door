(function($) {
  Drupal.behaviors.rd_events = {
    attach: function(context) {
    //   $('#edit-field-date-time-und-0-value-date')
    //     .hide()
    //     .parent()
    //       .append('<input name="rd_events_date1" class="form-text" type="text" />')
    //       .append('<input name="rd_events_time1" class="form-text" type="text" />')
    //   ;
    //   $('#edit-field-date-time-und-0-value2-date')
    //     .hide()
    //     .parent()
    //       .append('<input name="rd_events_date2" class="form-text" type="text" />')
    //       .append('<input name="rd_events_time2" class="form-text" type="text" />')
    //   ;
      $('#edit-field-date-time-und-0-value-timeEntry-popup-1').timepicker();
    }
  };
})(jQuery);
