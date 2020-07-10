$(document).ready(function(){
    $('h1').hide(2000)
});

$(document).ready(function(){
    $('button').click(function(){
        $('img').hide(2500)
    });
});

$(document).ready(function(){
    $('p').click(function(){
        $('p').show()
        $(this).hide()
    });
});
