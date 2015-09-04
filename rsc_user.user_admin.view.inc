<?php

$view = new view();
$view->name = 'user_admin';
$view->description = 'Filter through users';
$view->tag = 'default';
$view->base_table = 'users';
$view->human_name = 'User admin';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'User admin';
$handler->display->display_options['use_ajax'] = TRUE;
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['access']['perm'] = 'administer users';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
$handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Reset filters';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '100';
$handler->display->display_options['style_plugin'] = 'table';
$handler->display->display_options['style_options']['columns'] = array(
  'uid' => 'uid',
  'name_1' => 'name_1',
  'mail' => 'mail',
  'created' => 'created',
  'access' => 'access',
  'login' => 'login',
  'rid' => 'rid',
  'status' => 'status',
  'edit_node' => 'edit_node',
  'view_user' => 'view_user',
  'cancel_node' => 'cancel_node',
);
$handler->display->display_options['style_options']['default'] = 'created';
$handler->display->display_options['style_options']['info'] = array(
  'uid' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'name_1' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'mail' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'created' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'access' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'login' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'rid' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'status' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'edit_node' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'view_user' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'cancel_node' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
);
$handler->display->display_options['style_options']['sticky'] = TRUE;
/* Field: User: Uid */
$handler->display->display_options['fields']['uid']['id'] = 'uid';
$handler->display->display_options['fields']['uid']['table'] = 'users';
$handler->display->display_options['fields']['uid']['field'] = 'uid';
$handler->display->display_options['fields']['uid']['label'] = 'UID';
/* Field: User: Name */
$handler->display->display_options['fields']['name_1']['id'] = 'name_1';
$handler->display->display_options['fields']['name_1']['table'] = 'users';
$handler->display->display_options['fields']['name_1']['field'] = 'name';
/* Field: User: E-mail */
$handler->display->display_options['fields']['mail']['id'] = 'mail';
$handler->display->display_options['fields']['mail']['table'] = 'users';
$handler->display->display_options['fields']['mail']['field'] = 'mail';
/* Field: User: Full name and surname */
$handler->display->display_options['fields']['rscu_fullname']['id'] = 'rscu_fullname';
$handler->display->display_options['fields']['rscu_fullname']['table'] = 'field_data_rscu_fullname';
$handler->display->display_options['fields']['rscu_fullname']['field'] = 'rscu_fullname';
/* Field: User: Created date */
$handler->display->display_options['fields']['created']['id'] = 'created';
$handler->display->display_options['fields']['created']['table'] = 'users';
$handler->display->display_options['fields']['created']['field'] = 'created';
$handler->display->display_options['fields']['created']['date_format'] = 'short';
/* Field: User: Last access */
$handler->display->display_options['fields']['access']['id'] = 'access';
$handler->display->display_options['fields']['access']['table'] = 'users';
$handler->display->display_options['fields']['access']['field'] = 'access';
$handler->display->display_options['fields']['access']['date_format'] = 'short';
/* Field: User: Last login */
$handler->display->display_options['fields']['login']['id'] = 'login';
$handler->display->display_options['fields']['login']['table'] = 'users';
$handler->display->display_options['fields']['login']['field'] = 'login';
$handler->display->display_options['fields']['login']['date_format'] = 'short';
/* Field: User: Roles */
$handler->display->display_options['fields']['rid']['id'] = 'rid';
$handler->display->display_options['fields']['rid']['table'] = 'users_roles';
$handler->display->display_options['fields']['rid']['field'] = 'rid';
/* Field: User: Active */
$handler->display->display_options['fields']['status']['id'] = 'status';
$handler->display->display_options['fields']['status']['table'] = 'users';
$handler->display->display_options['fields']['status']['field'] = 'status';
$handler->display->display_options['fields']['status']['type'] = 'unicode-yes-no';
$handler->display->display_options['fields']['status']['not'] = 0;
/* Field: User: Edit link */
$handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
$handler->display->display_options['fields']['edit_node']['table'] = 'users';
$handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
$handler->display->display_options['fields']['edit_node']['label'] = 'Edit';
$handler->display->display_options['fields']['edit_node']['text'] = 'edit';
/* Field: User: Link */
$handler->display->display_options['fields']['view_user']['id'] = 'view_user';
$handler->display->display_options['fields']['view_user']['table'] = 'users';
$handler->display->display_options['fields']['view_user']['field'] = 'view_user';
$handler->display->display_options['fields']['view_user']['label'] = 'View';
$handler->display->display_options['fields']['view_user']['text'] = 'view';
/* Field: User: Cancel link */
$handler->display->display_options['fields']['cancel_node']['id'] = 'cancel_node';
$handler->display->display_options['fields']['cancel_node']['table'] = 'users';
$handler->display->display_options['fields']['cancel_node']['field'] = 'cancel_node';
$handler->display->display_options['fields']['cancel_node']['label'] = 'Delete';
$handler->display->display_options['fields']['cancel_node']['text'] = 'delete';
/* Filter criterion: User: Active */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'users';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = '1';
$handler->display->display_options['filters']['status']['group'] = 1;
$handler->display->display_options['filters']['status']['exposed'] = TRUE;
$handler->display->display_options['filters']['status']['expose']['operator_id'] = '';
$handler->display->display_options['filters']['status']['expose']['label'] = 'Active';
$handler->display->display_options['filters']['status']['expose']['operator'] = 'status_op';
$handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
$handler->display->display_options['filters']['status']['expose']['required'] = TRUE;
$handler->display->display_options['filters']['status']['expose']['remember'] = TRUE;
/* Filter criterion: User: Created date */
$handler->display->display_options['filters']['created']['id'] = 'created';
$handler->display->display_options['filters']['created']['table'] = 'users';
$handler->display->display_options['filters']['created']['field'] = 'created';
$handler->display->display_options['filters']['created']['group'] = 1;
$handler->display->display_options['filters']['created']['exposed'] = TRUE;
$handler->display->display_options['filters']['created']['expose']['operator_id'] = 'created_op';
$handler->display->display_options['filters']['created']['expose']['label'] = 'Created date';
$handler->display->display_options['filters']['created']['expose']['use_operator'] = TRUE;
$handler->display->display_options['filters']['created']['expose']['operator'] = 'created_op';
$handler->display->display_options['filters']['created']['expose']['identifier'] = 'created';
$handler->display->display_options['filters']['created']['expose']['remember'] = TRUE;
/* Filter criterion: User: E-mail */
$handler->display->display_options['filters']['mail']['id'] = 'mail';
$handler->display->display_options['filters']['mail']['table'] = 'users';
$handler->display->display_options['filters']['mail']['field'] = 'mail';
$handler->display->display_options['filters']['mail']['operator'] = 'contains';
$handler->display->display_options['filters']['mail']['group'] = 1;
$handler->display->display_options['filters']['mail']['exposed'] = TRUE;
$handler->display->display_options['filters']['mail']['expose']['operator_id'] = 'mail_op';
$handler->display->display_options['filters']['mail']['expose']['label'] = 'E-mail';
$handler->display->display_options['filters']['mail']['expose']['use_operator'] = TRUE;
$handler->display->display_options['filters']['mail']['expose']['operator'] = 'mail_op';
$handler->display->display_options['filters']['mail']['expose']['identifier'] = 'mail';
$handler->display->display_options['filters']['mail']['expose']['remember'] = TRUE;
/* Filter criterion: User: Full name and surname (rscu_fullname) */
$handler->display->display_options['filters']['rscu_fullname_value']['id'] = 'rscu_fullname_value';
$handler->display->display_options['filters']['rscu_fullname_value']['table'] = 'field_data_rscu_fullname';
$handler->display->display_options['filters']['rscu_fullname_value']['field'] = 'rscu_fullname_value';
$handler->display->display_options['filters']['rscu_fullname_value']['group'] = 1;
$handler->display->display_options['filters']['rscu_fullname_value']['exposed'] = TRUE;
$handler->display->display_options['filters']['rscu_fullname_value']['expose']['operator_id'] = 'rscu_fullname_value_op';
$handler->display->display_options['filters']['rscu_fullname_value']['expose']['label'] = 'Full name and surname (rscu_fullname)';
$handler->display->display_options['filters']['rscu_fullname_value']['expose']['use_operator'] = TRUE;
$handler->display->display_options['filters']['rscu_fullname_value']['expose']['operator'] = 'rscu_fullname_value_op';
$handler->display->display_options['filters']['rscu_fullname_value']['expose']['identifier'] = 'rscu_fullname_value';
$handler->display->display_options['filters']['rscu_fullname_value']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
  4 => 0,
  5 => 0,
  6 => 0,
);
/* Filter criterion: User: Last access */
$handler->display->display_options['filters']['access']['id'] = 'access';
$handler->display->display_options['filters']['access']['table'] = 'users';
$handler->display->display_options['filters']['access']['field'] = 'access';
$handler->display->display_options['filters']['access']['group'] = 1;
$handler->display->display_options['filters']['access']['exposed'] = TRUE;
$handler->display->display_options['filters']['access']['expose']['operator_id'] = 'access_op';
$handler->display->display_options['filters']['access']['expose']['label'] = 'Last access';
$handler->display->display_options['filters']['access']['expose']['use_operator'] = TRUE;
$handler->display->display_options['filters']['access']['expose']['operator'] = 'access_op';
$handler->display->display_options['filters']['access']['expose']['identifier'] = 'access';
$handler->display->display_options['filters']['access']['expose']['remember'] = TRUE;
/* Filter criterion: User: Last login */
$handler->display->display_options['filters']['login']['id'] = 'login';
$handler->display->display_options['filters']['login']['table'] = 'users';
$handler->display->display_options['filters']['login']['field'] = 'login';
$handler->display->display_options['filters']['login']['group'] = 1;
$handler->display->display_options['filters']['login']['exposed'] = TRUE;
$handler->display->display_options['filters']['login']['expose']['operator_id'] = 'login_op';
$handler->display->display_options['filters']['login']['expose']['label'] = 'Last login';
$handler->display->display_options['filters']['login']['expose']['use_operator'] = TRUE;
$handler->display->display_options['filters']['login']['expose']['operator'] = 'login_op';
$handler->display->display_options['filters']['login']['expose']['identifier'] = 'login';
$handler->display->display_options['filters']['login']['expose']['remember'] = TRUE;
/* Filter criterion: User: Roles */
$handler->display->display_options['filters']['rid']['id'] = 'rid';
$handler->display->display_options['filters']['rid']['table'] = 'users_roles';
$handler->display->display_options['filters']['rid']['field'] = 'rid';
$handler->display->display_options['filters']['rid']['group'] = 1;
$handler->display->display_options['filters']['rid']['exposed'] = TRUE;
$handler->display->display_options['filters']['rid']['expose']['operator_id'] = 'rid_op';
$handler->display->display_options['filters']['rid']['expose']['label'] = 'Roles';
$handler->display->display_options['filters']['rid']['expose']['use_operator'] = TRUE;
$handler->display->display_options['filters']['rid']['expose']['operator'] = 'rid_op';
$handler->display->display_options['filters']['rid']['expose']['identifier'] = 'rid';
$handler->display->display_options['filters']['rid']['expose']['remember'] = TRUE;
$handler->display->display_options['filters']['rid']['expose']['multiple'] = TRUE;
$handler->display->display_options['filters']['rid']['reduce_duplicates'] = TRUE;

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page');
$handler->display->display_options['path'] = 'admin/people/rsc-user-admin';
$handler->display->display_options['menu']['type'] = 'normal';
$handler->display->display_options['menu']['title'] = 'RSC User Administration';
$handler->display->display_options['menu']['weight'] = '0';
$handler->display->display_options['menu']['name'] = 'management';
$handler->display->display_options['menu']['context'] = 0;
