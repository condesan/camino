$(function($){
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
	});	
})(jQuery)


