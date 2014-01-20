<?php

class WebformComponentEntityController extends EntityAPIController {
  public function create(array $values = array()) {
    $values += array( 
      'wcid' => '',
      'is_new' => TRUE,
      'bundle' => 'webform_component_entity',
	  'name' => '',
	  'form_key' => '',
	  'type' => '',
      'value' => '',
      'extra' => '',
	  'mandatory' => 0,
	  'weight' => 0
    );      
    $entity = parent::create($values);
    return $entity;
  }
}
