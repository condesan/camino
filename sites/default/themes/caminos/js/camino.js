$(document).ready(function(){
		//oculta titulo
		$('.view-id-Experiencias_gps .view-content h3').hide();
		//posiciona el texto del slideshow exactamente debajo de la foto principal y superpuesta
		//solución hallada cuando me iba a almorzar a Chacarilla :)
		altura = $('#descripcion-text').height(); 
		var distancia; 
		var ancho;
		distancia = 345 - parseInt(altura); 
		//$('.views-field-phpcode-1').css({'top' : '326px'});
		$('.views-field-phpcode-1').css({'top' : distancia});
		$('.views-field-phpcode-1').css({'position' : 'absolute'});		
		ancho = $('#view-slide img').attr('width');
		$('.views-field-phpcode-1').css({'width' : '480px'});
		
		//slideshow para imagenes de texto completo de recursos (contribuciones)
		//tomado de http://jquery.malsup.com/cycle/pager11.html
    $('.field-field-imagenes .field-items').cycle({
        fx:      'scrollHorz',
        timeout:  0,
        prev:    '#prev',
        next:    '#next' 
				});
		//slideshow para imagenes de slideshow de contribuciones
		//tomado de http://jquery.malsup.com/cycle/pager11.html
    $('#main-wrapper .pane-slideshow .view-slideshow  .view-content').cycle({
        fx:      'scrollHorz',
        timeout:  0,
        prev:    '#prev',
        next:    '#next'
    });
	
	});	



