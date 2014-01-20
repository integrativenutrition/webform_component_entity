<?php
/**
 * @file
 */

function webform_component_entity_add_to_webform(&$entity, $context = array()) {
}

function webform_component_entity_add_from_library($node){
  if($node) {
    drupal_goto('admin/structure/webform_component_entity/' . $node->nid . '/list');
  }
}

function webform_component_entity_list_entities($node = array()) {
  return array();
}

function webform_component_entity_info_page() {
  return array();
}
