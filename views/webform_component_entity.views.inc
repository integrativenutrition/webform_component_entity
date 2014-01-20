<?php

function webform_component_entity_views_data() {
  $data['webform_component_entity']['table']['group'] = t('Webform Component');
  $data['webform_component_entity']['table']['base'] = array(
    'field' => 'wcid', // This is the identifier field for the view.
    'title' => t('Webform Component'),
    'help' => t('Example table contains example content and can be related to Webform Component.'),
    'weight' => -10,
  );
  $data['webform_component_entity']['table']['join'] = array(
    'webform_component_entity' => array(
      'left_field' => 'wcid',
      'field' => 'wcid',
    ),
  );
  $data['webform_component_entity']['wcid'] = array(
    'title' => t('Webform Component'),
    'help' => t('Some example content that references a Webform Component.'),
    
    // Define a relationship to the {node} table, so webform_component_entity views can
    // add a relationship to nodes. If you want to define a relationship the
    // other direction, use hook_views_data_alter(), or use the 'implicit' join
    // method described above.
    'relationship' => array(
      'base' => 'webform_component_entity', // The name of the table to join with.
      'base field' => 'wcid', // The name of the field on the joined table.
      'handler' => 'views_handler_field',
      'label' => t('Default label for the relationship'),
      'title' => t('Title shown when adding the relationship'),
      'help' => t('More information on this relationship'),
    ),
  );
  return $data;
}


/**
 * Implements hook_views_default_views().
 */
function webform_component_entity_views_default_views() {
  $views = array();
  
  			$view = new view();
  $view->name = 'webform_component';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'webform_component_entity';
  $view->human_name = 'Webform Component';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Webform Component';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Field: Webform Componen tEntity: Component Tags */
  $handler->display->display_options['fields']['field_component_tags']['id'] = 'field_component_tags';
  $handler->display->display_options['fields']['field_component_tags']['table'] = 'field_data_field_component_tags';
  $handler->display->display_options['fields']['field_component_tags']['field'] = 'field_component_tags';
  /* Field: Webform Componen tEntity: Sample Additional Field */
  $handler->display->display_options['fields']['field_sample_additional']['id'] = 'field_sample_additional';
  $handler->display->display_options['fields']['field_sample_additional']['table'] = 'field_data_field_sample_additional';
  $handler->display->display_options['fields']['field_sample_additional']['field'] = 'field_sample_additional';
  /* Field: Bulk operations: Webform Component */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'webform_component_entity';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::views_bulk_operations_delete_item' => array(
  	'selected' => 0,
  	'postpone_processing' => 0,
  	'skip_confirmation' => 0,
  	'override_label' => 0,
  	'label' => '',
    ),
    'action::views_bulk_operations_script_action' => array(
  	'selected' => 0,
  	'postpone_processing' => 0,
  	'skip_confirmation' => 0,
  	'override_label' => 0,
  	'label' => '',
    ),
    'action::views_bulk_operations_modify_action' => array(
  	'selected' => 0,
  	'postpone_processing' => 0,
  	'skip_confirmation' => 0,
  	'override_label' => 0,
  	'label' => '',
  	'settings' => array(
  	  'show_all_tokens' => 1,
  	  'display_values' => array(
  		'_all_' => '_all_',
  	  ),
  	),
    ),
    'action::views_bulk_operations_argument_selector_action' => array(
  	'selected' => 1,
  	'skip_confirmation' => 1,
  	'override_label' => 0,
  	'label' => '',
  	'settings' => array(
  	  'url' => 'admin/structure/views/view/webform_component',
  	),
    ),
    'action::system_send_email_action' => array(
  	'selected' => 0,
  	'postpone_processing' => 0,
  	'skip_confirmation' => 0,
  	'override_label' => 0,
  	'label' => '',
    ),
  );
  /* Sort criterion: Webform Componen tEntity: Component Tags (field_component_tags) */
  $handler->display->display_options['sorts']['field_component_tags_tid']['id'] = 'field_component_tags_tid';
  $handler->display->display_options['sorts']['field_component_tags_tid']['table'] = 'field_data_field_component_tags';
  $handler->display->display_options['sorts']['field_component_tags_tid']['field'] = 'field_component_tags_tid';
  $handler->display->display_options['sorts']['field_component_tags_tid']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_component_tags_tid']['expose']['label'] = 'Component Tags';
  /* Sort criterion: Webform Componen tEntity: Sample Additional Field (field_sample_additional) */
  $handler->display->display_options['sorts']['field_sample_additional_value']['id'] = 'field_sample_additional_value';
  $handler->display->display_options['sorts']['field_sample_additional_value']['table'] = 'field_data_field_sample_additional';
  $handler->display->display_options['sorts']['field_sample_additional_value']['field'] = 'field_sample_additional_value';
  $handler->display->display_options['sorts']['field_sample_additional_value']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_sample_additional_value']['expose']['label'] = 'Sample Additional Field';
  /* Filter criterion: Webform Componen tEntity: Component Tags (field_component_tags) */
  $handler->display->display_options['filters']['field_component_tags_tid']['id'] = 'field_component_tags_tid';
  $handler->display->display_options['filters']['field_component_tags_tid']['table'] = 'field_data_field_component_tags';
  $handler->display->display_options['filters']['field_component_tags_tid']['field'] = 'field_component_tags_tid';
  $handler->display->display_options['filters']['field_component_tags_tid']['value'] = '';
  $handler->display->display_options['filters']['field_component_tags_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_component_tags_tid']['expose']['operator_id'] = 'field_component_tags_tid_op';
  $handler->display->display_options['filters']['field_component_tags_tid']['expose']['label'] = 'Component Tags';
  $handler->display->display_options['filters']['field_component_tags_tid']['expose']['operator'] = 'field_component_tags_tid_op';
  $handler->display->display_options['filters']['field_component_tags_tid']['expose']['identifier'] = 'field_component_tags_tid';
  $handler->display->display_options['filters']['field_component_tags_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_component_tags_tid']['vocabulary'] = 'component_tags';
  /* Filter criterion: Webform Componen tEntity: Sample Additional Field (field_sample_additional) */
  $handler->display->display_options['filters']['field_sample_additional_value']['id'] = 'field_sample_additional_value';
  $handler->display->display_options['filters']['field_sample_additional_value']['table'] = 'field_data_field_sample_additional';
  $handler->display->display_options['filters']['field_sample_additional_value']['field'] = 'field_sample_additional_value';
  $handler->display->display_options['filters']['field_sample_additional_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_sample_additional_value']['expose']['operator_id'] = 'field_sample_additional_value_op';
  $handler->display->display_options['filters']['field_sample_additional_value']['expose']['label'] = 'Sample Additional Field';
  $handler->display->display_options['filters']['field_sample_additional_value']['expose']['operator'] = 'field_sample_additional_value_op';
  $handler->display->display_options['filters']['field_sample_additional_value']['expose']['identifier'] = 'field_sample_additional_value';
  $handler->display->display_options['filters']['field_sample_additional_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'admin/structure/webform_component_entity';
  
  $views[] = $view;
  return $views;
}
