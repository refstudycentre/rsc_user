<?php


/**
 * (re)create fields and instances
 */
function rsc_user_field_config() {

  $t = get_t(); // this function might run during install, or any other time
  $prefix = 'rscu'; // RSC user
  $fieldnames = array_keys(field_info_fields());

  // Try to create field for the user's full name and surname
  if (!in_array("{$prefix}_fullname", $fieldnames)) {
    field_create_field(array(
      'field_name'  => "{$prefix}_fullname",
      'type'        => 'text',
      'cardinality' => 1,
    ));
  }

  // Try to create field for the user's country
  if (!in_array("{$prefix}_country", $fieldnames)) {
    field_create_field(array(
      'field_name'  => "{$prefix}_country",
      'type'        => 'text',
      'cardinality' => 1,
    ));
  }

  // reload field names to see whether it worked
  $fieldnames = array_keys(field_info_fields());

  // also get the field instances attached to user entities
  $instances = array_keys(field_info_instances('user','user'));

  // Try to attach field instances to user entities

  if (!in_array("{$prefix}_fullname", $instances) && in_array("{$prefix}_fullname", $fieldnames)) {
    field_create_instance(array(
      'field_name'  => "{$prefix}_fullname",
      'entity_type' => 'user',
      'bundle'      => 'user',
      'label'       => $t('Full name and surname'),
      'required'    => false,
      'settings'    => array(
        'user_register_form' => true,
      ),
      'widget'      => array(
        'weight' => -20,  // at the top
      ),
      'description' => "Enter your full name and surname. This will be used as a display name for communications.",
    ));
    $instances[] = "{$prefix}_fullname";
  }

  if (!in_array("{$prefix}_country", $instances) && in_array("{$prefix}_country", $fieldnames)) {
    field_create_instance(array(
      'field_name'  => "{$prefix}_country",
      'entity_type' => 'user',
      'bundle'      => 'user',
      'label'       => $t('Country'),
      'required'    => true,
      'settings'    => array(
        'user_register_form' => true,
      ),
      'widget'      => array(
        'weight' => 1,    // after email, before timezone
      ),
      'description' => "This information will be kept private.",
    ));
    $instances[] = "{$prefix}_country";
  }
  
}

