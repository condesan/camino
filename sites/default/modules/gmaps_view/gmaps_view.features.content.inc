<?php

/**
 * Implementation of hook_content_default_fields().
 */
function gmaps_view_content_default_fields() {
  $fields = array();

  // Exported field: field_localizacion
  $fields['experiencias-field_localizacion'] = array(
    'field_name' => 'field_localizacion',
    'type_name' => 'experiencias',
    'display_settings' => array(
      'weight' => '-2',
      'parent' => '',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'map',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'gmaps_point',
    'required' => '0',
    'multiple' => '0',
    'module' => 'gmaps_content',
    'active' => '1',
    'gmaps' => array(
      'input' => array(
        'enable_geocoder' => 1,
        'use_map' => 1,
        'collapsible' => 1,
        'collapsed' => '-1',
        'input_disabled' => 1,
      ),
      'meta' => array(
        'search' => array(
          'point_snippet' => 1,
          'refloc_snippet' => 1,
          'geoip_snippet' => 1,
        ),
        'meta' => array(
          'geo_position' => 1,
          'icbm' => 1,
        ),
        'rss' => array(
          'w3c' => 0,
          'simple' => 1,
          'gml' => 1,
        ),
        'link' => array(
          'teaser' => array(
            'content' => array(
              'show' => 'all',
              'point' => 'plain',
            ),
            'distance' => array(
              'show' => 'min',
              'refloc' => 1,
              'viewloc' => 0,
              'geoip' => TRUE,
            ),
          ),
          'full' => array(
            'content' => array(
              'show' => 'all',
              'point' => 'plain',
            ),
            'distance' => array(
              'show' => 'min',
              'refloc' => 1,
              'viewloc' => 0,
              'geoip' => TRUE,
            ),
          ),
        ),
      ),
      'formatter' => array(
        'point' => array(
          'user_settings' => 1,
          'format' => 'dd',
          'elevation' => '1',
          'dd_prec' => '6',
          'dms_prec' => '0',
          'cart_prec' => '2',
          'elevation_prec' => '0',
        ),
        'map' => array(
          'map' => '1',
          'static_map' => '1',
          'cache' => 1,
          'cache_expires' => '0',
          'content' => 'default',
        ),
        'map_links' => array(
          'google_find' => 0,
          'google_directions_from' => 0,
          'google_directions_to' => 0,
          'yahoo_find' => 0,
          'yahoo_directions_from' => 0,
          'yahoo_directions_to' => 0,
          'mapquest_find' => 0,
          'mapquest_directions_from' => '',
          'mapquest_directions_to' => '',
        ),
      ),
      'map_type' => 'earth',
      'enable_bounds' => 1,
      'enable_3D' => 0,
      'enable_pov' => 0,
      'enable_privacy' => 0,
    ),
    'widget' => array(
      'gmaps' => array(
        'input' => array(
          'enable_geocoder' => 1,
          'use_map' => 1,
          'collapsible' => 1,
          'collapsed' => '-1',
          'input_disabled' => 1,
        ),
        'meta' => array(
          'search' => array(
            'point_snippet' => 1,
            'refloc_snippet' => 1,
            'geoip_snippet' => 1,
          ),
          'meta' => array(
            'geo_position' => 1,
            'icbm' => 1,
          ),
          'rss' => array(
            'w3c' => 0,
            'simple' => 1,
            'gml' => 1,
          ),
          'link' => array(
            'teaser' => array(
              'content' => array(
                'show' => 'all',
                'point' => 'plain',
              ),
              'distance' => array(
                'show' => 'min',
                'refloc' => 1,
                'viewloc' => 0,
                'geoip' => TRUE,
              ),
            ),
            'full' => array(
              'content' => array(
                'show' => 'all',
                'point' => 'plain',
              ),
              'distance' => array(
                'show' => 'min',
                'refloc' => 1,
                'viewloc' => 0,
                'geoip' => TRUE,
              ),
            ),
          ),
        ),
        'formatter' => array(
          'point' => array(
            'user_settings' => 1,
            'format' => 'dd',
            'elevation' => '1',
            'dd_prec' => '6',
            'dms_prec' => '0',
            'cart_prec' => '2',
            'elevation_prec' => '0',
          ),
          'map' => array(
            'map' => '1',
            'static_map' => '1',
            'cache' => 1,
            'cache_expires' => '0',
            'content' => 'default',
          ),
          'map_links' => array(
            'google_find' => 0,
            'google_directions_from' => 0,
            'google_directions_to' => 0,
            'yahoo_find' => 0,
            'yahoo_directions_from' => 0,
            'yahoo_directions_to' => 0,
            'mapquest_find' => 0,
            'mapquest_directions_from' => '',
            'mapquest_directions_to' => '',
          ),
        ),
        'map_type' => 'earth',
        'enable_bounds' => 1,
        'enable_3D' => 0,
        'enable_pov' => 0,
        'enable_privacy' => 0,
      ),
      'default_value' => array(
        '0' => array(
          'value' => array(
            'point' => array(
              'latitude' => '',
              'longitude' => '',
              'elevation' => '0',
              'bounds' => array(),
              'map_type' => 'earth',
            ),
          ),
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Localización',
      'weight' => '-2',
      'description' => '',
      'type' => 'gmaps_content_point',
      'module' => 'gmaps_content',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Localización');

  return $fields;
}
