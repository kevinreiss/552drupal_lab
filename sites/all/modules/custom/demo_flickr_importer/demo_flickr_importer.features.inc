<?php
/**
 * @file
 * demo_flickr_importer.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function demo_flickr_importer_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
  if ($module == "feeds_tamper" && $api == "feeds_tamper_default") {
    return array("version" => "2");
  }
}
