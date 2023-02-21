$(document).ready(function () {
    var dataN = 1;
    var reachEnd;
    $(".box").on('mousewheel', function (e) { //down -1, up 1
        dataN = $(this).attr("data-n") - e.deltaY; //1 - ( -1 )

        // if (dataN == 5&&!reachEnd) {
        //     reachEnd = true;
        //     setTimeout(function(){
        //         dataN = 4;
        //     alert("last page");
        //     return false;
        //     },500);
        // }

        var target = $(".box" + dataN).offset().left;
        $("body,html").stop().animate({
            scrollLeft: target
        }, 1500);
        return false;
    });

});