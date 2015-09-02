<?php


/**
 * (re)create fields and instances
 */
function rsc_user_field_config() {

  $t = get_t(); // this function might run during install, or any other time
  $prefix = 'rscu'; // RSC user
  $fieldnames = array_keys(field_info_fields());

  // Try to create field for the user's full name and surname
  $fieldname = "{$prefix}_fullname";
  if (!in_array($fieldname, $fieldnames)) {
    field_create_field(array(
      'field_name'  => $fieldname,
      'type'        => 'text',
      'cardinality' => 1,
    ));
  }

  // reload field names to see whether it worked
  $fieldnames = array_keys(field_info_fields());

  // also get the field instances attached to user entities
  $instances_user = array_keys(field_info_instances('user','user'));

  // Try to attach a field instance to user entities
  if (!in_array($fieldname, $instances_user) && in_array($fieldname, $fieldnames)) {
    field_create_instance(array(
      'field_name'  => $fieldname,
      'entity_type' => 'user',
      'bundle'      => 'user',
      'label'       => $t('Full name and surname'),
      'required'    => false,
      'settings'    => array(
        'user_register_form' => true,
      ),
      'widget'      => array(
        'weight' => -10,  // at the top
      ),
      'description' => "Enter your full name and surname. This will be used as a display name for communications.",
    ));
    $instances[] = $fieldname;
  }
  
}

