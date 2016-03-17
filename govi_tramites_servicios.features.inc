<?php
/**
 * @file
 * govi_tramites_servicios.features.inc
 */

/**
 * Implements hook_node_info().
 */
function govi_tramites_servicios_node_info() {
  $items = array(
    'tramites_servicios' => array(
      'name' => t('Trámites y Servicios'),
      'base' => 'node_content',
      'description' => t('Publicar la información relacionada con los trámites y servicios de la Entidad.'),
      'has_title' => '1',
      'title_label' => t('Nombre'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
