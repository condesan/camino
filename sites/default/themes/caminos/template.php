<?php
// $Id$

/**
 * @file
 * Contains theme override functions and preprocess functions for the theme.
 *
 * ABOUT THE TEMPLATE.PHP FILE
 *
 *   The template.php file is one of the most useful files when creating or
 *   modifying Drupal themes. You can add new regions for block content, modify
 *   or override Drupal's theme functions, intercept or make additional
 *   variables available to your theme, and create custom PHP logic. For more
 *   information, please visit the Theme Developer's Guide on Drupal.org:
 *   http://drupal.org/theme-guide
 *
 * OVERRIDING THEME FUNCTIONS
 *
 *   The Drupal theme system uses special theme functions to generate HTML
 *   output automatically. Often we wish to customize this HTML output. To do
 *   this, we have to override the theme function. You have to first find the
 *   theme function that generates the output, and then "catch" it and modify it
 *   here. The easiest way to do it is to copy the original function in its
 *   entirety and paste it here, changing the prefix from theme_ to caminos_.
 *   For example:
 *
 *     original: theme_breadcrumb()
 *     theme override: caminos_breadcrumb()
 *
 *   where caminos is the name of your sub-theme. For example, the
 *   zen_classic theme would define a zen_classic_breadcrumb() function.
 *
 *   If you would like to override any of the theme functions used in Zen core,
 *   you should first look at how Zen core implements those functions:
 *     theme_breadcrumbs()      in zen/template.php
 *     theme_menu_item_link()   in zen/template.php
 *     theme_menu_local_tasks() in zen/template.php
 *
 *   For more information, please visit the Theme Developer's Guide on
 *   Drupal.org: http://drupal.org/node/173880
 *
 * CREATE OR MODIFY VARIABLES FOR YOUR THEME
 *
 *   Each tpl.php template file has several variables which hold various pieces
 *   of content. You can modify those variables (or add new ones) before they
 *   are used in the template files by using preprocess functions.
 *
 *   This makes THEME_preprocess_HOOK() functions the most powerful functions
 *   available to themers.
 *
 *   It works by having one preprocess function for each template file or its
 *   derivatives (called template suggestions). For example:
 *     THEME_preprocess_page    alters the variables for page.tpl.php
 *     THEME_preprocess_node    alters the variables for node.tpl.php or
 *                              for node-forum.tpl.php
 *     THEME_preprocess_comment alters the variables for comment.tpl.php
 *     THEME_preprocess_block   alters the variables for block.tpl.php
 *
 *   For more information on preprocess functions and template suggestions,
 *   please visit the Theme Developer's Guide on Drupal.org:
 *   http://drupal.org/node/223440
 *   and http://drupal.org/node/190815#template-suggestions
 */


/**
 * Implementation of HOOK_theme().
 */
function caminos_theme(&$existing, $type, $theme, $path) {
  $hooks = zen_theme($existing, $type, $theme, $path);
  // Add your theme hooks like this:
  /*
  $hooks['hook_name_here'] = array( // Details go here );
  */
  // @TODO: Needs detailed comments. Patches welcome!
  return $hooks;
}

/**
 * Override or insert variables into all templates.
 *
 * @param $vars
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered (name of the .tpl.php file.)
 */
/* -- Delete this line if you want to use this function
function caminos_preprocess(&$vars, $hook) {
  $vars['sample_variable'] = t('Lorem ipsum.');
}
// */

/**
 * Override or insert variables into the page templates.
 *
 * @param $vars
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("page" in this case.)
 */


function caminos_preprocess_page(&$vars) {
if ($vars['title'] == 'Crear Recursos') {
		$vars['title'] = 'Ingresa tu Contribución';
	}
return $vars;
}





/**
 * Override or insert variables into the node templates.
 *
 * @param $vars
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("node" in this case.)
 */

function caminos_preprocess_node(&$vars) {
  //botones para avanzar o retroceder slideshow de texto de completo de imagenes de recursos (contribuciones)
	$vars['player'] = '<div id="player"><a href="#"><span id="prev">Previo</span></a> | <a href="#"><span id="next">Siguiente</span></a></div>';

  // Optionally, run node-type-specific preprocess functions, like
  // caminos_preprocess_node_page() or caminos_preprocess_node_story().
/*
  $function = __FUNCTION__ . '_' . $vars['node']->type;
  if (function_exists($function)) {
    $function($vars, $hook);
  }
*/
}


/**
 * Override or insert variables into the comment templates.
 *
 * @param $vars
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("comment" in this case.)
 */
/* -- Delete this line if you want to use this function
function caminos_preprocess_comment(&$vars, $hook) {
  $vars['sample_variable'] = t('Lorem ipsum.');
}
// */

/**
 * Override or insert variables into the block templates.
 *
 * @param $vars
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("block" in this case.)
 */

function caminos_preprocess_block(&$vars) {

	if($vars['block']->delta == 'menu-mi-menu') {
		global $user;
		$nid = _nid_user_load($user->uid);
		$node = node_load($nid);
		$names = $node->field_usuario_nombre[0]['value'] . ' ' . $node->field_usuario_apellidos[0]['value'];
		$vars['title'] = $names;
	}

}

/**
 * devuelve el nid que le corresponde a cada uid de usuarios content type
 */ 

function _nid_user_load($uid) {
	
	return db_result(db_query("SELECT nid FROM {node} WHERE uid = '%d' AND type = '%s'", $uid, 'usuarios'));
	
	}

function caminos_username($object){

	if ($object->uid && $object->name) {
    // Shorten the name when it is too long or it will break many tables.
  $nid = _nid_user_load($object->uid);
	$node = node_load($nid);
	$name = $node->field_usuario_nombre[0]['value'] . ' ' . $node->field_usuario_apellidos[0]['value'];

    if (user_access('access user profiles')) {
      $output = l($name, 'user/'. $object->uid, array('attributes' => array('title' => t('View user profile.'))));
    }
    else {
      $output = check_plain($name);
    }
  }

  else {
    $output = check_plain(variable_get('anonymous', t('Anonymous')));
  }

  return $output;
}

function _theme_cck_field($field_name, $content_type_name, $node) {
	$field = content_fields($field_name, $content_type_name);
  return content_view_field($field, $node);
	}

