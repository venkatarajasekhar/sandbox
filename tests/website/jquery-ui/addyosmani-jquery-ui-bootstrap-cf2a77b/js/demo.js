$(function () {

    // Buttons
    $('button').button();

    // Anchors, Submit
    $('.button,#sampleButton').button();

    // Buttonset
    $('#radioset').buttonset();
    $("#format").buttonset();


    // Datepicker
    $('#datepicker').datepicker({
        inline: true
    });

    // Filament datepicker
    $('#rangeA').daterangepicker();
    $('#rangeBa, #rangeBb').daterangepicker();


    // File input (using http://filamentgroup.com/lab/jquery_custom_file_input_book_designing_with_progressive_enhancement/)
    $('#file').customFileInput({
        button_position : 'right'
    });


});
