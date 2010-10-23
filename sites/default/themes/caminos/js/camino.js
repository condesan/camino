$(document).ready(function(){
		//oculta titulo
		$('.view-id-Experiencias_gps .view-content h3').hide();
		//posiciona el texto del slideshow exactamente debajo de la foto principal y superpuesta
		//solución hallada cuando me iba a almorzar a Chacarilla :)
		altura = $('#descripcion-text').height(); 
		var distancia; 
		var ancho;
		distancia = 473 - parseInt(altura); 
		$('#descripcion-slide').css({'top' : distancia});
		ancho = $('#view-slide img').attr('width');
		$('#descripcion-slide').css({'width' : ancho});
		//slideshow para imagenes de texto completo de recursos (contribuciones)
		//tomado de http://jquery.malsup.com/cycle/pager11.html
    $('.field-field-imagenes .field-items').cycle({
        fx:      'scrollHorz',
        timeout:  0,
        prev:    '#prev',
        next:    '#next',
        pager:   '#nav',
        pagerAnchorBuilder: pagerFactory
    });
 
    function pagerFactory(idx, slide) {
        var s = idx > 2 ? ' style="display:none"' : '';
        return '<li'+s+'><a href="#">'+(idx+1)+'</a></li>';
    };
    

	});	



