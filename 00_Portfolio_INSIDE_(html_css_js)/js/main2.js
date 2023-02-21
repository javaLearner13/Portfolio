$(document).ready(function () {
    /* box scroll */
    var dataN = 1;
    /* snap */
    $(".box").on('mousewheel', function (e) {

        dataN = $(this).attr("data-n") - e.deltaY;

        var target = $(".box" + dataN).offset().top;

        $("body,html").stop().animate({
            scrollTop: target
        }, 1200);

        return false;

    })
    /* for fade-in */
    $(window).scroll(function () {
        /* first 5 boxes */
        $('.box1 img, .box2 img, .box3 img, .box4 img, .box5 img').each(function () {

            var temp = 1;
            var bottomObject = $(this).offset().top + $(this).outerHeight();
            var windowBottom = $(window).scrollTop() + $(window).height();

            if (windowBottom >= bottomObject) {

                $(this).animate({
                    'opacity': temp
                }, 1000);

            }

        });
        /* for nav icon at the bottom */
        $('.box6 img').each(function () {

            var temp = 1;
            var bottomObject = $(this).offset().top + $(this).outerHeight();
            var windowBottom = $(window).scrollTop() + $(window).height();

            if (windowBottom >= bottomObject) {

                $(this).animate({
                    'opacity': temp
                }, 4000);

            }

        });
        /* for texts */
        $('.forText').each(function () {

            var temp = 1;
            var bottomObject = $(this).offset().top + $(this).outerHeight();
            var windowBottom = $(window).scrollTop() + $(window).height();

            if (windowBottom >= bottomObject) {

                $(this).animate({
                    'opacity': temp
                }, 4000);

            }

        });
    });

    $('.forText h1').hover(function () {
            // over
            $(this).css('color',"#8B0000");
        }, function () {
            // out
            $(this).css('color',"white");
        }
    );

})