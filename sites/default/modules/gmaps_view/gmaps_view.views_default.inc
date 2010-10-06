<?php

/**
 * Implementation of hook_views_default_views().
 */
function gmaps_view_views_default_views() {
  $views = array();

  // Exported view: test_mapas
  $view = new view;
  $view->name = 'test_mapas';
  $view->description = '';
  $view->tag = '';
  $view->view_php = '';
  $view->base_table = 'node';
  $view->is_cacheable = FALSE;
  $view->api_version = 2;
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->override_option('fields', array(
    'marker_point' => array(
      'label' => 'Localización (field_localizacion) - Point option',
      'alter' => array(
        'alter_text' => FALSE,
        'text' => '',
        'make_link' => FALSE,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => FALSE,
        'max_length' => '',
        'word_boundary' => TRUE,
        'ellipsis' => TRUE,
        'html' => FALSE,
        'strip_tags' => FALSE,
      ),
      'empty' => '',
      'hide_empty' => FALSE,
      'empty_zero' => FALSE,
      'exclude' => FALSE,
      'id' => 'marker_point',
      'table' => 'node_data_field_localizacion',
      'field' => 'marker_point',
      'relationship' => 'none',
    ),
    'marker_point_1' => array(
      'label' => 'Localización (field_localizacion) - Point option',
      'alter' => array(
        'alter_text' => FALSE,
        'text' => '',
        'make_link' => FALSE,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => FALSE,
        'max_length' => '',
        'word_boundary' => TRUE,
        'ellipsis' => TRUE,
        'html' => FALSE,
        'strip_tags' => FALSE,
      ),
      'empty' => '',
      'hide_empty' => FALSE,
      'empty_zero' => FALSE,
      'exclude' => FALSE,
      'id' => 'marker_point_1',
      'table' => 'node_data_field_localizacion',
      'field' => 'marker_point',
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('arguments', array(
    'proximity' => array(
      'default_action' => 'ignore',
      'style_plugin' => 'default_summary',
      'style_options' => array(),
      'wildcard' => 'all',
      'wildcard_substitution' => 'Todos',
      'title' => '',
      'breadcrumb' => '',
      'default_argument_type' => 'fixed',
      'default_argument' => '',
      'validate_type' => 'none',
      'validate_fail' => 'not found',
      'break_phrase' => FALSE,
      'not' => FALSE,
      'not_arg' => 1,
      'filter' => 0,
      'operator' => '<=',
      'dist' => array(
        'value' => '0',
        'unit' => 'yoctometer',
      ),
      'maxdist' => array(
        'value' => 1000000,
        'unit' => 'meter',
      ),
      'dist_m' => 0,
      'maxdist_m' => 1000000,
      'rounded' => 0,
      'sort' => 1,
      'order' => 'ASC',
      'filter_fields' => array(),
      'result_fields' => array(),
      'values' => 'first',
      'viewloc' => 1,
      'id' => 'proximity',
      'table' => 'node_data_field_localizacion',
      'field' => 'proximity',
      'validate_user_argument_type' => 'uid',
      'validate_user_roles' => array(
        '2' => 0,
        '3' => 0,
      ),
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
      'default_options_div_prefix' => '',
      'default_argument_fixed' => '',
      'default_argument_user' => 0,
      'default_argument_php' => '',
      'validate_argument_node_type' => array(
        'audio' => 0,
        'panel' => 0,
        'caminos' => 0,
        'etapas' => 0,
        'experiencias' => 0,
        'galeria' => 0,
        'page' => 0,
        'pizarra' => 0,
        'recursos' => 0,
        'story' => 0,
        'usuarios' => 0,
      ),
      'validate_argument_node_access' => 0,
      'validate_argument_nid_type' => 'nid',
      'validate_argument_vocabulary' => array(
        '1' => 0,
        '5' => 0,
        '4' => 0,
        '3' => 0,
        '6' => 0,
        '2' => 0,
      ),
      'validate_argument_type' => 'tid',
      'validate_argument_transform' => 0,
      'validate_user_restrict_roles' => 0,
      'validate_argument_php' => '',
    ),
  ));
  $handler->override_option('filters', array(
    'type' => array(
      'operator' => 'in',
      'value' => array(
        'experiencias' => 'experiencias',
      ),
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'type',
      'table' => 'node',
      'field' => 'type',
      'relationship' => 'none',
    ),
    'location' => array(
      'operator' => 'bounds',
      'value' => array(
        'pw' => array(
          'point' => NULL,
        ),
      ),
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'allow_country' => FALSE,
      'allow_adminarea' => FALSE,
      'fast_filter_fields' => 512,
      'geocoder' => 1,
      'use_map' => 1,
      'rounded' => 1,
      'viewloc' => 1,
      'radius' => array(
        '0' => array(
          'value' => 1,
          'unit' => 'kilometer',
        ),
        '1' => array(
          'value' => 5,
          'unit' => 'kilometer',
        ),
        '2' => array(
          'value' => 10,
          'unit' => 'kilometer',
        ),
        '3' => array(
          'value' => '0',
          'unit' => 'meter',
        ),
        '4' => array(
          'value' => '0',
          'unit' => 'meter',
        ),
      ),
      'radius_m' => array(
        '0' => 1000,
        '1' => 5000,
        '2' => 10000,
        '3' => 0,
        '4' => 0,
      ),
      'id' => 'location',
      'table' => 'node_data_field_localizacion',
      'field' => 'location',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('access', array(
    'type' => 'none',
  ));
  $handler->override_option('cache', array(
    'type' => 'none',
  ));
  $handler->override_option('style_plugin', 'gmaps_map');
  $handler->override_option('row_plugin', 'gmaps_map_marker_node');
  $handler->override_option('row_options', array(
    'relationship' => 'none',
    'min' => array(
      'build_mode' => 'teaser',
      'links' => 1,
      'comments' => 0,
    ),
    'tabs' => array(
      'tab_0' => array(
        'title' => '',
        'content' => array(),
        'inline' => array(),
        'separator' => '',
        'hide_empty' => 0,
      ),
      'tab_1' => array(
        'title' => '',
        'content' => array(),
        'inline' => array(),
        'separator' => '',
        'hide_empty' => 0,
      ),
      'tab_2' => array(
        'title' => '',
        'content' => array(),
        'inline' => array(),
        'separator' => '',
        'hide_empty' => 0,
      ),
      'tab_3' => array(
        'title' => '',
        'content' => array(),
        'inline' => array(),
        'separator' => '',
        'hide_empty' => 0,
      ),
      'tab_4' => array(
        'title' => '',
        'content' => array(),
        'inline' => array(),
        'separator' => '',
        'hide_empty' => 0,
      ),
    ),
    'max' => array(
      'build_mode' => 'full',
      'links' => 1,
      'comments' => 0,
    ),
  ));
  $handler = $view->new_display('page', 'Página', 'page_1');
  $handler->override_option('fields', array(
    'title' => array(
      'label' => 'Título',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'link_to_node' => 1,
      'exclude' => 0,
      'id' => 'title',
      'table' => 'node',
      'field' => 'title',
      'override' => array(
        'button' => 'Use default',
      ),
      'relationship' => 'none',
    ),
    'marker_point' => array(
      'label' => 'Localización (field_localizacion) - Point option',
      'alter' => array(
        'alter_text' => FALSE,
        'text' => '',
        'make_link' => FALSE,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => FALSE,
        'max_length' => '',
        'word_boundary' => TRUE,
        'ellipsis' => TRUE,
        'html' => FALSE,
        'strip_tags' => FALSE,
      ),
      'empty' => '',
      'hide_empty' => FALSE,
      'empty_zero' => FALSE,
      'exclude' => FALSE,
      'id' => 'marker_point',
      'table' => 'node_data_field_localizacion',
      'field' => 'marker_point',
      'override' => array(
        'button' => 'Use default',
      ),
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('arguments', array());
  $handler->override_option('filters', array(
    'type' => array(
      'operator' => 'in',
      'value' => array(
        'experiencias' => 'experiencias',
      ),
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'type',
      'table' => 'node',
      'field' => 'type',
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('style_options', array(
    'grouping' => 'marker_point',
    'preset' => '1',
  ));
  $handler->override_option('row_options', array());
  $handler->override_option('path', 'testview');
  $handler->override_option('menu', array(
    'type' => 'none',
    'title' => '',
    'description' => '',
    'weight' => 0,
    'name' => 'navigation',
  ));
  $handler->override_option('tab_options', array(
    'type' => 'none',
    'title' => '',
    'description' => '',
    'weight' => 0,
    'name' => 'navigation',
  ));

  $views[$view->name] = $view;

  return $views;
}
