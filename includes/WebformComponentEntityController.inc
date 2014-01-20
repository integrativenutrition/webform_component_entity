<?php

class WebformComponentEntityController extends EntityAPIController {
  public function create(array $values = array()) {
    $values += array( 
      'wcid' => '',
      'is_new' => TRUE,
      'bundle' => 'webform_component_entity',
      'value' => '',
      'extra' => '',
    );      
    $entity = parent::create($values);
    return $entity;
  }
}
