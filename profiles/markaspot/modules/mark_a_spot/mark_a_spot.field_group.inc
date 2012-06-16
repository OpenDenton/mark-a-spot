<?php
/**
 * @file
 * mark_a_spot.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function mark_a_spot_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_location|node|report|form';
  $field_group->group_name = 'group_location';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'report';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Location',
    'weight' => '1',
    'children' => array(
      0 => 'field_geo',
      1 => 'field_zip',
      2 => 'field_city',
      3 => 'field_common',
      4 => 'field_address',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Location',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_location|node|report|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_report|node|report|form';
  $field_group->group_name = 'group_report';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'report';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Was liegt vor',
    'weight' => '0',
    'children' => array(
      0 => 'body',
      1 => 'field_image',
      2 => 'field_category',
      3 => 'field_e_mail',
      4 => 'title',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Report',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_report|node|report|form'] = $field_group;

  return $export;
}